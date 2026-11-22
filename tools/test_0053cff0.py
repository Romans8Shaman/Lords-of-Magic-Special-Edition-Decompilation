#!/usr/bin/env python3
"""Native difftest: rb_0053cff0 (_output) vs original bytes, via mapped vanilla
helpers and cdecl _cfltcvt stubs. Covers the game's only float formats (%g and
%f%n) plus help-scroll-adjacent %s/%d and flag/precision variants. A stdcall
mutant of the _cfltcvt call must be killed.
"""
import os, sys, subprocess, shutil, hashlib
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, cc

R = lomdb.ROOT
OUT = os.path.join(R, 'build', 'fn_0053cff0')
CC = cc.CC
from cc import CFLAGS as FN_CFLAGS
# driver may use libc snprintf/printf; the fn object uses official flags
DRV_CFLAGS = ['-std=gnu17', '-O2', '-fno-strict-aliasing', '-fwrapv',
              '-march=i686', '-mno-sse', '-mfpmath=387',
              '-I' + os.path.join(R, 'include')]
WINEPREFIX = '/tmp/fn53cff0wp'
FNSRC = os.path.join(R, 'src', 'fn', '0053cff0.c')
MAIN = os.path.join(OUT, 'test_0053cff0_main.c')
VANILLA = '/workspace/lom_project/game/LoM/English/lomse.exe'

SLICES = {
    'text.bin':  (0x0053A000, 0x13000),
    'rdata.bin': (0x0054D000, 0x8000),
    'data.bin':  (0x00555000, 0x23200),
}

def write_slices():
    os.makedirs(OUT, exist_ok=True)
    for name, (va, sz) in SLICES.items():
        b = lomdb.read_va(va, sz)
        open(os.path.join(OUT, name), 'wb').write(b)
        print(f'  {name} va={va:#x} got={len(b):#x} md5={hashlib.md5(b).hexdigest()}')

def compile_fn(src, obj, defines=None):
    cmd = [CC] + FN_CFLAGS + (defines or []) + ['-c', src, '-o', obj]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-4000:] + '\n')
        raise SystemExit(f'compile fail: {src}')
    return obj

def compile_main(src, obj):
    cmd = [CC] + DRV_CFLAGS + ['-c', src, '-o', obj]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-4000:] + '\n')
        raise SystemExit(f'compile fail: {src}')
    return obj

def link_exe(objs, exe):
    cmd = [CC] + DRV_CFLAGS + ['-o', exe] + objs + [
        '-Wl,--image-base=0x00800000', '-Wl,--disable-dynamicbase',
        '-Wl,--no-insert-timestamp', '-Wl,--build-id=none']
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-4000:] + '\n')
        raise SystemExit(f'link fail: {exe}')
    return exe

def run_exe(exe, timeout=60):
    env = os.environ.copy()
    env['WINEPREFIX'] = WINEPREFIX
    env['WINEDEBUG'] = '-all'
    env['WINEDLLOVERRIDES'] = 'winedbg.exe=d'
    env['DISPLAY'] = os.environ.get('DISPLAY', ':1')
    os.makedirs(WINEPREFIX, exist_ok=True)
    try:
        r = subprocess.run(
            ['wine', exe, 'Z:' + OUT.replace('/', '\\')],
            capture_output=True, text=True, env=env, timeout=timeout,
            start_new_session=True)
        return r.returncode, r.stdout, r.stderr
    except subprocess.TimeoutExpired as e:
        subprocess.run(['wineserver', '-k'], env=env, capture_output=True)
        out = e.stdout.decode() if isinstance(e.stdout, bytes) else (e.stdout or '')
        err = e.stderr.decode() if isinstance(e.stderr, bytes) else (e.stderr or '')
        return 124, out, err + '\n[timeout]\n'

def make_mutant_src():
    src = open(FNSRC).read()
    old = ('((undefined4 (__cdecl *)(__typeof__(local_210), __typeof__(local_200), '
           '__typeof__((int)cVar7), __typeof__(local_244), __typeof__(local_218)))'
           '(*(code *)PTR_FUN_00574968))(local_210,local_200,(int)cVar7,local_244,local_218);')
    new = old.replace('__cdecl', '__stdcall')
    if old not in src:
        raise SystemExit('mutant: cdecl _cfltcvt call not found (source not in expected fixed form)')
    path = os.path.join(OUT, '0053cff0_mutant_stdcall.c')
    open(path, 'w').write(src.replace(old, new, 1))
    return path

def main():
    os.makedirs(OUT, exist_ok=True)
    if not os.path.isfile(MAIN):
        raise SystemExit(f'missing {MAIN}')
    print('slices:')
    write_slices()

    fnobj = os.path.join(OUT, '0053cff0_native.o')
    compile_fn(FNSRC, fnobj)
    mainobj = os.path.join(OUT, 'test_0053cff0_main.o')
    compile_main(MAIN, mainobj)
    exe = os.path.join(OUT, 'test_0053cff0.exe')
    link_exe([mainobj, fnobj], exe)
    rc, out, err = run_exe(exe)
    open(os.path.join(OUT, 'test_0053cff0.out'), 'w').write(
        out + ('\n---stderr---\n' + err if err else ''))
    print(out, end='' if out.endswith('\n') else '\n')
    if err.strip():
        print('stderr:', err[-2000:])
    if rc != 0 or 'PASS' not in out:
        print('rc', rc)
        raise SystemExit('NATIVE 0053cff0 FAIL')
    print('NATIVE 0053cff0 PASS')

    # Mutant: restore the mistaken stdcall. Must not PASS.
    print('mutant stdcall _cfltcvt:')
    msrc = make_mutant_src()
    mobj = os.path.join(OUT, '0053cff0_mutant.o')
    compile_fn(msrc, mobj)
    mexe = os.path.join(OUT, 'test_0053cff0_mutant.exe')
    link_exe([mainobj, mobj], mexe)
    mrc, mout, merr = run_exe(mexe, timeout=30)
    open(os.path.join(OUT, 'test_0053cff0_mutant.out'), 'w').write(
        mout + ('\n---stderr---\n' + merr if merr else ''))
    print(mout, end='' if mout.endswith('\n') else '\n')
    if merr.strip():
        print('mutant stderr:', merr[-2000:])
    killed = (mrc != 0) or ('PASS' not in mout) or ('FAIL' in mout)
    if not killed:
        raise SystemExit('MUTANT SURVIVED (stdcall _cfltcvt still PASSed) — test is too weak')
    print(f'MUTANT KILLED rc={mrc}')
    print('NATIVE 0053cff0 + MUTANT PASS')

if __name__ == '__main__':
    main()
