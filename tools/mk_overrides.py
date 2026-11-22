#!/usr/bin/env python3
"""mk_overrides.py: write ghidra_out/overrides.tsv (addr cc purge proto) for functions whose calling
convention Ghidra left 'unknown'. Script-operator handlers op_* are dispatched by FUN_004d3710 /
FUN_004d57c0 as `push vm; call eax; add esp,4` and the result is ignored -> void __cdecl op_x(void *vm).
Only applied when every ret in the body is a plain `ret` and the decomp header has <= 1 param."""
import sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
md = Cs(CS_ARCH_X86, CS_MODE_32)
out = []
for f in lomdb.funcs().values():
    if f.cc != 'unknown' or not f.name.startswith('op_'): continue
    rets = [i for i in md.disasm(lomdb.read_va(f.addr, f.maxaddr - f.addr + 1), f.addr) if i.mnemonic == 'ret']
    if not rets or any(i.op_str for i in rets): continue
    t = lomdb.code_text(f.addr) or ''
    m = re.search(r'\b%s\((.*?)\)\s*\{' % re.escape(f.name), t, re.S)
    if not m: continue
    ps = lomdb.split_params(m.group(1))
    if len(ps) > 1: continue
    proto = 'void %s(%s)' % (f.name, ps[0] if ps else 'void')
    out.append('%08x\t__cdecl\t0\t%s' % (f.addr, proto))
open(os.path.join(lomdb.GO, 'overrides.tsv'), 'w').write('\n'.join(out) + '\n')
print(len(out), 'overrides')
