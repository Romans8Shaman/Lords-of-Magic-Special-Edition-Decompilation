#!/usr/bin/env python3
"""check_funclets.py [OUT.jsonl] : verify each build/obj/asm/<addr>.o against the original funclet bytes.
Non-branch instructions must be byte-identical; each original direct jmp/call rel32 must be a jmp/call through
a DIR32 slot whose .data dword equals the original target. Writes difftest-style jsonl (verdict PASS/FAIL, method asm-eq)."""
import sys, os, re, subprocess, json
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
R = lomdb.ROOT; OD = '/opt/llvm-mingw/bin/llvm-objdump'
md = Cs(CS_ARCH_X86, CS_MODE_32)
def check(a, f):
    o = os.path.join(R, 'build', 'obj', 'asm', '%08x.o' % a)
    if not os.path.exists(o): return 'FAIL', 'noobj'
    d = subprocess.run([OD, '-d', '-r', o], capture_output=True, text=True).stdout
    insts = []; relocs = {}
    for l in d.split('\n'):
        m = re.match(r'\s+([0-9a-f]+): ((?:[0-9a-f]{2} )+)\s*\t(.*)', l)
        if m: insts.append((int(m.group(1), 16), bytes.fromhex(m.group(2).replace(' ', '')))); continue
        m = re.match(r'\s+([0-9a-f]+):\s+IMAGE_REL_I386_DIR32\s+(\S+)', l)
        if m: relocs[int(m.group(1), 16)] = m.group(2)
    ds = subprocess.run([OD, '-s', '-j', '.data', '-t', o], capture_output=True, text=True).stdout
    # slot values: .data in file order; symbols _lom_fl_<a>_<k> are consecutive dwords from offset 0
    hexd = ''.join(re.findall(r'^ [0-9a-f]{4} ((?:[0-9a-f]{8} ?)+)', ds, re.M)).replace(' ', '')
    words = [int.from_bytes(bytes.fromhex(hexd[i:i + 8]), 'little') for i in range(0, len(hexd), 8)]
    orig = list(md.disasm(lomdb.read_va(a, f.size), a))
    if len(orig) != len(insts): return 'FAIL', 'count %d/%d' % (len(orig), len(insts))
    for oi, (off, b) in zip(orig, insts):
        if oi.mnemonic in ('jmp', 'call') and oi.op_str.startswith('0x'):
            t = int(oi.op_str, 16)
            if b[:2] != (b'\xff\x25' if oi.mnemonic == 'jmp' else b'\xff\x15'): return 'FAIL', 'branchform %x' % oi.address
            sym = relocs.get(off + 2)
            m = re.match(r'_lom_fl_%08x_(\d+)$' % a, sym or '')
            if not m or int(m.group(1)) >= len(words) or words[int(m.group(1))] != t: return 'FAIL', 'slot %x' % oi.address
        elif bytes(oi.bytes) != b: return 'FAIL', 'bytes %x' % oi.address
    return 'PASS', ''
if __name__ == '__main__':
    out = open(sys.argv[1] if len(sys.argv) > 1 else os.path.join(R, 'build', 'check_funclets.jsonl'), 'w')
    F = lomdb.funcs(); c = {}
    import glob
    have = {int(os.path.basename(x)[:8], 16) for x in glob.glob(os.path.join(R, 'src', 'asm', '*.c'))}
    for a, f in sorted(F.items()):
        if a not in have: continue
        v, why = check(a, f); c[v] = c.get(v, 0) + 1
        out.write(json.dumps({'addr': '%08x' % a, 'verdict': v, 'method': 'asm-eq', 'why': why, 'stopped': {'ret': 0}}) + '\n')
    print(c)
