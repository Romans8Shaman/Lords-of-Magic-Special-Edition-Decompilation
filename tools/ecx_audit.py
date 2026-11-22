#!/usr/bin/env python3
"""ecx_audit.py : (2026-11-12) list INDIRECT call sites that icalls.tsv marks this_call=0 but where ECX is written
between the previous call / jump target and the call (MSVC sets ECX = this right before a virtual call; icalls v2
misses `mov edx,[eax+esi]; lea ecx,[eax+esi]; call [edx+N]` with an index register). Output: func site ecx-instr call."""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, gen as _gen
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone import x86_const as X
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
F = lomdb.funcs(); img = lomdb.pe().get_memory_mapped_image()
sites = {}
for l in open(os.path.join(lomdb.ROOT, 'build', 'icalls.tsv')):
    p = l.rstrip('\n').split('\t'); sites[int(p[1], 16)] = (p[0], int(p[2]))
for fa in sorted(F):
    f = F[fa]
    if f.size <= 0: continue
    ins = [i for lo, hi in _gen.chunk_ranges(f) for i in md.disasm(img[lo - 0x400000: hi + 1 - 0x400000], lo)]
    tg = set(i.operands[0].imm & 0xffffffff for i in ins if i.mnemonic.startswith('j') and i.operands and i.operands[0].type == X.X86_OP_IMM)
    for k, i in enumerate(ins):
        if i.mnemonic != 'call' or i.address not in sites or sites[i.address][1] != 0: continue
        w = None
        for j in range(k - 1, max(-1, k - 12), -1):
            p = ins[j]
            if p.mnemonic in ('call', 'ret') or p.mnemonic.startswith('j'): break
            try: rd, wr = p.regs_access()
            except Exception: wr = ()
            if X.X86_REG_ECX in wr or X.X86_REG_CX in wr or X.X86_REG_CL in wr: w = p; break
            if p.address in tg: break
        if w is not None:
            print('%08x\t%08x\t%s %s\t%s %s' % (fa, i.address, w.mnemonic, w.op_str, i.mnemonic, i.op_str))
