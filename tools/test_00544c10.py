#!/usr/bin/env python3
"""Native test: already-fn 00544c10 C vs the full 881-byte original body (0x544c10-0x544f80)."""
import os, sys, struct, subprocess, random
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, cc
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
R = lomdb.ROOT
OUT = os.path.join(R, 'build', 'fn_extent')
CC = cc.CC
CFLAGS = ['-std=gnu17', '-O2', '-fno-strict-aliasing', '-fwrapv',
          '-march=i686', '-mno-sse', '-mfpmath=387', '-DLOM_00544C10_NATIVE',
          '-I' + os.path.join(R, 'include')]
ADDR, SIZE = 0x544c10, 881
md = Cs(CS_ARCH_X86, CS_MODE_32)

def orig_and_patches():
    code = bytearray(lomdb.read_va(ADDR, SIZE))
    patches = []  # (off, kind) kind 0=005479e0, 1=005451d0, or ('g', disp_off, which_global)
    # abs globals: 66 8b 1d b6 56 5d 00  and  66 8b 2d b8 56 5d 00
    for i in md.disasm(bytes(code), ADDR):
        if i.mnemonic == 'call' and i.op_str.startswith('0x') and i.size == 5 and i.bytes[0] == 0xe8:
            t = int(i.op_str, 16)
            if t == 0x5479e0:
                patches.append((i.address - ADDR, 0))
            elif t == 0x5451d0:
                patches.append((i.address - ADDR, 1))
        if i.mnemonic == 'mov' and '0x5d56b6' in i.op_str:
            # disp32 starts at last 4 bytes
            patches.append((i.address - ADDR + i.size - 4, 'g6'))
        if i.mnemonic == 'mov' and '0x5d56b8' in i.op_str:
            patches.append((i.address - ADDR + i.size - 4, 'g8'))
    return bytes(code), patches

