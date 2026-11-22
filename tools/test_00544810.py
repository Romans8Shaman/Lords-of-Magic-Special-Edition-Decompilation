#!/usr/bin/env python3
"""Native test: already-fn 00544810 C vs the full 108-byte original body (0x544810-0x54487b)."""
import os, sys, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, cc
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
R = lomdb.ROOT
OUT = os.path.join(R, 'build', 'fn_extent')
CC = cc.CC
CFLAGS = ['-std=gnu17', '-O2', '-fno-strict-aliasing', '-fwrapv',
          '-march=i686', '-mno-sse', '-mfpmath=387', '-DLOM_00544810_NATIVE',
          '-I' + os.path.join(R, 'include')]
ADDR, SIZE = 0x544810, 108
md = Cs(CS_ARCH_X86, CS_MODE_32)

def patches():
    code = bytearray(lomdb.read_va(ADDR, SIZE))
    ps = []
    for i in md.disasm(bytes(code), ADDR):
        off = i.address - ADDR
        if i.mnemonic == 'call' and i.op_str.startswith('0x') and i.size == 5 and i.bytes[0] == 0xe8:
            t = int(i.op_str, 16)
            ps.append((off, 'rel', t))
        elif i.mnemonic == 'call' and '0x54d1e0' in i.op_str:
            # ff 15 <iat>  — patch the IAT address field (last 4)
            ps.append((off + 2, 'iat_inc'))
        elif i.mnemonic == 'mov' and '0x54d1f0' in i.op_str:
            # 8b 3d f0 d1 54 00  mov edi, [iat]
            ps.append((off + 2, 'iat_dec'))
        elif '0x5d6b2c' in i.op_str:
            # last 4 is the abs
            ps.append((off + i.size - 4, 'gcount'))
        elif '0x5d6b28' in i.op_str:
            ps.append((off + i.size - 4, 'gflag'))
    return bytes(code), ps

