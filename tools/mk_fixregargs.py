#!/usr/bin/env python3
"""mk_fixregargs.py : from build/reguse.tsv build build/fixregargs.tsv for ghidra_scripts/FixRegArgs.java.
Lines: addr  new_cc  target_stack_bytes  why.  Rules:
 - reads ECX at entry (not EDX) but proto has no ECX param  -> __thiscall (stack bytes = purge)
 - in_stack_ beyond proto (offset <= 0x100): callee-pop -> pad to purge if enough; purge 0 -> __cdecl with N params
 - in_stack_ offsets > 0x100 are big-frame (__chkstk) locals, not params: listed as SKIP."""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
F = lomdb.funcs()
out = []
for line in open(os.path.join(lomdb.ROOT, 'build', 'reguse.tsv')):
    a, rc, rd, st, pregs, pn, mm, cc = line.rstrip('\n').split('\t')
    if not mm: continue
    f = F[int(a, 16)]
    if f.name.startswith('op_') and int(a, 16) & 0xf: out.append((a, 'SKIP', 0, 'bogus-op')); continue
    st = int(st); pn = int(pn); purge = f.purge if f.purge < 0x10000 else 0
    mm = mm.split(',')
    need = max(0, st - 4) if st <= 0x100 else 0
    if 'ecx' in mm and 'edx' not in mm:
        if cc == '__cdecl' and pn > 0:
            out.append((a, 'SKIP', 0, 'ecx-read cdecl with stack params')); continue
        tgt = max(purge, 4 * max(pn, 0) if cc == '__stdcall' else 0, need)
        out.append((a, '__thiscall', tgt, 'reads ECX, proto %s' % cc)); continue
    if 'edx' in mm:
        out.append((a, 'SKIP', 0, 'edx-read')); continue
    if any(m.startswith('stack') for m in mm):
        if st > 0x100: out.append((a, 'SKIP', 0, 'bigframe in_stack 0x%x' % st)); continue
        if cc in ('__thiscall', '__stdcall', '__fastcall'):
            if need <= purge: out.append((a, cc, purge, 'pad to purge')); continue
            if purge == 0 and rc == '0': out.append((a, '__cdecl', need, 'purge0 %s no ecx -> cdecl' % cc)); continue
            out.append((a, 'SKIP', 0, 'in_stack %d > purge %d' % (need, purge))); continue
        if cc == '__cdecl': out.append((a, '__cdecl', need, 'cdecl missing params')); continue
        out.append((a, 'SKIP', 0, 'cc ' + cc))
with open(os.path.join(lomdb.ROOT, 'build', 'fixregargs.tsv'), 'w') as fo:
    for r in out: fo.write('%s\t%s\t%d\t%s\n' % r)
import collections
print(collections.Counter(r[1] for r in out))
