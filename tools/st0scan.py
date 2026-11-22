#!/usr/bin/env python3
"""st0scan.py: functions whose ORIGINAL body returns a value in ST0 (last x87 op before a ret leaves the stack
pushed: fld/fild/fldz/fld1/fdiv... non-popping) while the Ghidra proto returns non-float, and C callers of them."""
import sys, os, re, capstone
sys.path.insert(0, os.path.dirname(__file__)); import lomdb
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
F = lomdb.funcs(); out = []
for f in F.values():
    if 'float' in f.proto.split('(')[0] or 'double' in f.proto.split('(')[0]: continue
    try: code = lomdb.read_va(f.addr, f.size + 8)
    except Exception: continue
    last = None; hits = 0
    for i in md.disasm(code, f.addr):
        if i.address > f.maxaddr: break
        if i.mnemonic.startswith('f') and i.mnemonic not in ('fnstsw', 'fnstcw', 'fldcw', 'fwait', 'fnclex', 'fninit'): last = i.mnemonic
        if i.mnemonic == 'ret':
            if last and (last.startswith('fld') or last.startswith('fild') or last in ('fadd','fsub','fmul','fdiv','fsubr','fdivr','fabs','fchs','fsqrt','frndint','fsin','fcos','fpatan','fscale')): hits += 1
            last = None
        if i.mnemonic == 'call': last = None
    if hits: out.append((f.addr, hits, f.proto))
for a, h, p in sorted(out):
    n = sum(1 for x in os.listdir('src/fn') if x.endswith('.c') and '0x%08x' % a in open('src/fn/' + x).read())
    print('%08x\t%d\tCcallers=%d\t%s' % (a, h, n, p))
