#!/usr/bin/env python3
"""fpsearch.py SRCDIR ADDR... : x87 excess-precision search for FAILing float functions.
clang keeps float locals at 80-bit precision (no rounding store; no flag fixes this on x87), while MSVC rounds a
float var whenever it stores it, but keeps others on the x87 stack unrounded. For every `float V;` local (and float
params) try state 'v' = volatile float (every store rounds) or 'x' = float10 (extended; RHS (float) casts -> (float10)).
Variants ordered by number of 'x'; first difftest PASS is written to src/fp/<addr>.c. Max 2^MAXV variants."""
import sys, os, re, subprocess, json, itertools
R = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAXV = int(os.environ.get('FP_MAXV', '7'))
def variants(src, addr):
    i = src.index('#define LOM_SELF_'); head, body = src[:i], src[i:]
    vars_ = re.findall(r'^  float ([A-Za-z_]\w*);', body, re.M)
    hdr = body[:body.index('{')]
    # v2: float params that the body assigns (MSVC reuses the param slot: every store rounds)
    pars = [p for p in re.findall(r'\bfloat (param_\d+)\b', hdr) if re.search(r'^\s*%s = ' % p, body, re.M)]
    return head, body, vars_ + ['P:' + p for p in pars]
def make(body, vars_, st):
    b = body
    for v, s in zip(vars_, st):
        if v.startswith('P:'):
            if s == 'v': b = re.sub(r'\bfloat %s\b' % v[2:], 'volatile float %s' % v[2:], b, count=1)
            continue
        if s == 'v': b = re.sub(r'^  float %s;' % v, '  volatile float %s;' % v, b, flags=re.M)
        else:
            b = re.sub(r'^  float %s;' % v, '  float10 %s;' % v, b, flags=re.M)
            b = re.sub(r'^(\s*%s = )(.*;)$' % v, lambda m: m.group(1) + m.group(2).replace('(float)', '(float10)'), b, flags=re.M)
    return b
def run(cmd, env=None):
    return subprocess.run(cmd, cwd=R, capture_output=True, text=True, env=env).stdout
def main():
    sd = sys.argv[1]; out = os.path.join(R, 'src', 'fp'); os.makedirs(out, exist_ok=True)
    for a in sys.argv[2:]:
        src = open(os.path.join(R, 'src', sd, a + '.c')).read()
        head, body, vars_ = variants(src, a)
        if not vars_ or len(vars_) > MAXV: print(a, 'skip vars=%d' % len(vars_)); continue
        sts = sorted(itertools.product('vx', repeat=len(vars_)), key=lambda s: s.count('x'))
        found = None; last = ''
        for k, st in enumerate(sts):
            td = os.path.join(R, 'src', 'fpt'); os.makedirs(td, exist_ok=True)
            for f in os.listdir(td): os.remove(os.path.join(td, f))
            open(os.path.join(td, a + '.c'), 'w').write(head + make(body, vars_, st))
            run(['python3', 'tools/cc.py', 'fpt'])
            if not os.path.exists(os.path.join(R, 'build', 'obj', 'fpt', a + '.o')): last = 'ccfail'; continue
            run(['python3', 'tools/link_test.py', 'fpt'])
            env = dict(os.environ, DT_J='1', DT_SRC='src/fpt', DT_OUT='/tmp/fps.jsonl')
            run(['python3', 'tools/difftest.py', 'build/test_fpt.dll', 'build/test_fpt.syms', a], env)
            try: d = json.loads(open('/tmp/fps.jsonl').read().splitlines()[0])
            except Exception: last = 'noresult'; continue
            last = d['verdict']
            if d['verdict'] == 'PASS':
                found = st; open(os.path.join(out, a + '.c'), 'w').write(head.replace('#include "lom.h"', '#include "lom.h"\n/* tools/fpsearch.py: float locals %s = %s (v volatile float, x float10) */' % (','.join(vars_), ''.join(st)), 1) + make(body, vars_, st)); break
            if os.path.exists(os.path.join(R, 'build', 'obj', 'fpt', a + '.o')): os.remove(os.path.join(R, 'build', 'obj', 'fpt', a + '.o'))
        print(a, 'PASS ' + ''.join(found) if found else 'none (%d variants, last %s)' % (len(sts), last), 'vars=' + ','.join(vars_), flush=True)
if __name__ == '__main__': main()