def write_c(path):
    orig, ps = patches()
    print('00544810 patches', ps)
    hx = ', '.join('0x%02x' % b for b in orig)
    # map rel targets
    parts = [r'''#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int g_lock_flag;
volatile LONG g_lock_count;
volatile unsigned g_ninc, g_ndec, g_nbb, g_ncc, g_n88, g_sig, g_arg13, g_p, g_w;

LONG __stdcall stub_InterlockedIncrement(LONG *p) { g_ninc++; g_sig = g_sig * 16777619u + 1 + (unsigned)(uintptr_t)p; return ++(*p); }
LONG __stdcall stub_InterlockedDecrement(LONG *p) { g_ndec++; g_sig = g_sig * 16777619u + 2 + (unsigned)(uintptr_t)p; return --(*p); }
int stub_0053cbb0(int a) { g_nbb++; g_arg13 = (unsigned)a; g_sig = g_sig * 16777619u + 0x53cbb0u + (unsigned)a; return 0x10; }
int stub_0053cc30(int a) { g_ncc++; g_arg13 = (unsigned)a; g_sig = g_sig * 16777619u + 0x53cc30u + (unsigned)a; return 0x20; }
int stub_00544880(char *p, unsigned short w) { g_n88++; g_p = (unsigned)(uintptr_t)p; g_w = w; g_sig = g_sig * 16777619u + 0x544880u + (unsigned)(uintptr_t)p + w; return 0x1000 + w; }

extern int __cdecl rb_00544810(char *param_1, unsigned short param_2);

static const uint8_t orig_bytes[108] = { ''' + hx + r''' };

typedef int (__cdecl *fn_t)(char *, unsigned short);
__attribute__((noinline)) int run_cdecl2(fn_t fn, char *p, unsigned short w) { return fn(p, w); }

static uint8_t *rx;
static uint32_t iat_inc, iat_dec;
static void *pcount, *pflag, *sbb, *scc, *s88;

static fn_t prep_orig(void) {
    memcpy(rx, orig_bytes, 108);
''']
    for off, kind, *rest in [(x[0], x[1], x[2] if len(x)>2 else None) for x in [(p[0], p[1]) + ((p[2],) if len(p)>2 else ()) for p in ps]]:
        if kind == 'rel':
            tgt = rest[0]
            if tgt == 0x53cbb0:
                var = 'sbb'
            elif tgt == 0x53cc30:
                var = 'scc'
            elif tgt == 0x544880:
                var = 's88'
            else:
                raise SystemExit('unexpected rel %x' % tgt)
            parts.append('    { uint32_t rel = (uint32_t)(uintptr_t)%s - ((uint32_t)(uintptr_t)(rx + %d + 5)); memcpy(rx + %d + 1, &rel, 4); }\n' % (var, off, off))
        elif kind == 'iat_inc':
            parts.append('    { uint32_t a = (uint32_t)(uintptr_t)&iat_inc; memcpy(rx + %d, &a, 4); }\n' % off)
        elif kind == 'iat_dec':
            parts.append('    { uint32_t a = (uint32_t)(uintptr_t)&iat_dec; memcpy(rx + %d, &a, 4); }\n' % off)
        elif kind == 'gcount':
            parts.append('    { uint32_t a = (uint32_t)(uintptr_t)pcount; memcpy(rx + %d, &a, 4); }\n' % off)
        elif kind == 'gflag':
            parts.append('    { uint32_t a = (uint32_t)(uintptr_t)pflag; memcpy(rx + %d, &a, 4); }\n' % off)
    parts.append(r'''
    FlushInstructionCache(GetCurrentProcess(), rx, 108);
    return (fn_t)rx;
}
static void clear(void) { g_ninc = g_ndec = g_nbb = g_ncc = g_n88 = g_sig = g_arg13 = g_p = g_w = 0; }

int main(void) {
    iat_inc = (uint32_t)(uintptr_t)stub_InterlockedIncrement;
    iat_dec = (uint32_t)(uintptr_t)stub_InterlockedDecrement;
    pcount = (void *)&g_lock_count;
    pflag = (void *)&g_lock_flag;
    sbb = (void *)stub_0053cbb0; scc = (void *)stub_0053cc30; s88 = (void *)stub_00544880;
    rx = (uint8_t *)VirtualAlloc(NULL, 4096, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!rx) { printf("VirtualAlloc failed\n"); return 2; }
    fn_t orig = prep_orig();
    unsigned fail = 0, ran = 0;
    static char buf[32];
    for (int t = 0; t < 4000; t++) {
        int flag = t & 1; /* 0 and 1 */
        g_lock_flag = flag;
        g_lock_count = (long)(t * 3);
        long count0 = g_lock_count;
        char *p = buf + (t % 8);
        unsigned short w = (unsigned short)(0x20 + (t * 7));
        clear();
        long c0 = g_lock_count;
        int c = run_cdecl2(rb_00544810, p, w);
        unsigned ninc_c=g_ninc, ndec_c=g_ndec, nbb_c=g_nbb, ncc_c=g_ncc, n88_c=g_n88, sig_c=g_sig, arg_c=g_arg13, pc=g_p, wc=g_w;
        long count_c = g_lock_count;
        g_lock_flag = flag; g_lock_count = count0;
        clear();
        int o = run_cdecl2(orig, p, w);
        ran += 2;
        int exp_inc = 1;
        int exp_dec = 1; /* both paths decrement once */
        int exp_bb = flag ? 1 : 0;
        int exp_cc = flag ? 1 : 0;
        if (c != o || ninc_c != g_ninc || ndec_c != g_ndec || nbb_c != g_nbb || ncc_c != g_ncc
            || n88_c != g_n88 || sig_c != g_sig || arg_c != g_arg13 || pc != g_p || wc != g_w
            || count_c != g_lock_count
            || ninc_c != (unsigned)exp_inc || ndec_c != (unsigned)exp_dec
            || nbb_c != (unsigned)exp_bb || ncc_c != (unsigned)exp_cc || n88_c != 1
            || c != (int)(0x1000 + w)) {
            printf("FAIL t=%d flag=%d c=%d o=%d inc=%u/%u dec=%u/%u bb=%u/%u cc=%u/%u n88=%u/%u sig=%08x/%08x count=%ld/%ld\n",
                   t, flag, c, o, ninc_c, g_ninc, ndec_c, g_ndec, nbb_c, g_nbb, ncc_c, g_ncc, n88_c, g_n88, sig_c, g_sig, count_c, (long)g_lock_count);
            fail++; if (fail > 8) return 1;
        }
        (void)c0; (void)exp_inc;
    }
    printf("PASS ran=%u fail=%u\n", ran, fail);
    return fail ? 1 : 0;
}
''')
    open(path,'w').write(''.join(parts))

def compile_and_run(src, extras, exe):
    cmd = [CC] + CFLAGS + ['-o', exe, src] + extras + ['-Wl,--image-base=0x00800000', '-Wl,--disable-dynamicbase']
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-4000:]+'\n'); raise SystemExit('link fail')
    env = os.environ.copy(); env['WINEPREFIX']='/tmp/fnxwp'; env['WINEDEBUG']='-all'
    os.makedirs('/tmp/fnxwp', exist_ok=True)
    r = subprocess.run(['wine', exe], capture_output=True, text=True, env=env, timeout=120)
    return r.returncode, r.stdout, r.stderr

def main():
    os.makedirs(OUT, exist_ok=True)
    src = os.path.join(OUT, 'test_00544810.c')
    write_c(src)
    fnsrc = os.path.join(R, 'src', 'fn', '00544810.c')
    fnobj = os.path.join(OUT, '00544810_native.o')
    r = subprocess.run([CC] + CFLAGS + ['-c', fnsrc, '-o', fnobj], capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-2000:]); raise SystemExit('fn compile fail')
    exe = os.path.join(OUT, 'test_00544810.exe')
    rc, out, err = compile_and_run(src, [fnobj], exe)
    open(os.path.join(OUT, 'test_00544810.out'), 'w').write(out + ('\n---\n'+err if err else ''))
    print(out)
    if rc: print('rc', rc, err[-1000:] if err else ''); raise SystemExit(1)
    print('NATIVE 00544810 PASS')

if __name__ == '__main__':
    main()
