#!/usr/bin/env python3
"""dtshow.py DLL SYMS SRCDIR ADDR [TRIAL] : rerun one difftest trial and print both runs' stop/events/regs (debug)."""
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import difftest as D
D.init(sys.argv[1])
m = {int(a, 16): int(b, 16) for a, b in (l.split() for l in open(sys.argv[2]))}
addr = int(sys.argv[4], 16); want = int(sys.argv[5]) if len(sys.argv) > 5 else None
orig = D.Run.result; seen = []
def res(self, rk, *a, **k):
    r = orig(self, rk, *a, **k); seen.append((self.start == addr, self.trial, r)); return r
D.Run.result = res
out = D._test_one(addr, m[addr], os.path.join(sys.argv[3], '%08x.c' % addr))
print(out)
t = out.get('trial', want)
for isorig, tr, r in seen:
    if tr == t:
        print('ORIG' if isorig else 'REBUILT', 'stop=', r['stop'])
        for e in r['events'][:12]: print('   ', e)
        print('   regs', {k: (hex(v) if isinstance(v, int) else v) for k, v in r.items() if k not in ('events', 'stop')})
