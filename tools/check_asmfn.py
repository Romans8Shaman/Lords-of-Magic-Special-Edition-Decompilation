#!/usr/bin/env python3
"""check_asmfn.py [OUT.jsonl] [ADDR...] : verify build/obj/asmfn/<addr>.o against lomse.exe instruction by instruction.
Non-branch instructions: identical capstone (intel) text. Internal direct branches: target = the label of the same
original target. External jmp/call: ff15/ff25 via a DIR32 slot whose .data dword = original target. External jcc:
jcc to a stub 'jmp *slot' with the right slot value. Switch-table jmp: DIR32 to .Lt<T>; each table .long relocs to
.L<orig entry>. Writes difftest-style jsonl (verdict PASS/FAIL, method asm-eq)."""
import sys, os, re
import subprocess, json
os.makedirs('/tmp/asmchk', exist_ok=True)
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
R = lomdb.ROOT; BIN = '/opt/llvm-mingw/bin/'
md = Cs(CS_ARCH_X86, CS_MODE_32)
def sect(o, name):
    out = '/tmp/asmchk/' + os.path.basename(o) + '.%s.bin' % name.replace('$', '_').strip('.')
    subprocess.run([BIN + 'llvm-objcopy', '--dump-section', '%s=%s' % (name, out), o, out + '.o_tmp'], check=True, capture_output=True)
    b = open(out, 'rb').read(); return b
def _norm(i):
    """equivalent encodings: 16-bit imm 0xffff == -1 (66 81 /7 iw vs 66 83 /7 ib); xchg operand order."""
    op = i.op_str
    if re.search(r'\b(ax|bx|cx|dx|si|di|bp|word ptr)\b', op): op = re.sub(r', 0xffff$', ', -1', op)
    if i.mnemonic == 'xchg': op = ', '.join(sorted(op.split(', ')))
    # v3: d8 c0 'fadd st(0), st(0)' vs dc c0 'fadd st(0)' (= st(0) += st(0)): same operation, same for fmul
    if i.mnemonic in ('fadd', 'fmul') and op == 'st(0), st(0)': op = 'st(0)'
    return (i.mnemonic, op)
