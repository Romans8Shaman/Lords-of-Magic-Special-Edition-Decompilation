#!/usr/bin/env python3
"""link_test.py [dir] [addrs...]: link compiled objects into build/test_<dir>.dll (fixed base 0x10000000, no imports)
for emulator differential testing; writes build/test_<dir>.syms (addr -> rebuilt entry)."""
import sys, os, subprocess, glob, re
import pefile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CC = '/opt/llvm-mingw/bin/i686-w64-mingw32-clang'
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from cc import CFLAGS
def link(d, addrs=None, out=None):
    objs = sorted(glob.glob(os.path.join(ROOT, 'build', 'obj', d, '*.o')))
    if addrs: objs = [o for o in objs if os.path.basename(o)[:8] in addrs]
    objs = [o for o in objs if os.path.exists(os.path.join(ROOT, 'src', d, os.path.basename(o)[:8] + '.c'))]
    rt = os.path.join(ROOT, 'build', 'obj', 'rt.o')
    subprocess.run([CC] + CFLAGS + ['-c', os.path.join(ROOT, 'src', 'rt', 'rt.c'), '-o', rt], check=True)
    out = out or os.path.join(ROOT, 'build', 'test_%s.dll' % d)
    stub = os.path.join(ROOT, 'build', 'obj', 'stub.o')
    open(os.path.join(ROOT,'build','stub.c'),'w').write('int __stdcall DllEntry(void*a,unsigned b,void*c){return 1;}\n')
    subprocess.run([CC] + CFLAGS + ['-c', os.path.join(ROOT,'build','stub.c'), '-o', stub], check=True)
    cmd = [CC, '-shared', '-nostdlib', '-o', out, stub, rt] + objs + [
        '-Wl,--image-base=0x10000000', '-Wl,--disable-dynamicbase', '-Wl,--export-all-symbols',
        '-Wl,--entry=DllEntry@12', '-Wl,--disable-auto-import', '-Wl,--disable-runtime-pseudo-reloc',
        subprocess.check_output([CC, '-print-libgcc-file-name'], text=True).strip()]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode: print(r.stderr[-3000:]); sys.exit(1)
    p = pefile.PE(out)
    syms = {}
    for e in p.DIRECTORY_ENTRY_EXPORT.symbols:
        n = e.name.decode() if e.name else ''
        m = re.search(r'rb_([0-9a-f]{8})', n)
        if m: syms[int(m.group(1), 16)] = p.OPTIONAL_HEADER.ImageBase + e.address
    with open(out[:-4] + '.syms', 'w') as f:
        for a in sorted(syms): f.write('%08x %08x\n' % (a, syms[a]))
    has_reloc = hasattr(p, 'DIRECTORY_ENTRY_BASERELOC')
    print('linked %s: %d functions, relocs=%s' % (out, len(syms), has_reloc))
if __name__ == '__main__':
    d = sys.argv[1] if len(sys.argv) > 1 else 'gen'
    link(d, set(sys.argv[2:]) or None)
