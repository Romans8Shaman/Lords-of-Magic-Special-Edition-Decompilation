#!/usr/bin/env python3
"""palbisect.py LANE HOOKSET : in-game bisect of the blue-channel palette bug (main menu pixel 320,240:
vanilla (206,170,74), bug (206,170,148)) with lomrb_only.txt subsets. Log: build/palbisect.log"""
import sys, subprocess, os, re
L = sys.argv[1]; hs = [l.split()[0] for l in open(sys.argv[2]) if l.strip()]
G = '/workspace/lom_project/game/%s/English' % ('LoM_rb2' if L == '2' else 'LoM_rb')
log = open('/workspace/lom_project/rebuild/build/palbisect.log', 'a')
n = [0]
def bug(sub):
    open(G + '/lomrb_only.txt', 'w').write('\n'.join(sub) + '\n')
    n[0] += 1
    out = subprocess.run(['/workspace/lom_project/palprobe.sh', L, 'pb%d' % n[0]], capture_output=True, text=True).stdout
    m = re.search(r"\(320, 240\)|\[\(.*?\), \((\d+), (\d+), (\d+)\)", out)
    px = re.findall(r'\((\d+), (\d+), (\d+)\)', out)
    b = int(px[1][2]) if len(px) > 1 else -1
    r = 'BUG' if b == 148 else ('OK' if b == 74 else 'UNK(%d)' % b)
    log.write('probe %d n=%d %s..%s -> %s\n' % (n[0], len(sub), sub[0], sub[-1], r)); log.flush()
    return r
c = hs
while len(c) > 1:
    h = c[:len(c) // 2]
    r = bug(h)
    if r == 'BUG': c = h; continue
    r2 = bug(c[len(c) // 2:])
    if r2 == 'BUG': c = c[len(c) // 2:]; continue
    log.write('neither half alone -> interaction; stop with %d candidates\n' % len(c)); break
log.write('RESULT %s\n' % ' '.join(c[:20])); log.close()
os.rename(G + '/lomrb_only.txt', G + '/lomrb_only_palbisect_last.txt')