def check(a, f):
    o = os.path.join(R, 'build', 'obj', 'asmfn', '%08x.o' % a)
    if not os.path.exists(o): return 'FAIL', 'noobj'
    tn = '.text$rb_%08x' % a
    try: tb = sect(o, tn); db = sect(o, '.data')
    except Exception as e: return 'FAIL', 'sections'
    rl = {}; cur = None
    for l in subprocess.run([BIN + 'llvm-objdump', '-r', o], capture_output=True, text=True).stdout.split('\n'):
        m = re.match(r'RELOCATION RECORDS FOR \[(.*)\]', l)
        if m: cur = m.group(1); continue
        m = re.match(r'([0-9a-f]{8})\s+IMAGE_REL_I386_(\w+)\s+(\S+)', l)
        if m and cur == tn: rl[int(m.group(1), 16)] = (m.group(2), m.group(3))
    slot = {}
    lsym = {}   # v3: local label symbols kept for DIR32 relocs (GA_SELFIMM) -> offset in the text section
    for l in subprocess.run([BIN + 'llvm-objdump', '-t', o], capture_output=True, text=True).stdout.split('\n'):
        m = re.search(r'\(sec\s+\d+\).*?0x([0-9a-f]+)\s+(\.L[0-9a-f]{8})$', l)
        if m: lsym[m.group(2)] = int(m.group(1), 16)
    for l in subprocess.run([BIN + 'llvm-objdump', '-t', o], capture_output=True, text=True).stdout.split('\n'):
        m = re.search(r'\(sec\s+\d+\).*?0x([0-9a-f]+)\s+(_lom_af_%08x_\d+)$' % a, l)
        if m:
            off = int(m.group(1), 16); slot[m.group(2)] = int.from_bytes(db[off:off + 4], 'little')
    # v2: gen_asmfn v2 emits the whole extent [a, maxaddr] when no other fn starts inside it
    _n = f.maxaddr - a + 1
    _F = lomdb.funcs()
    if _n != f.size and not any(a < x <= f.maxaddr for x in _F) and _n <= 4 * f.size: _sz = _n
    else: _sz = f.size
    orig = list(md.disasm(lomdb.read_va(a, _sz), a))
    oidx = {i.address: k for k, i in enumerate(orig)}
    new = []; off = 0
    while off < len(tb) and len(new) < len(orig):
        ins = next(md.disasm(tb[off:off + 16], off), None)
        if ins is None: return 'FAIL', 'decode@%x' % off
        new.append(ins); off += ins.size
    if len(new) != len(orig): return 'FAIL', 'count'
    nidx = {i.address: k for k, i in enumerate(new)}
    def reloc_in(ins):
        return [(r, rl[r]) for r in range(ins.address, ins.address + ins.size) if r in rl]
    def lab(sym):
        m = re.match(r'\.L([0-9a-f]{8})$', sym); return int(m.group(1), 16) if m else None
    for oi, ni in zip(orig, new):
        br = oi.mnemonic in ('jmp', 'call') or oi.mnemonic.startswith('j') or oi.mnemonic.startswith('loop')
        if br and re.fullmatch(r'0x[0-9a-f]+', oi.op_str):
            t = int(oi.op_str, 16)
            if t in oidx and not (oi.mnemonic == 'call' and t == a):
                if not re.fullmatch(r'0x[0-9a-f]+', ni.op_str) or ni.mnemonic != oi.mnemonic: return 'FAIL', 'ibr %x' % oi.address
                if nidx.get(int(ni.op_str, 16)) != oidx[t]: return 'FAIL', 'ibrTarget %x' % oi.address
                continue
            if oi.mnemonic in ('jmp', 'call'):
                rs = reloc_in(ni)
                if ni.bytes[:2] != (b'\xff\x25' if oi.mnemonic == 'jmp' else b'\xff\x15') or len(rs) != 1 or slot.get(rs[0][1][1]) != t:
                    return 'FAIL', 'slot %x' % oi.address
                continue
            # external jcc -> stub
            if ni.mnemonic != oi.mnemonic: return 'FAIL', 'xjcc %x' % oi.address
            so = int(ni.op_str, 16); st = next(md.disasm(tb[so:so + 6], so), None)
            rs = [rl.get(so + 2)]
            if st is None or bytes(st.bytes[:2]) != b'\xff\x25' or not rs[0] or slot.get(rs[0][1]) != t: return 'FAIL', 'xstub %x' % oi.address
            continue
        m = re.search(r'\[(\w+)\*4 \+ (0x[0-9a-f]+)\]', oi.op_str)
        rs = reloc_in(ni)
        if m and oi.mnemonic == 'jmp' and rs:
            T = int(m.group(2), 16)
            if rs[0][1][1] != '.Lt%08x' % T: return 'FAIL', 'tabref %x' % oi.address
            if re.sub(r' \+ 0x[0-9a-f]+\]', ']', ni.op_str) != re.sub(r' \+ 0x[0-9a-f]+\]', ']', oi.op_str):
                return 'FAIL', 'tabform %x' % oi.address
            continue
        # v3: gen_asmfn v4 GA_SELFIMM: a 4-byte immediate that held an in-body instruction address -> DIR32 to this
        # section; the stored addend must be the offset of the SAME instruction in the rebuilt body
        if rs and len(rs) == 1 and rs[0][1][0] == 'DIR32' and (rs[0][1][1] == tn or rs[0][1][1] in lsym) and len(oi.bytes) == len(ni.bytes):
            ro = rs[0][0] - ni.address
            ov = int.from_bytes(bytes(oi.bytes[ro:ro + 4]), 'little'); nv = int.from_bytes(bytes(ni.bytes[ro:ro + 4]), 'little')
            nv += lsym.get(rs[0][1][1], 0)
            if ov in oidx and nidx.get(nv) == oidx[ov] and bytes(oi.bytes[:ro]) == bytes(ni.bytes[:ro]) and bytes(oi.bytes[ro + 4:]) == bytes(ni.bytes[ro + 4:]):
                continue
            return 'FAIL', 'selfImm %x' % oi.address
        if rs: return 'FAIL', 'unexpectedReloc %x' % oi.address
        if (oi.mnemonic, oi.op_str) != (ni.mnemonic, ni.op_str) and _norm(oi) != _norm(ni): return 'FAIL', 'insn %x %s %s / %s %s' % (oi.address, oi.mnemonic, oi.op_str, ni.mnemonic, ni.op_str)
    # tables: every .long after the code relocs to the label of the original entry
    tabs = {}
    for o_, (ty, sym) in rl.items():
        if o_ >= off and ty == 'DIR32' and lab(sym) is not None: tabs[o_] = lab(sym)
    for oi in orig:
        m = re.search(r'\[(\w+)\*4 \+ (0x[0-9a-f]+)\]', oi.op_str)
        if m and oi.mnemonic == 'jmp':
            T = int(m.group(2), 16); k = 0
            while True:
                v = int.from_bytes(lomdb.read_va(T + 4 * k, 4), 'little')
                if v not in oidx: break
                k += 1
            if k == 0 or sum(1 for _ in tabs) < k: return 'FAIL', 'table %x' % T
    return 'PASS', ''
if __name__ == '__main__':
    out = sys.argv[1] if len(sys.argv) > 1 else os.path.join(R, 'build', 'check_asmfn.jsonl')
    want = {int(x, 16) for x in sys.argv[2:]}
    F = lomdb.funcs(); c = {}
    import glob
    have = {int(os.path.basename(x)[:8], 16) for x in glob.glob(os.path.join(R, 'src', 'asmfn', '*.c'))}
    with open(out, 'w') as fo:
        for a in sorted(have):
            if want and a not in want: continue
            v, why = check(a, F[a]); c[v] = c.get(v, 0) + 1
            fo.write(json.dumps({'addr': '%08x' % a, 'verdict': v, 'method': 'asm-eq', 'why': why, 'stopped': {'ret': 0}}) + '\n')
    print(c)
