#!/usr/bin/env python3
"""faildiff.py JSONL ADDR... : re-run difftest for ADDR and print the first differing event (needs build/test_gen.*)."""
import sys, os, json
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import difftest
for a in sys.argv[2:]:
    for l in open(sys.argv[1]):
        r = json.loads(l)
        if r['addr'] == a:
            d = r.get('diff', '')
            if d.startswith("{'events'"):
                try:
                    ev = eval(d)['events']
                    A, B = ev
                    for i, (x, y) in enumerate(zip(A, B)):
                        if x != y: print(a, 'event', i, '\n  orig   ', x, '\n  rebuilt', y); break
                    else: print(a, 'len', len(A), len(B))
                except Exception as e: print(a, 'truncated diff:', d[:300])
            else: print(a, d[:300])
