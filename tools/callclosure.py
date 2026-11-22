#!/usr/bin/env python3
"""callclosure.py ADDR... : (2026-11-13) direct-call closure of original fns (capstone, fn extents from funcs.tsv);
prints each fn with size and whether it has indirect calls / import calls (not followable)."""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, capstone
F = lomdb.funcs(); img = lomdb.pe().get_memory_mapped_image()
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
todo = [int(a, 16) for a in sys.argv[1:]]; seen = {}
while todo:
    a = todo.pop()
    if a in seen or a not in F: continue
    f = F[a]; ind = 0; out = []
    for i in md.disasm(img[a - 0x400000:a - 0x400000 + f.size], a):
        if i.mnemonic in ('call', 'jmp'):
            if i.op_str.startswith('0x'):
                t = int(i.op_str, 16)
                if i.mnemonic == 'call' or not (a <= t < a + f.size): out.append(t)
            elif i.mnemonic == 'call': ind += 1
    seen[a] = (f.size, ind, f.name); todo += out
for a, (sz, ind, n) in sorted(seen.items()): print('%08x %5d ind=%d %s' % (a, sz, ind, n))
