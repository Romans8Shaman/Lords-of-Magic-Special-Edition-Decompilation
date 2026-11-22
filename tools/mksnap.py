#!/usr/bin/env python3
"""mksnap.py SPEC.py OUTDIR N [ADDR] : (2026-11-13) write N synthetic difftest snapshots (same format as tools/snapd.py:
zlib-free pickle {addr, call, regs, fpu, mem}) from a leafcheck-style spec: SPEC.gen(r, t) -> dict(stack=[dwords],
ecx=, edx=, eax=, mem=[(addr, bytes)]). Lets difftest (DT_SNAP=OUTDIR) run NON-leaf fns on real-shaped inputs with its
normal callee stubbing/event comparison. Scratch 0x20000000..+SCRN (default 2 MB); writes into the exe image range
become patched copies of the image pages; stack page at 0x0c000000 (0x0e000000 is difftest MAGIC_RET)."""
import sys, os, random, struct, pickle, zlib, importlib.util
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
spec, out, N = sys.argv[1], sys.argv[2], int(sys.argv[3])
s = importlib.util.spec_from_file_location('spec', spec); S = importlib.util.module_from_spec(s); s.loader.exec_module(S)
addr = int(sys.argv[4], 16) if len(sys.argv) > 4 else int(os.path.basename(spec)[:8], 16)
img = lomdb.pe().get_memory_mapped_image()
SCR = 0x20000000; SCRN = getattr(S, 'SCRN', 0x200000); STK = 0x0c000000
os.makedirs(out, exist_ok=True)
r = random.Random(getattr(S, 'SEED', 7))
for t in range(N):
    inp = S.gen(r, t)
    scr = bytearray(SCRN); pages = {}
    for a, d in inp.get('mem', []):
        if SCR <= a and a + len(d) <= SCR + SCRN: scr[a - SCR:a - SCR + len(d)] = d; continue
        if 0x400000 <= a < 0x600000:
            for i, b in enumerate(d):
                pg = (a + i) & ~0xfff
                if pg not in pages: pages[pg] = bytearray(img[pg - 0x400000:pg - 0x400000 + 0x1000])
                pages[pg][(a + i) & 0xfff] = b
            continue
        raise SystemExit('mem write outside scratch/image: %x' % a)
    st = inp.get('stack', [])
    stk = bytearray(0x10000); struct.pack_into('<%dI' % (1 + len(st)), stk, 0x8000, 0x0f00f000, *st)
    mem = [(SCR, SCRN, 'rw', zlib.compress(bytes(scr), 1)), (STK, 0x10000, 'rw', zlib.compress(bytes(stk), 1))]
    mem += [(pg, 0x1000, 'rw', zlib.compress(bytes(d), 1)) for pg, d in sorted(pages.items())]
    regs = dict(eax=inp.get('eax', 0x55555555), ecx=inp.get('ecx', 0x55555555), edx=inp.get('edx', 0x55555555),
                ebx=0x11111111, esp=STK + 0x8000, ebp=0x44444444, esi=0x22222222, edi=0x33333333, eflags=0x246)
    pickle.dump({'addr': addr, 'call': t, 'regs': regs, 'fpu': struct.pack('<H', getattr(S, 'FPCW', 0x27f)) + bytes(106), 'mem': mem},
                open(os.path.join(out, '%08x_%d.snap' % (addr, t + 1)), 'wb'))
print('wrote %d snaps for %08x to %s' % (N, addr, out))
