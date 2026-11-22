#!/usr/bin/env python3
"""varargs_scan.py : cdecl callees whose call sites push MORE stack args than Ghidra's signature has (call X; add esp,N
right after, with no other call in between since the previous stack-adjust) -> likely varargs (sscanf/sprintf...).
Prints callee  sigArgs  maxSiteArgs  nSitesOver  and writes build/varargs_callees.tsv."""
import sys, os, re, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
F = lomdb.funcs(); md = Cs(CS_ARCH_X86, CS_MODE_32)
def nsig(f):
    m = re.search(r'\((.*)\)\s*$', f.proto or '')
    if not m: return None
    p = m.group(1).strip()
    if p in ('', 'void'): return 0
    if '...' in p or f.varargs: return 99
    return p.count(',') + 1
over = collections.defaultdict(list)
for a, f in F.items():
    try: ins = list(md.disasm(lomdb.read_va(a, f.size), a))
    except Exception: continue
    pushes = 0
    for k, i in enumerate(ins):
        if i.mnemonic == 'push': pushes += 1
        if i.mnemonic == 'call' and i.op_str.startswith('0x'):
            t = int(i.op_str, 16); cf = F.get(t)
            nxt = ins[k + 1] if k + 1 < len(ins) else None
            if cf and cf.cc == '__cdecl' and nxt is not None and nxt.mnemonic == 'add' and nxt.op_str.startswith('esp, '):
                n = int(nxt.op_str[5:], 0) // 4; s = nsig(cf)
                if s is not None and n > s and n <= pushes:
                    over[t].append((a, i.address, n))
            pushes = 0
        if i.mnemonic in ('add', 'sub') and i.op_str.startswith('esp'): pushes = 0
out = open(os.path.join(lomdb.ROOT, 'build', 'varargs_callees.tsv'), 'w')
for t, L in sorted(over.items()):
    cf = F[t]; line = '%08x\t%s\t%s\t%d\t%d' % (t, cf.name, nsig(cf), max(n for _, _, n in L), len(L))
    print(line); out.write(line + '\t' + ' '.join('%08x' % c for c in sorted({c for c, _, _ in L})) + '\n')