def write_c(path):
    orig, patches = orig_and_patches()
    hx = ', '.join('0x%02x' % b for b in orig)
    parts = [r'''#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

unsigned short g_lcid_b6, g_lcid_b8;
volatile unsigned g_n479, g_n51, g_last_typ, g_last_lcid, g_last_dst, g_last51_a, g_last51_b, g_sig;
volatile uint32_t g_run_fn, g_arg;

unsigned stub_005479e0(int a, unsigned lcid, unsigned typ, char *dst) {
    g_n479++;
    g_last_typ = typ;
    g_last_lcid = lcid;
    g_last_dst = (unsigned)(uintptr_t)dst;
    g_sig = g_sig * 16777619u + typ + lcid * 0x9e3779b9u + (unsigned)(uintptr_t)dst;
    /* observable mix of all args */
    return (unsigned)(0x10000u * (typ & 0xff) + (lcid & 0xffff) + ((unsigned)(uintptr_t)dst & 0xff) + (unsigned)a);
}
unsigned stub_005451d0(char *lcid, int rec) {
    g_n51++;
    g_last51_a = (unsigned)(uintptr_t)lcid;
    g_last51_b = (unsigned)rec;
    g_sig = g_sig * 16777619u + 0x5451d0u + (unsigned)(uintptr_t)lcid + (unsigned)rec * 0x9e3779b9u;
    return 0x80000000u + ((unsigned)(uintptr_t)lcid & 0xffff) + ((unsigned)rec & 0xff);
}

extern unsigned __cdecl rb_00544c10(char *param_1);

static const uint8_t orig_bytes[881] = { ''' + hx + r''' };

typedef unsigned (__cdecl *fn_t)(char *);

__attribute__((noinline)) unsigned run_cdecl1(fn_t fn, char *p) {
    return fn(p);
}

static uint8_t *rx;
static void *stub479, *stub51, *pg6, *pg8;

static fn_t prep_orig(void) {
    memcpy(rx, orig_bytes, 881);
''']
    # emit patches in C
    for off, kind in patches:
        if kind == 0:
            parts.append('    { uint32_t rel = (uint32_t)(uintptr_t)stub479 - ((uint32_t)(uintptr_t)(rx + %d + 5)); memcpy(rx + %d + 1, &rel, 4); }\n' % (off, off))
        elif kind == 1:
            parts.append('    { uint32_t rel = (uint32_t)(uintptr_t)stub51 - ((uint32_t)(uintptr_t)(rx + %d + 5)); memcpy(rx + %d + 1, &rel, 4); }\n' % (off, off))
        elif kind == 'g6':
            parts.append('    { uint32_t a = (uint32_t)(uintptr_t)pg6; memcpy(rx + %d, &a, 4); }\n' % off)
        elif kind == 'g8':
            parts.append('    { uint32_t a = (uint32_t)(uintptr_t)pg8; memcpy(rx + %d, &a, 4); }\n' % off)
    parts.append(r'''
    FlushInstructionCache(GetCurrentProcess(), rx, 881);
    return (fn_t)rx;
}

static void clear(void) { g_n479 = g_n51 = g_last_typ = g_last_lcid = g_last_dst = g_last51_a = g_last51_b = g_sig = 0; }

int main(void) {
    stub479 = (void *)stub_005479e0;
    stub51 = (void *)stub_005451d0;
    pg6 = (void *)&g_lcid_b6;
    pg8 = (void *)&g_lcid_b8;
    rx = (uint8_t *)VirtualAlloc(NULL, 4096, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!rx) { printf("VirtualAlloc failed\n"); return 2; }
    fn_t orig = prep_orig();
    unsigned fail = 0, ran = 0;
    /* null path */
    for (int t = 0; t < 200; t++) {
        g_lcid_b6 = (unsigned short)(0x400 + t);
        g_lcid_b8 = (unsigned short)(0x800 + t);
        clear();
        unsigned c = run_cdecl1(rb_00544c10, (char *)0);
        unsigned ev = g_n479 + 2 * g_n51;
        clear();
        unsigned o = run_cdecl1(orig, (char *)0);
        ran += 2;
        if (c != 0xffffffffu || o != 0xffffffffu || ev != 0 || g_n479 || g_n51) {
            printf("FAIL null t=%d c=%08x o=%08x ev=%u n479=%u n51=%u\n", t, c, o, ev, g_n479, g_n51);
            fail++; if (fail > 8) return 1;
        }
    }
    static char buf[0x200];
    for (int t = 0; t < 4000; t++) {
        memset(buf, (t * 17) & 0xff, sizeof buf);
        g_lcid_b6 = (unsigned short)(0x1000 + (t * 13));
        g_lcid_b8 = (unsigned short)(0x2000 + (t * 29));
        char *p = buf + (t % 16);
        clear();
        unsigned c = run_cdecl1(rb_00544c10, p);
        unsigned n479c = g_n479, n51c = g_n51, typc = g_last_typ, lc = g_last_lcid, dstdc = g_last_dst, a51c = g_last51_a, b51c = g_last51_b, sigc = g_sig;
        clear();
        unsigned o = run_cdecl1(orig, p);
        ran += 2;
        if (c != o || n479c != 42 || n51c != 1 || g_n479 != 42 || g_n51 != 1
            || typc != g_last_typ || lc != g_last_lcid || dstdc != g_last_dst
            || a51c != g_last51_a || b51c != g_last51_b || sigc != g_sig) {
            printf("FAIL t=%d c=%08x o=%08x n479=%u/%u n51=%u/%u typ=%u/%u lcid=%u/%u dst=%08x/%08x a51=%08x/%08x b51=%u/%u\n",
                   t, c, o, n479c, g_n479, n51c, g_n51, typc, g_last_typ, lc, g_last_lcid,
                   dstdc, g_last_dst, a51c, g_last51_a, b51c, g_last51_b);
            fail++; if (fail > 8) return 1;
        }
    }
    printf("PASS ran=%u fail=%u\n", ran, fail);
    return fail ? 1 : 0;
}
''')
    open(path, 'w').write(''.join(parts))
    print('patches', len(patches), 'calls479', sum(1 for _,k in patches if k==0), 'calls51', sum(1 for _,k in patches if k==1), 'g', [k for _,k in patches if isinstance(k,str)])

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
    src = os.path.join(OUT, 'test_00544c10.c')
    write_c(src)
    fnsrc = os.path.join(R, 'src', 'fn', '00544c10.c')
    fnobj = os.path.join(OUT, '00544c10_native.o')
    r = subprocess.run([CC] + CFLAGS + ['-c', fnsrc, '-o', fnobj], capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-2000:]); raise SystemExit('fn compile fail')
    exe = os.path.join(OUT, 'test_00544c10.exe')
    rc, out, err = compile_and_run(src, [fnobj], exe)
    open(os.path.join(OUT, 'test_00544c10.out'), 'w').write(out + ('\n---\n'+err if err else ''))
    print(out)
    if rc: print('rc', rc, err[-1000:] if err else ''); raise SystemExit(1)
    print('NATIVE 00544c10 PASS')

if __name__ == '__main__':
    main()
