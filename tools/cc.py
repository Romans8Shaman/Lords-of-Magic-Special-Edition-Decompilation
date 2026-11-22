#!/usr/bin/env python3
"""cc.py [dir] : compile every src/<dir>/*.c to build/obj/<dir>/*.o with the Win32 cross compiler; report failures."""
import sys, os, subprocess, glob
from concurrent.futures import ThreadPoolExecutor
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CC = '/opt/llvm-mingw/bin/i686-w64-mingw32-clang'
CFLAGS = ['-std=gnu17', '-O2', '-ffreestanding', '-fno-builtin', '-fno-strict-aliasing', '-fwrapv', '-fno-strict-overflow',
          '-fno-delete-null-pointer-checks', '-fno-stack-protector', '-fno-asynchronous-unwind-tables',
          '-march=i686', '-mno-sse', '-mfpmath=387', '-ffunction-sections', '-fno-ident',
          '-Wno-incompatible-pointer-types', '-Wno-int-conversion', '-Wno-int-to-pointer-cast',
          '-Wno-pointer-to-int-cast', '-Wno-incompatible-function-pointer-types', '-Wno-parentheses-equality',
          '-Wno-unused-value', '-Wno-return-type', '-Wno-implicit-function-declaration', '-Werror=implicit-function-declaration',
          '-Wno-main-return-type', '-Wno-pointer-sign', '-Wno-tautological-constant-out-of-range-compare',
          '-I' + os.path.join(ROOT, 'include')]
if os.environ.get('LOM_FORCE32'): CFLAGS += ['-DLOM_FORCE32=1']

def one(src, objdir):
    obj = os.path.join(objdir, os.path.basename(src)[:-2] + '.o')
    # v3: fns whose decomp reads an uninitialised local (UB -> clang deletes the path tail, falls off the end)
    ai = os.path.join(ROOT, 'build', 'autoinit.txt')
    extra = ['-ftrivial-auto-var-init=zero'] if os.path.exists(ai) and os.path.basename(src)[:8] in open(ai).read().split() else []
    r = subprocess.run([CC] + CFLAGS + extra + ['-c', src, '-o', obj], capture_output=True, text=True)
    return src, r.returncode, r.stderr
if __name__ == '__main__':
    d = sys.argv[1] if len(sys.argv) > 1 else 'gen'
    srcs = sorted(glob.glob(os.path.join(ROOT, 'src', d, '*.c')))
    if len(sys.argv) > 2: srcs = [s for s in srcs if os.path.basename(s)[:8] in sys.argv[2:]]
    objdir = os.path.join(ROOT, 'build', 'obj', d); os.makedirs(objdir, exist_ok=True)
    ok = 0; bad = []
    with ThreadPoolExecutor(8) as ex:
        for src, rc, err in ex.map(lambda s: one(s, objdir), srcs):
            if rc == 0: ok += 1
            else:
                bad.append(os.path.basename(src)[:8])
                open(os.path.join(objdir, os.path.basename(src)[:-2] + '.err'), 'w').write(err)
    print('compiled %d ok, %d failed' % (ok, len(bad)))
    open(os.path.join(ROOT, 'build', 'cc_fail_%s.txt' % d), 'w').write('\n'.join(bad) + '\n')
