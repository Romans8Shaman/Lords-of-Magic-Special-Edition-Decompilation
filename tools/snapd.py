#!/usr/bin/env python3
"""snapd.py GAMEDIR [OUTDIR]: dumper daemon for the harness input capture (hook.c v7, lomrb_capture.txt).
Polls GAMEDIR/lomrb_snap/req_*.txt, dumps the game's memory through /proc/PID/mem (anonymous readable mappings
below 2 GB + lomse.exe image), writes OUTDIR/ADDR_K.snap (zlib pickle: regs, fpu, regions) and deletes the request
so the game continues. TEST-ONLY; reads only the test lane's own process."""
import sys, os, glob, time, pickle, zlib, re
gd = os.path.abspath(sys.argv[1]); out = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'build', 'snaps')
os.makedirs(out, exist_ok=True)
def find_pid():
    for p in os.listdir('/proc'):
        if not p.isdigit(): continue
        try:
            if os.readlink('/proc/%s/cwd' % p) == gd and 'lomse' in open('/proc/%s/cmdline' % p, 'rb').read().split(b'\0')[0].decode('latin1').lower():
                return int(p)
        except OSError: pass
def regions(pid):
    rs = []
    for l in open('/proc/%d/maps' % pid):
        p = l.split(None, 5); a, b = [int(x, 16) for x in p[0].split('-')]
        path = p[5].strip() if len(p) > 5 else ''
        if b > 0x80000000 or 'r' not in p[1]: continue
        if path and not path.lower().endswith('lomse.exe'): continue
        if 0x0d000000 <= a < 0x10800000 or 0x0d000000 < b <= 0x10800000: continue   # difftest fixed regions
        rs.append((a, b, p[1]))
    return rs
def dump(req):
    t0 = time.time()
    d = {}
    for l in open(req):
        k, v = l.split(None, 1); d[k] = v.strip()
    pid = find_pid()
    if pid is None: print('no pid'); return
    regs = {k: int(d[k], 16) for k in ('eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi', 'eflags')}
    mem = []; tot = 0
    with open('/proc/%d/mem' % pid, 'rb', buffering=0) as f:
        for a, b, perm in regions(pid):
            try:
                f.seek(a); data = f.read(b - a)
            except OSError: continue
            if not data.strip(b'\0'): mem.append((a, b - a, perm, None)); continue
            mem.append((a, b - a, perm, zlib.compress(data, 1))); tot += b - a
    addr = d['addr']; k = re.search(r'_(\d+)\.txt$', req).group(1)
    fn = os.path.join(out, '%s_%s.snap' % (addr, k))
    pickle.dump({'addr': int(addr, 16), 'call': int(d['call']), 'regs': regs, 'fpu': bytes.fromhex(d['fpu']), 'mem': mem}, open(fn + '.tmp', 'wb'))
    os.rename(fn + '.tmp', fn)
    print('%s %d MB in %.1fs' % (fn, tot >> 20, time.time() - t0), flush=True)
while True:
    for req in sorted(glob.glob(os.path.join(gd, 'lomrb_snap', 'req_*.txt'))):
        try: dump(req)
        except Exception as e: print('ERR', req, e, flush=True)
        try: os.remove(req)
        except OSError: pass
    time.sleep(0.05)
