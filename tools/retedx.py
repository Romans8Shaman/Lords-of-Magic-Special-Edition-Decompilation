#!/usr/bin/env python3
"""retedx.py : direct call sites whose ORIGINAL caller reads EDX (or DX/DL/DH) after the call before writing it
(linear walk, follows direct jmps, stops at ret/call/cond-branch targets end). Such callees return a value in EDX
(64-bit EDX:EAX). Writes build/retedx.tsv: callee caller site insn ; prints callees by count."""
import sys, os, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
F = lomdb.funcs(); img = lomdb.pe().get_memory_mapped_image()
EDX = {'edx', 'dx', 'dl', 'dh'}
def rw(i):
    r, w = i.regs_access()
    return {i.reg_name(x) for x in r}, {i.reg_name(x) for x in w}
def insn_at(a):
    return next(md.disasm(img[a-0x400000:a-0x400000+16], a), None)
out = []; cnt = collections.Counter()
for fa in sorted(F):
    f = F[fa]
    for i in md.disasm(img[fa-0x400000:f.maxaddr+1-0x400000], fa):
        if i.mnemonic != 'call' or not i.op_str.startswith('0x'): continue
        callee = int(i.op_str, 16); a = i.address + i.size; steps = 0
        while steps < 40:
            j = insn_at(a); steps += 1
            if j is None: break
            if j.mnemonic in ('ret', 'call'): break
            r, w = rw(j)
            if j.mnemonic in ('xor','sub') and j.op_str in ('edx, edx',): break
            if j.mnemonic == 'or' and j.op_str in ('edx, 0xffffffff',): break
            if r & EDX:
                out.append('%08x\t%08x\t%08x\t%s %s' % (callee, fa, i.address, j.mnemonic, j.op_str)); cnt['%08x' % callee] += 1; break
            if w & EDX and j.mnemonic not in ('mov', 'movzx', 'movsx', 'lea', 'pop') and False: break
            if 'edx' in w or 'dx' in w and j.mnemonic in ('mov','movzx','movsx'): break
            if w & {'edx'}: break
            if j.mnemonic == 'jmp' and j.op_str.startswith('0x'): a = int(j.op_str, 16); continue
            if j.mnemonic.startswith('j') and j.mnemonic != 'jmp': a = j.address + j.size; continue
            if j.mnemonic == 'jmp': break
            a = j.address + j.size
open(os.path.join(lomdb.ROOT, 'build', 'retedx.tsv'), 'w').write('\n'.join(out) + '\n')
for c, n in cnt.most_common(40): print(c, F[int(c, 16)].name if int(c, 16) in F else '?', n)
print('callees', len(cnt), 'sites', len(out))
