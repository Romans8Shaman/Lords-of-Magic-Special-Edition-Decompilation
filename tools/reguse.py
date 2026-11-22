#!/usr/bin/env python3
"""reguse.py : static entry-register analysis of every ORIGINAL lomse.exe function.
For each function: does any path from entry READ ecx / edx before writing it (calls clobber both)?
`push ecx` / `push edx` are treated as stack reservation (MSVC idiom), not reads.
Tail jumps / thunk jumps into another function inherit that function's reads (fixpoint).
Also scans the Ghidra decomp for in_stack_XXXX (stack args the prototype is missing) and in_ECX/in_EDX.
Writes build/reguse.tsv: addr ecx edx in_stack_max_end proto_regs proto_nstack mismatch"""
import sys, os, struct, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone import x86_const as X
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
ECXF = {X.X86_REG_ECX, X.X86_REG_CX, X.X86_REG_CL, X.X86_REG_CH}
EDXF = {X.X86_REG_EDX, X.X86_REG_DX, X.X86_REG_DL, X.X86_REG_DH}
F = lomdb.funcs()
CHKSTK = {0x539630}
pe = lomdb.pe(); base = pe.OPTIONAL_HEADER.ImageBase
text = [s for s in pe.sections if s.Characteristics & 0x20000000][0]
tva = base + text.VirtualAddress; tdata = text.get_data()
_ins = {}
def ins_at(a):
    if a in _ins: return _ins[a]
    off = a - tva
    if off < 0 or off >= len(tdata): _ins[a] = None; return None
    i = next(md.disasm(tdata[off:off + 16], a), None); _ins[a] = i; return i

def analyse(fa, results):
    """returns (reads_ecx, reads_edx, tailtargets)"""
    f = F[fa]; lo, hi = fa, max(f.maxaddr, fa)
    rd_c = rd_d = False; tails = []
    seen = set(); work = [(fa, frozenset())]
    steps = 0
    while work and steps < 20000:
        a, defd = work.pop()
        while True:
            steps += 1
            key = (a, defd)
            if key in seen: break
            seen.add(key)
            i = ins_at(a)
            if i is None: break
            m = i.mnemonic
            try: rd, wr = i.regs_access()
            except Exception: rd, wr = (), ()
            ops = i.op_str.replace(' ', '').split(',')
            if m in ('xor', 'sub', 'sbb') and len(ops) == 2 and ops[0] == ops[1]: rd = ()
            if m == 'push' and ops[0] in ('ecx', 'edx'): rd = ()
            if len(ops) == 2 and ops[0] in ('ecx', 'edx') and ((m == 'or' and ops[1] in ('0xffffffff', '-1')) or (m == 'and' and ops[1] == '0')):
                rd = tuple(r for r in rd if r not in (ECXF if ops[0] == 'ecx' else EDXF)); wr = tuple(wr) + ((X.X86_REG_ECX,) if ops[0] == 'ecx' else (X.X86_REG_EDX,))
            if 'c' not in defd and any(r in ECXF for r in rd): rd_c = rd_c or a
            if 'd' not in defd and any(r in EDXF for r in rd): rd_d = rd_d or a
            if any(r in ECXF for r in wr): defd = defd | {'c'}
            if any(r in EDXF for r in wr): defd = defd | {'d'}
            if m == 'call':
                # MSVC __chkstk (0x539630) preserves ecx/edx (push ecx ... mov ecx,[eax]); only eax changes
                if not (i.operands[0].type == X.X86_OP_IMM and (i.operands[0].imm & 0xffffffff) in CHKSTK): defd = defd | {'c', 'd'}
            if m.startswith('ret') or m in ('hlt', 'int3'): break
            if m.startswith('j'):
                op = i.operands[0]
                if op.type == X.X86_OP_IMM:
                    t = op.imm & 0xffffffff
                    if t < lo or t > hi or (t in F and t != fa):
                        tails.append((t, defd))
                        if m == 'jmp': break
                    else:
                        if m == 'jmp': a = t; continue
                        work.append((t, defd))
                else:
                    break  # computed jump: switch tables are walked by Ghidra; stop path
            a = a + i.size
            if a > hi + 1: break
    return rd_c, rd_d, tails

res = {}; tails = {}
for fa in F:
    c, d, t = analyse(fa, res); res[fa] = [int(c), int(d)]; tails[fa] = t
changed = True
while changed:
    changed = False
    for fa, ts in tails.items():
        for t, defd in ts:
            if t in res:
                if res[t][0] and 'c' not in defd and not res[fa][0]: res[fa][0] = True; changed = True
                if res[t][1] and 'd' not in defd and not res[fa][1]: res[fa][1] = True; changed = True

import difftest
out = open(os.path.join(lomdb.ROOT, 'build', 'reguse.tsv'), 'w')
cnt = {}
for fa in sorted(F):
    f = F[fa]
    t = lomdb.code_text(fa) or ''
    st = 0
    for m in re.finditer(r'\bin_stack_([0-9a-f]{8})\b', t):
        o = int(m.group(1), 16)
        st = max(st, o + 4)
    try:
        ret, params = lomdb.parse_proto(f.proto, f.name)
        lay = difftest.stack_layout(f.cc, params)
    except Exception: lay = None
    if lay is None: lay = (-1, [])
    pn, pregs = lay
    mm = []
    if f.thunk: mm = []
    else:
        if res[fa][0] and 'ecx' not in pregs: mm.append('ecx')
        if res[fa][1] and 'edx' not in pregs: mm.append('edx')
        if pn >= 0 and st > 4 * (pn + 1): mm.append('stack%d' % ((st - 4) // 4))
    for k in mm: cnt[k[:5]] = cnt.get(k[:5], 0) + 1
    out.write('%08x\t%x\t%x\t%d\t%s\t%d\t%s\t%s\n' % (fa, res[fa][0], res[fa][1], st, ','.join(pregs), pn, ','.join(mm), f.cc))
print('functions', len(F), 'mismatches', cnt)
