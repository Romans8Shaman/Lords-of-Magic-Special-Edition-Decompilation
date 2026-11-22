#!/usr/bin/env python3
"""promote.py DIFFTEST.jsonl [--exclude file] : copy PASS + hook-safe functions from src/gen to src/fn.
Existing differing src/fn files are kept as <addr>.c_vN_backup. Writes src/fn/STATUS.tsv (addr name size verdict trials-ret)
and build/hookset_fn.txt (all accepted addrs)."""
import sys, os, json, shutil, filecmp
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, hooksafe
def retire(fp):
    k = 0; dst = fp + '_retired'
    while os.path.exists(dst): k += 1; dst = fp + '_retired%d' % k
    os.replace(fp, dst)
R = lomdb.ROOT
rs = [json.loads(l) for l in open(sys.argv[1])]
excl = set()
if '--exclude' in sys.argv:
    excl = {l.split()[0] for l in open(sys.argv[sys.argv.index('--exclude') + 1]) if l.strip() and not l.startswith('#')}
st_path = os.path.join(R, 'src', 'fn', 'STATUS.tsv')
status = {}
if os.path.exists(st_path):
    for l in open(st_path):
        if l.startswith('#') or not l.strip(): continue
        p = l.rstrip('\n').split('\t'); status[p[0]] = p
if '--reset' in sys.argv:
    # accepted set = exactly this run's PASS+safe; retire others (renamed, never deleted)
    passing = {r['addr'] for r in rs if r['verdict'] == 'PASS' and r['addr'] not in excl}
    for a in list(status):
        if a not in passing:
            fp = os.path.join(R, 'src', 'fn', a + '.c')
            if os.path.exists(fp): retire(fp)
            status.pop(a)
new = 0
for r in rs:
    a = r['addr']
    if r['verdict'] != 'PASS' or a in excl: continue
    ok, why = hooksafe.safe(int(a, 16))
    if not ok:
        status.pop(a, None)
        fp = os.path.join(R, 'src', 'fn', a + '.c')
        if os.path.exists(fp): retire(fp)
        continue
    src = os.path.join(R, 'src', 'gen', a + '.c'); dst = os.path.join(R, 'src', 'fn', a + '.c')
    if not os.path.exists(src): continue
    if os.path.exists(dst):
        if filecmp.cmp(src, dst, shallow=False):
            if a not in status:  # v3: identical file but not yet accepted (e.g. was excluded)
                f = lomdb.funcs()[int(a, 16)]; status[a] = [a, f.name, str(f.size), 'PASS', str(r.get('stopped', {}).get('ret', 0))]
            continue
        k = 1
        while os.path.exists('%s_v%d_backup' % (dst, k)): k += 1
        shutil.copy2(dst, '%s_v%d_backup' % (dst, k))
    shutil.copy2(src, dst); new += 1
    f = lomdb.funcs()[int(a, 16)]
    status[a] = [a, f.name, str(f.size), 'PASS', str(r.get('stopped', {}).get('ret', 0))]
for a in list(status):
    if a in excl: status.pop(a)
with open(st_path, 'w') as fo:
    fo.write('#addr\tname\tsize\tdifftest\ttrials_reaching_ret\n')
    for a in sorted(status): fo.write('\t'.join(status[a]) + '\n')
open(os.path.join(R, 'build', 'hookset_fn.txt'), 'w').write('\n'.join(sorted(status)) + '\n')
print('promoted %d new; src/fn now %d functions' % (new, len(status)))
