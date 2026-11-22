#!/usr/bin/env python3
"""fixconv.py [dir] [addr...] : turn IMPLICIT float<->integer conversions in src/<dir>/*.c into bit-casts __BC(T, x).
Ghidra prints every numeric conversion as an explicit pcode op/cast (INT2FLOAT, TRUNC, __ftol); an implicit C
conversion between a float and an integer type only appears when Ghidra typed one side float but the data is just
copied (GS VM tagged values passed to int params, stored through int pointers...). C would convert numerically.
Uses clang -Wfloat-conversion / -Wimplicit-int-float-conversion source ranges; repeats until clean (max 6 rounds).
Prints per file: addr nFixed [unresolved]."""
import sys, os, re, subprocess, glob
from concurrent.futures import ThreadPoolExecutor
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CC = '/opt/llvm-mingw/bin/i686-w64-mingw32-clang'
FL = ['-std=gnu17', '-fsyntax-only', '-I' + os.path.join(ROOT, 'include'), '-Wno-everything', '-Wfloat-conversion',
      '-Wimplicit-int-float-conversion', '-fdiagnostics-print-source-range-info', '-fno-color-diagnostics', '-fno-caret-diagnostics']
W = re.compile(r"^(?P<f>[^:]+):(?P<l>\d+):(?P<c>\d+):(?P<r>(\{\d+:\d+-\d+:\d+\})+): warning: implicit conversion (turns floating-point number into integer: |from )'(?P<from>[^']+)'( \(aka '[^']+'\))? to '(?P<to>[^']+)'")
def one(path):
    n = 0
    for rnd in range(6):
        r = subprocess.run([CC] + FL + [path], capture_output=True, text=True)
        fixes = []
        for l in r.stderr.split('\n'):
            m = W.match(l)
            if not m or os.path.abspath(m.group('f')) != os.path.abspath(path): continue
            l1, c1, l2, c2 = map(int, re.match(r'\{(\d+):(\d+)-(\d+):(\d+)\}', m.group('r')).groups())
            fixes.append((l1, c1, l2, c2, m.group('to')))
        if not fixes: return n, ''
        lines = open(path).read().split('\n')
        off = [0]
        for x in lines: off.append(off[-1] + len(x) + 1)
        txt = '\n'.join(lines)
        spans = sorted({(off[l1 - 1] + c1 - 1, off[l2 - 1] + c2 - 1, to) for l1, c1, l2, c2, to in fixes}, key=lambda s: (s[1] - s[0]))
        done = []
        for a, b, to in spans:  # innermost first; skip overlapping in this round
            if any(not (b <= x or a >= y) for x, y in done): continue
            done.append((a, b))
        for a, b in sorted(done, reverse=True):
            to = next(t for x, y, t in spans if x == a and y == b)
            txt = txt[:a] + '__BC(%s, %s)' % (to, txt[a:b]) + txt[b:]; n += 1
        open(path, 'w').write(txt)
    return n, 'unresolved'
if __name__ == '__main__':
    d = sys.argv[1] if len(sys.argv) > 1 else 'gen'
    srcs = sorted(glob.glob(os.path.join(ROOT, 'src', d, '*.c')))
    if len(sys.argv) > 2: srcs = [s for s in srcs if os.path.basename(s)[:8] in sys.argv[2:]]
    tot = 0
    with ThreadPoolExecutor(8) as ex:
        for s, (n, u) in zip(srcs, ex.map(one, srcs)):
            if n or u: print(os.path.basename(s)[:8], n, u); tot += n
    print('fixconv: %d implicit float<->int conversions -> __BC' % tot, file=sys.stderr)
