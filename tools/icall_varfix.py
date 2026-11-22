#!/usr/bin/env python3
"""icall_varfix.py : indirect call sites whose backward push count (icallargs.py) includes dwords that really belong
to the NEXT direct cdecl call (pushed before the icall, e.g. a debug string for varargs 004756f0:
push str; push a; push this; call [vtbl+x]; push eax; call 004756f0; add esp,8). Forward walk from the icall to the
next direct call + 'add esp,N': deficit = N/4 - pushes in between; real icall args = n - deficit.
Writes build/fixicallargs_var.tsv (site func this_call n_stack_args) for FixICallArgs.java where real < Ghidra's count."""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
md = Cs(CS_ARCH_X86, CS_MODE_32); R = lomdb.ROOT; F = lomdb.funcs(); img = lomdb.pe().get_memory_mapped_image()
out = []
for l in open(os.path.join(R, 'build', 'icallargs.tsv')):
    fn, site, th, n, gs, st = l.rstrip('\n').split('\t')
    if int(gs) < 0: continue
    f = F[int(fn, 16)]; a = int(site, 16)
    ins = list(md.disasm(img[a-0x400000:f.maxaddr+1-0x400000], a))
    p = 0; d = None
    for k, i in enumerate(ins[1:], 1):
        m = i.mnemonic
        if m == 'push': p += 1
        elif m == 'pop': p -= 1
        elif m == 'call':
            nx = ins[k+1] if k + 1 < len(ins) else None
            if i.op_str.startswith('0x') and nx is not None and nx.mnemonic == 'add' and nx.op_str.startswith('esp, '):
                d = int(nx.op_str[5:], 0) // 4 - p
            break
        elif m.startswith('j') or m == 'ret' or (m in ('add', 'sub') and i.op_str.startswith('esp')): break
    if d and d > 0:
        real = int(n) - d
        if 0 <= real < int(gs): out.append('\t'.join([site, fn, th, str(real)])); print(fn, site, 'n', n, 'ghidra', gs, '-> real', real)
open(os.path.join(R, 'build', 'fixicallargs_var.tsv'), 'w').write('\n'.join(out) + '\n')
print(len(out), 'sites')
