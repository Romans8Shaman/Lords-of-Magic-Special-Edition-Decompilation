#!/usr/bin/env python3
"""merge_gap.py NEWEXPORT_OUT NEWEXPORT_BC : rebuild ACTIVE ghidra_out/ghidra_bc = ghidra_out_pregap_backup/ghidra_bc_pregap_backup
(the verified pre-gap state) + every function that exists ONLY in the new export (funcs/globals/stackrefs rows, code, bc).
Old functions are never taken from the new export."""
import os, sys, shutil
N, NB = sys.argv[1], sys.argv[2]
O, OB = 'ghidra_out', 'ghidra_bc'
PO, PB = 'ghidra_out_pregap_backup', 'ghidra_bc_pregap_backup'
for d, p in ((O, PO), (OB, PB)):
    shutil.rmtree(d); shutil.copytree(p, d)
o = set(l.split('\t')[0] for l in open(O + '/funcs.tsv'))
newrows = [l for l in open(N + '/funcs.tsv') if l.split('\t')[0] not in o]
new = set(l.split('\t')[0] for l in newrows)
rows = open(O + '/funcs.tsv').readlines() + newrows; rows.sort(key=lambda l: int(l.split('\t')[0], 16))
open(O + '/funcs.tsv', 'w').writelines(rows)
for t in ('globals.tsv', 'stackrefs.tsv'):
    open(O + '/' + t, 'a').writelines(l for l in open(N + '/' + t) if l.split('\t')[0] in new)
for a in new: shutil.copy(N + '/code/%s.c' % a, O + '/code/%s.c' % a)
for f in os.listdir(NB + '/bc'):
    if f[:8] in new: shutil.copy(NB + '/bc/' + f, OB + '/bc/' + f)
open(OB + '/bc_summary.tsv', 'a').writelines(l for l in open(NB + '/bc_summary.tsv') if l.split('\t')[0] in new)
open('build/gap_new.txt', 'w').write('\n'.join(sorted(new)) + '\n')
print('funcs', len(rows), 'new', len(new))
