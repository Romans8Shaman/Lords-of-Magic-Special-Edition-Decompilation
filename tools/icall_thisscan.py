#!/usr/bin/env python3
"""icall_thisscan.py : for every C++ virtual icall site (icalls.tsv this=1, callee-pop) inside hookset C functions,
compare Ghidra's argument count n at the /*IC:site*/ marker with the number p of `push` instructions directly
before the call in the ORIGINAL (same block: stop at call/jmp/ret/branch target/esp arithmetic).
n == p+1 : Ghidra passed `this` as first arg (gen thiscall rule correct).
n == p   : Ghidra DROPPED `this` -> gen made arg1 the this (0050f290 class) -> BUG unless hand-fixed.
Writes build/icall_thisscan.tsv: fn site n p verdict."""
import sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, gen
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
md = Cs(CS_ARCH_X86, CS_MODE_32)
F = lomdb.funcs(); info = gen.icall_info()
hs = sys.argv[1] if len(sys.argv) > 1 else os.path.join(lomdb.ROOT, 'build', 'hookset_r75.txt')
C = [l.split()[0] for l in open(hs) if len(l.split()) == 1]
def targets(f):
    t = set()
    for i in md.disasm(lomdb.read_va(f.addr, f.maxaddr - f.addr + 1), f.addr):
        if i.mnemonic.startswith('j'):
            try: t.add(int(i.op_str, 16))
            except ValueError: pass
    return t
out = []
for a in C:
    p_ = os.path.join(lomdb.GO, 'code', a + '.c')
    if not os.path.exists(p_): continue
    t = open(p_).read()
    if '/*IC:' not in t: continue
    f = F[int(a, 16)]; ins = list(md.disasm(lomdb.read_va(f.addr, f.maxaddr - f.addr + 1), f.addr)); idx = {i.address: k for k, i in enumerate(ins)}
    bt = None
    for m in re.finditer(r'/\*IC:([0-9a-f]{8})\*/', t):
        site = int(m.group(1), 16)
        if info.get(site, (0, 1)) != (1, 0) or site not in idx: continue
        st = m.start() - 1; tt = t[:m.start()] + t[m.end():]
        e = gen._match(tt, st); k = e + 1
        while k < len(tt) and tt[k].isspace(): k += 1
        if e < 0 or k >= len(tt) or tt[k] != '(': continue
        al = gen._split_args(tt[k + 1:gen._match(tt, k)])
        while al and re.match(r'^\s*unaff_E(BX|SI|DI|BP)\s*$', al[-1]): al = al[:-1]
        n = len(al)
        if bt is None: bt = targets(f)
        p = 0; j = idx[site] - 1
        while j >= 0:
            i = ins[j]; mn = i.mnemonic
            if mn == 'push': p += 1
            elif mn in ('call', 'ret', 'jmp') or mn.startswith('j') or mn == 'pop' or ('esp' in i.op_str.split(',')[0] and mn in ('add', 'sub', 'lea', 'mov')): break
            if i.address in bt: break
            j -= 1
        v = 'ok' if n == p + 1 else 'DROPPED_THIS' if n == p else 'unclear'
        out.append((a, '%08x' % site, n, p, v))
with open(os.path.join(lomdb.ROOT, 'build', 'icall_thisscan.tsv'), 'w') as fo:
    for r in out: fo.write('\t'.join(map(str, r)) + '\n')
import collections
print(collections.Counter(r[4] for r in out))
for r in out:
    if r[4] != 'ok': print(*r)
