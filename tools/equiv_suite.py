#!/usr/bin/env python3
"""equiv_suite.py : run NEXT_PHASE step 9 checks and write build/equiv/SUMMARY.txt.

Exit 0 only when every required check PASSes (section identity, thunk encodings,
text gate, and any optional checks that were requested and ran). The text gate
fails until uncompiled mid-entry bodyrefs are gone.

Usage:
  python3 tools/equiv_suite.py --exe build/sa80/lomse_sa.exe \\
      --ranges build/sa80/raw_ranges.tsv --hookset build/hookset_r138.txt \\
      --report build/sa80/report.txt \\
      [--hits-base ../logs/r137M2a_lomrb_hits.log] [--hits-cur LOG] \\
      [--sa-tag sa80M1a --dll-tag r138M2a] [--eh]
"""
import os, sys, argparse, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
R = lomdb.ROOT
OUT = os.path.join(R, 'build', 'equiv')
TOOLS = os.path.dirname(os.path.abspath(__file__))


def run(cmd, allow_fail=False):
    p = subprocess.run(cmd, cwd=R, capture_output=True, text=True)
    sys.stdout.write(p.stdout)
    if p.stderr:
        sys.stderr.write(p.stderr)
    if p.returncode and not allow_fail:
        return False, p.stdout
    return p.returncode == 0, p.stdout


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--exe', required=True)
    ap.add_argument('--ranges', required=True)
    ap.add_argument('--hookset', required=True)
    ap.add_argument('--report', default='')
    ap.add_argument('--hits-base', default='')
    ap.add_argument('--hits-cur', default='')
    ap.add_argument('--sa-tag', default='')
    ap.add_argument('--dll-tag', default='')
    ap.add_argument('--van-tag', default='')
    ap.add_argument('--eh', action='store_true')
    args = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)
    results = []

    ok, _ = run([sys.executable, os.path.join(TOOLS, 'equiv_sections.py'),
                 args.exe, '--ranges', args.ranges, '--hookset', args.hookset])
    results.append(('9.1 section byte-identity', ok))

    ok, _ = run([sys.executable, os.path.join(TOOLS, 'test_import_thunks.py')])
    results.append(('9.4 import thunk encodings', ok))

    if args.hits_base:
        cmd = [sys.executable, os.path.join(TOOLS, 'equiv_hits.py'), args.hits_base]
        if args.hits_cur:
            cmd.append(args.hits_cur)
        ok, _ = run(cmd, allow_fail=True)
        results.append(('9.4 hook-hit compare', ok))
    else:
        results.append(('9.4 hook-hit compare', None))

    if args.sa_tag or args.dll_tag or args.van_tag:
        cmd = [sys.executable, os.path.join(TOOLS, 'equiv_threeway.py')]
        if args.sa_tag:
            cmd += ['--sa', args.sa_tag]
        if args.dll_tag:
            cmd += ['--dll', args.dll_tag]
        if args.van_tag:
            cmd += ['--van', args.van_tag]
        ok, _ = run(cmd, allow_fail=True)
        results.append(('9.2 three-way compare', ok))
    else:
        results.append(('9.2 three-way compare', None))

    cmd = [sys.executable, os.path.join(TOOLS, 'equiv_text_gate.py'),
           '--ranges', args.ranges, '--hookset', args.hookset]
    if args.report:
        cmd += ['--report', args.report]
    ok, _ = run(cmd, allow_fail=True)
    results.append(('9.5 no-original-.text gate', ok))

    if args.eh:
        env_wp = os.environ.get('WINEPREFIX', os.path.join(R, 'build', 'wineprefix_test'))
        env = os.environ.copy()
        env['WINEPREFIX'] = env_wp
        p = subprocess.run([sys.executable, os.path.join(TOOLS, 'test_eh_funclets.py')],
                           cwd=R, env=env)
        results.append(('9.4 EH funclet native tests', p.returncode == 0))
    else:
        results.append(('9.4 EH funclet native tests', None))

    lines = ['NEXT_PHASE step 9 SUMMARY']
    required_fail = False
    for name, st in results:
        if st is True:
            lines.append('PASS %s' % name)
        elif st is False:
            lines.append('FAIL %s' % name)
            if name.startswith('9.5') or name.startswith('9.1') or 'thunk' in name:
                required_fail = True
            if name.startswith('9.4 EH') or name.startswith('9.4 hook') or name.startswith('9.2'):
                # requested optional that failed
                required_fail = True
        else:
            lines.append('SKIP %s' % name)
    # corpus is documentation + later play rows; note it
    corp = os.path.join(R, 'src', 'equiv', 'corpus.tsv')
    rows = [l for l in open(corp) if l.strip() and not l.startswith('#')]
    lines.append('INFO 9.3 corpus rows documented: %d (see src/equiv/corpus.tsv)' % len(rows))
    all_req = all(st is not False for name, st in results
                  if name.startswith('9.1') or 'thunk' in name or name.startswith('9.5'))
    # full suite pass requires 9.1, thunks, and 9.5
    full = (not required_fail) and all(
        st is True for name, st in results
        if name.startswith('9.1') or 'thunk' in name or name.startswith('9.5'))
    lines.append('OVERALL %s' % ('PASS' if full else 'FAIL'))
    text = '\n'.join(lines) + '\n'
    open(os.path.join(OUT, 'SUMMARY.txt'), 'w').write(text)
    print(text, end='')
    sys.exit(0 if full else 1)


if __name__ == '__main__':
    main()
