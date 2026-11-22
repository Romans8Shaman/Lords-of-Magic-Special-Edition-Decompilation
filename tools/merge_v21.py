#!/usr/bin/env python3
"""merge_v21.py NEW_OUT NEW_BC ADDLIST RETAKELIST : add the functions in ADDLIST (new in NEW_OUT) and re-take the rows/code/bc of
the functions in RETAKELIST (owners whose body changed) from the new export into the ACTIVE ghidra_out/ghidra_bc.
Backups ghidra_out_v21pre_backup / ghidra_bc_v21pre_backup are made first (once)."""
import os, sys, shutil
N, NB, ADD, RET = sys.argv[1:5]
O, OB = 'ghidra_out', 'ghidra_bc'
for d in (O, OB):
    b = d + '_v21pre_backup'
    if not os.path.exists(b): shutil.copytree(d, b)
add = set(l.split()[0] for l in open(ADD) if l.strip()); ret = set(l.split()[0] for l in open(RET) if l.strip())
take = add | ret
nrows = {l.split('\t')[0]: l for l in open(N + '/funcs.tsv')}
missing = [a for a in take if a not in nrows]
if missing: sys.exit('not in new export: %s' % missing)
rows = [l for l in open(O + '/funcs.tsv') if l.split('\t')[0] not in take] + [nrows[a] for a in sorted(take)]
rows.sort(key=lambda l: int(l.split('\t')[0], 16))
open(O + '/funcs.tsv', 'w').writelines(rows)
for t in ('globals.tsv', 'stackrefs.tsv'):
    keep = [l for l in open(O + '/' + t) if l.split('\t')[0] not in take]
    open(O + '/' + t, 'w').writelines(keep + [l for l in open(N + '/' + t) if l.split('\t')[0] in take])
for a in take:
    if os.path.exists(N + '/code/%s.c' % a): shutil.copy(N + '/code/%s.c' % a, O + '/code/%s.c' % a)
for f in os.listdir(NB + '/bc'):
    if f[:8] in take: shutil.copy(NB + '/bc/' + f, OB + '/bc/' + f)
keep = [l for l in open(OB + '/bc_summary.tsv') if l.split('\t')[0] not in take]
open(OB + '/bc_summary.tsv', 'w').writelines(keep + [l for l in open(NB + '/bc_summary.tsv') if l.split('\t')[0] in take])
print('funcs', len(rows), 'added', len(add), 'retaken', len(ret))
