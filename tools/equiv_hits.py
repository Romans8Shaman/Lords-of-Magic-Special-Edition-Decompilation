#!/usr/bin/env python3
"""equiv_hits.py BASELINE.jsonl_or_log [CURRENT] : NEXT_PHASE step 9.4 hook-hit compare.

Compares two lomrb_hits.log files (unique addresses and counts). A later official
DLL run is expected to be at least as broad as a prior CLEAN baseline (no large
drop in unique hooks hit, no disappearance of previously hot stay-asmfn /
newly-promoted functions unless diagnosed).

Usage:
  python3 tools/equiv_hits.py logs/r137M2a_lomrb_hits.log [logs/r138M2a_lomrb_hits.log]
"""
import os, sys, argparse

def load(path):
    hits = {}
    for line in open(path):
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        a = line.split()
        if len(a) >= 2:
            try:
                hits[a[0].lower()] = int(a[1])
            except ValueError:
                pass
    return hits

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('baseline')
    ap.add_argument('current', nargs='?')
    ap.add_argument('--out', default='')
    args = ap.parse_args()
    base = load(args.baseline)
    lines = ['equiv_hits baseline %s unique %d' % (args.baseline, len(base))]
    ok = True
    if not args.current:
        lines.append('INFO no current log; baseline only (unique %d)' % len(base))
        lines.append('PASS hits tool (baseline readable)')
    else:
        cur = load(args.current)
        lines.append('current  %s unique %d' % (args.current, len(cur)))
        gone = sorted(set(base) - set(cur))
        new = sorted(set(cur) - set(base))
        lines.append('disappeared %d  new %d' % (len(gone), len(new)))
        # flag large unique drop or hot functions disappearing
        hot = [k for k, v in base.items() if v >= 100]
        hot_gone = [k for k in hot if k not in cur]
        if len(cur) < len(base) * 0.85:
            ok = False
            lines.append('FAIL unique hook count dropped more than 15%% (%d -> %d)' % (len(base), len(cur)))
        if hot_gone:
            ok = False
            lines.append('FAIL previously hot hooks missing: %s' % ', '.join(hot_gone[:12]))
        if ok:
            lines.append('PASS hook-hit coverage vs baseline (unique %d -> %d, no hot dropouts)' % (
                len(base), len(cur)))
        # notable stay-asmfn / entries
        for k in ('00539630', '004d48a0', '0053c2c0', '004ff8b0'):
            lines.append('  %s baseline %s current %s' % (
                k, base.get(k, 0), cur.get(k, 0) if args.current else '-'))
    text = '\n'.join(lines) + '\n'
    out = args.out or os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                   '..', 'build', 'equiv', 'hits.txt')
    os.makedirs(os.path.dirname(os.path.abspath(out)), exist_ok=True)
    open(out, 'w').write(text)
    print(text, end='')
    sys.exit(0 if ok else 1)

if __name__ == '__main__':
    main()
