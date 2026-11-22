#!/usr/bin/env python3
"""Native test: already-fn 00539f23 / 0053a05f / 0053eb6f C (entry + mid-entry)
vs the original bodies through each ret. Mid-entry shims must use live
edi/esi/ebx, not reload them from the frame."""
import os, sys, subprocess, shutil, textwrap
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, cc
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
R = lomdb.ROOT
OUT = os.path.join(R, 'build', 'fn_step5')
CC = cc.CC
CFLAGS = ['-std=gnu17', '-O2', '-fno-strict-aliasing', '-fwrapv',
          '-march=i686', '-mno-sse', '-mfpmath=387',
          '-DG234_NATIVE_TEST', '-DG235_NATIVE_TEST', '-DG236_NATIVE_TEST',
          '-I' + os.path.join(R, 'include')]
md = Cs(CS_ARCH_X86, CS_MODE_32)

SPECS = {
    'f23': dict(addr=0x539f23, size=29, mid=6, mid_sym='rb_00539f29', calls={0x539f60: 's60'}),
    'f5f': dict(addr=0x53a05f, size=29, mid=9, mid_sym='rb_0053a068', calls={0x539f60: 's60'}),
    'f6f': dict(addr=0x53eb6f, size=87, mid=9, mid_sym='rb_0053eb78',
                calls={0x53efa0: 'sfa0', 0x539d7a: 'sd7a', 0x53ee20: 'se20'}),
}

def orig_and_rels(addr, size, callmap):
    code = bytearray(lomdb.read_va(addr, size))
    rels = []
    for i in md.disasm(bytes(code), addr):
        if i.mnemonic == 'call' and i.op_str.startswith('0x') and i.size == 5 and i.bytes[0] == 0xe8:
            t = int(i.op_str, 16)
            if t not in callmap:
                raise SystemExit('unexpected call %x at %x' % (t, i.address))
            rels.append((i.address - addr, callmap[t]))
    return bytes(code), rels

def hx(b):
    return ', '.join('0x%02x' % x for x in b)

def c_source():
    parts = []
    for name, sp in SPECS.items():
        raw, rels = orig_and_rels(sp['addr'], sp['size'], sp['calls'])
        sp['raw'] = raw
        sp['rels'] = rels
        print(name, '%08x' % sp['addr'], 'size', sp['size'], 'rels', rels)
    parts.append(r'''#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

volatile unsigned g_sig, g_n60, g_nfa0, g_nd7a, g_ne20;
volatile unsigned g_a0, g_a1, g_a2, g_a3;

unsigned __stdcall stub_00539f60(unsigned a, unsigned b, unsigned c, unsigned d) {
    g_n60++;
    g_a0=a; g_a1=b; g_a2=c; g_a3=d;
    g_sig = g_sig * 16777619u + 0x539f60u + a + 3*b + 5*c + 7*d;
    return 0x60000000u + a + 2*b;
}
unsigned g_ptd[0x80/4];
unsigned __stdcall stub_0053efa0(void) {
    g_nfa0++;
    g_sig = g_sig * 16777619u + 0x53efa0u + g_nfa0;
    return (unsigned)(uintptr_t)g_ptd;
}
int stub_00539d7a(void) {
    g_nd7a++;
    g_sig = g_sig * 16777619u + 0x539d7au;
    return 0x00d7a000;
}
unsigned stub_0053ee20(unsigned rec, unsigned abn) {
    g_ne20++;
    g_sig = g_sig * 16777619u + 0x53ee20u + rec + 3*abn;
    return 0x00e20000u + rec + abn;
}

extern void rb_00539f23(void);
extern void rb_00539f29(void);
extern void rb_0053a05f(void);
extern void rb_0053a068(void);
extern void rb_0053eb6f(void);
extern void rb_0053eb78(void);

struct inv { void *fn; void *frame; unsigned ebx, esi, edi; };

__attribute__((noinline)) unsigned invoke(struct inv *in) {
    unsigned eax;
    __asm__ volatile (
        "pushl %%ebx\n"
        "pushl %%esi\n"
        "pushl %%edi\n"
        "pushl %%ebp\n"
        "movl %[in], %%ecx\n"
        "movl (%%ecx), %%eax\n"
        "movl 4(%%ecx), %%ebp\n"
        "movl 8(%%ecx), %%ebx\n"
        "movl 12(%%ecx), %%esi\n"
        "movl 16(%%ecx), %%edi\n"
        "call *%%eax\n"
        "popl %%ebp\n"
        "popl %%edi\n"
        "popl %%esi\n"
        "popl %%ebx\n"
        : "=a"(eax)
        : [in] "r"(in)
        : "ecx", "edx", "memory"
    );
    return eax;
}

static uint8_t *rx;
''')
    # orig buffers + prep
    for name, sp in SPECS.items():
        parts.append('static const uint8_t orig_%s[%d] = { %s };\n' % (name, sp['size'], hx(sp['raw'])))
    parts.append('static void *s60, *sfa0, *sd7a, *se20;\n')
    for name, sp in SPECS.items():
        parts.append('static void *prep_%s(void) {\n' % name)
        parts.append('    uint8_t *p = rx + 0x%x;\n' % ((sp['addr'] & 0xfff) + 0x200))
        parts.append('    memcpy(p, orig_%s, %d);\n' % (name, sp['size']))
        for off, var in sp['rels']:
            parts.append('    { uint32_t rel = (uint32_t)(uintptr_t)%s - ((uint32_t)(uintptr_t)(p + %d + 5)); memcpy(p + %d + 1, &rel, 4); }\n' % (var, off, off))
        parts.append('    FlushInstructionCache(GetCurrentProcess(), p, %d);\n' % sp['size'])
        parts.append('    return p;\n}\n')
    parts.append(r'''
static void clear(void) { g_sig = g_n60 = g_nfa0 = g_nd7a = g_ne20 = g_a0 = g_a1 = g_a2 = g_a3 = 0; memset(g_ptd, 0, sizeof g_ptd); }

struct snap {
    unsigned eax, sig, n60, nfa0, nd7a, ne20, a0, a1, a2, a3;
    unsigned mem[8];
};

static void take(struct snap *s, unsigned eax, unsigned *mem, int nmem) {
    s->eax=eax; s->sig=g_sig; s->n60=g_n60; s->nfa0=g_nfa0; s->nd7a=g_nd7a; s->ne20=g_ne20;
    s->a0=g_a0; s->a1=g_a1; s->a2=g_a2; s->a3=g_a3;
    memset(s->mem, 0, sizeof s->mem);
    for (int i=0;i<nmem;i++) s->mem[i]=mem[i];
}
static int same(const struct snap *a, const struct snap *b, int nmem) {
    if (a->eax!=b->eax || a->sig!=b->sig || a->n60!=b->n60 || a->nfa0!=b->nfa0
        || a->nd7a!=b->nd7a || a->ne20!=b->ne20
        || a->a0!=b->a0 || a->a1!=b->a1 || a->a2!=b->a2 || a->a3!=b->a3) return 0;
    for (int i=0;i<nmem;i++) if (a->mem[i]!=b->mem[i]) return 0;
    return 1;
}

int main(void) {
    s60 = (void *)stub_00539f60; sfa0 = (void *)stub_0053efa0;
    sd7a = (void *)stub_00539d7a; se20 = (void *)stub_0053ee20;
    rx = (uint8_t *)VirtualAlloc(NULL, 8192, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!rx) { printf("VirtualAlloc failed\n"); return 2; }
    void *o23 = prep_f23();
    void *o5f = prep_f5f();
    void *o6f = prep_f6f();
    unsigned fail = 0, ran = 0;
    uint8_t framebuf[0x200];
    unsigned rec[8];
    unsigned ptdspace[0x40];
    unsigned area[16];

    for (int t = 0; t < 4000; t++) {
        /* ----- 00539f23 entry + mid ----- */
        memset(framebuf, 0xCC, sizeof framebuf);
        unsigned *fb = (unsigned *)(framebuf + 0x100);
        /* layout around ebp */
        unsigned flag = (t % 3 == 0) ? 0 : (0x1000u + (unsigned)t);
        unsigned slot_edi = 0x20000000u + t * 3;
        unsigned slot_esi = 0x30000000u + t * 5;
        unsigned a10 = 0x10 + (t & 0xff);
        unsigned a14 = 0x40 + ((t * 7) & 0xff);
        unsigned live_edi = 0x40000000u + t * 11;
        unsigned live_esi = 0x50000000u + t * 13;
        fb[0] = 0;            /* saved ebp at [ebp] */
        fb[1] = 0x00c0ffee;   /* ret */
        fb[2] = slot_esi;     /* ebp+8 */
        fb[3] = slot_edi;     /* ebp+c */
        fb[4] = a10;          /* ebp+10 */
        fb[5] = a14;          /* ebp+14 */
        fb[-7] = flag;        /* ebp-0x1c */

        for (int mid = 0; mid < 2; mid++) {
            struct inv in;
            struct snap sc, so;
            /* entry reloads edi/esi from the frame; mid uses live regs */
            in.frame = fb;
            in.ebx = 0x11111111;
            in.esi = live_esi;
            in.edi = live_edi;
            clear();
            in.fn = mid ? (void *)rb_00539f29 : (void *)rb_00539f23;
            unsigned ac = invoke(&in);
            take(&sc, ac, 0, 0);
            clear();
            in.fn = mid ? (uint8_t *)o23 + 6 : o23;
            unsigned ao = invoke(&in);
            take(&so, ao, 0, 0);
            ran++;
            if (!same(&sc, &so, 0)) {
                fail++;
                if (fail <= 8)
                    printf("FAIL f23 t=%d mid=%d c eax=%08x sig=%08x n60=%u a0=%08x a1=%08x a2=%08x a3=%08x  o eax=%08x sig=%08x n60=%u a0=%08x a1=%08x a2=%08x a3=%08x\n",
                           t, mid, sc.eax, sc.sig, sc.n60, sc.a0, sc.a1, sc.a2, sc.a3,
                           so.eax, so.sig, so.n60, so.a0, so.a1, so.a2, so.a3);
            }
        }

        /* ----- 0053a05f entry + mid ----- */
        unsigned flag20 = (t % 3 == 1) ? 0 : (0x2000u + (unsigned)t);
        unsigned slot_ebx = 0x21000000u + t * 3;
        unsigned slot_edi2 = 0x22000000u + t * 5;
        unsigned slot_esi2 = 0x23000000u + t * 7;
        unsigned a18 = 0x80 + ((t * 9) & 0xff);
        unsigned live_ebx = 0x61000000u + t * 11;
        unsigned live_edi2 = 0x62000000u + t * 13;
        unsigned live_esi2 = 0x63000000u + t * 17;
        fb[2] = slot_edi2;    /* ebp+8 */
        fb[3] = slot_ebx;     /* ebp+c */
        fb[6] = a18;          /* ebp+18 */
        fb[-7] = slot_esi2;   /* ebp-0x1c */
        fb[-8] = flag20;      /* ebp-0x20 */
        for (int mid = 0; mid < 2; mid++) {
            struct inv in;
            struct snap sc, so;
            in.frame = fb;
            in.ebx = live_ebx;
            in.esi = live_esi2;
            in.edi = live_edi2;
            clear();
            in.fn = mid ? (void *)rb_0053a068 : (void *)rb_0053a05f;
            unsigned ac = invoke(&in);
            take(&sc, ac, 0, 0);
            clear();
            in.fn = mid ? (uint8_t *)o5f + 9 : o5f;
            unsigned ao = invoke(&in);
            take(&so, ao, 0, 0);
            ran++;
            if (!same(&sc, &so, 0)) {
                fail++;
                if (fail <= 8)
                    printf("FAIL f5f t=%d mid=%d c eax=%08x sig=%08x n60=%u a0=%08x a1=%08x a2=%08x a3=%08x  o eax=%08x sig=%08x n60=%u a0=%08x a1=%08x a2=%08x a3=%08x\n",
                           t, mid, sc.eax, sc.sig, sc.n60, sc.a0, sc.a1, sc.a2, sc.a3,
                           so.eax, so.sig, so.n60, so.a0, so.a1, so.a2, so.a3);
            }
        }

        /* ----- 0053eb6f entry + mid ----- */
        memset(area, 0, sizeof area);
        memset(rec, 0, sizeof rec);
        int kind = t % 5; /* 0: not magic, 1: magic fail count, 2: magic+m24, 3: magic m24=0 ebx=0, 4: full catch */
        if (kind == 0) {
            rec[0] = 0x12345678;
        } else {
            rec[0] = 0xE06D7363u;
            rec[4] = (kind == 1) ? 1 : 3;          /* +0x10 */
            rec[5] = 0x19930520u;                  /* +0x14 */
        }
        unsigned m28 = 0xA0000000u + t;
        unsigned m1c = 0xB0000000u + t * 3;
        unsigned m20 = 0xC0000000u + t * 5;
        unsigned m24 = (kind == 2) ? (0x50 + (t & 0xf)) : 0;
        unsigned frame_ebx = 0x71000000u + t;
        unsigned frame_esi = (unsigned)(uintptr_t)(area + 4); /* so esi-4 is area[3] */
        unsigned frame_edi = (unsigned)(uintptr_t)rec;
        unsigned live_ebx3 = (kind == 3) ? 0 : (0x81000000u + t * 3);
        unsigned live_esi3 = (unsigned)(uintptr_t)(area + 8);
        unsigned live_edi3 = (unsigned)(uintptr_t)rec; /* same record; mid still needs a valid edi */
        /* For mid, use a *different* esi so [esi-4] write is observable as mid vs entry */
        fb[2] = frame_edi;        /* ebp+8 */
        fb[3] = frame_esi;        /* ebp+c */
        fb[-0x2c/4] = frame_ebx;  /* ebp-0x2c */
        fb[-0x28/4] = m28;
        fb[-0x1c/4] = m1c;
        fb[-0x20/4] = m20;
        fb[-0x24/4] = m24;
        for (int mid = 0; mid < 2; mid++) {
            struct inv in;
            struct snap sc, so;
            unsigned memc[4], memo[4];
            memset(area, 0, sizeof area);
            in.frame = fb;
            in.ebx = live_ebx3;
            in.esi = mid ? live_esi3 : 0x99999999; /* entry reloads esi from frame */
            in.edi = mid ? live_edi3 : 0x88888888;
            clear();
            in.fn = mid ? (void *)rb_0053eb78 : (void *)rb_0053eb6f;
            unsigned ac = invoke(&in);
            memc[0] = area[3]; /* frame esi-4 */
            memc[1] = area[7]; /* live esi-4 */
            memc[2] = g_ptd[0x6c/4];
            memc[3] = g_ptd[0x70/4];
            take(&sc, ac, memc, 4);
            memset(area, 0, sizeof area);
            clear();
            in.fn = mid ? (uint8_t *)o6f + 9 : o6f;
            unsigned ao = invoke(&in);
            memo[0] = area[3];
            memo[1] = area[7];
            memo[2] = g_ptd[0x6c/4];
            memo[3] = g_ptd[0x70/4];
            take(&so, ao, memo, 4);
            ran++;
            if (!same(&sc, &so, 4)) {
                fail++;
                if (fail <= 8)
                    printf("FAIL f6f t=%d mid=%d kind=%d c eax=%08x sig=%08x nfa0=%u nd7a=%u ne20=%u mem %08x %08x  o eax=%08x sig=%08x nfa0=%u nd7a=%u ne20=%u mem %08x %08x\n",
                           t, mid, kind, sc.eax, sc.sig, sc.nfa0, sc.nd7a, sc.ne20, sc.mem[0], sc.mem[1],
                           so.eax, so.sig, so.nfa0, so.nd7a, so.ne20, so.mem[0], so.mem[1]);
            }
        }
    }
    printf("PASS ran=%u fail=%u\n", ran, fail);
    return fail ? 1 : 0;
}
''')
    return ''.join(parts)

def compile_run(extra_cflags, src_override=None, tag='main'):
    os.makedirs(OUT, exist_ok=True)
    drv = os.path.join(OUT, 'drv_%s.c' % tag)
    open(drv, 'w').write(c_source() if src_override is None else src_override)
    objs = []
    srcs = [
        os.path.join(R, 'src', 'fn', '00539f23.c'),
        os.path.join(R, 'src', 'fn', '0053a05f.c'),
        os.path.join(R, 'src', 'fn', '0053eb6f.c'),
    ]
    if src_override and tag.startswith('m_'):
        # mutant: srcs already compiled separately
        pass
    for s in srcs:
        o = os.path.join(OUT, os.path.basename(s)[:-2] + '_' + tag + '.o')
        r = subprocess.run([CC] + CFLAGS + extra_cflags + ['-c', s, '-o', o], capture_output=True, text=True)
        if r.returncode:
            sys.stderr.write(r.stderr[-3000:] + '\n')
            raise SystemExit('compile %s fail' % s)
        objs.append(o)
    exe = os.path.join(OUT, 'test_%s.exe' % tag)
    r = subprocess.run([CC] + CFLAGS + extra_cflags + [drv] + objs + ['-o', exe],
                       capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-4000:] + '\n')
        raise SystemExit('link %s fail' % tag)
    env = os.environ.copy()
    env['WINEPREFIX'] = '/tmp/fnxwp'
    env['WINEDEBUG'] = '-all'
    r = subprocess.run(['wine', exe], capture_output=True, text=True, env=env, timeout=120)
    return r.returncode, r.stdout, r.stderr

def main():
    os.makedirs(OUT, exist_ok=True)
    rc, out, err = compile_run([], tag='main')
    sys.stdout.write(out)
    if err: sys.stderr.write(err[-2000:])
    if rc != 0 or 'PASS ran=24000 fail=0' not in out:
        raise SystemExit('native main fail rc=%s' % rc)
    print('NATIVE step5 tails PASS 24000 (4000 x 3 fns x entry/mid)')

    # mutants: each must FAIL against orig
    mutants = [
        ('m_flag23', '00539f23.c', 'if (flag == 0)', 'if (flag != 0)'),
        ('m_args5f', '0053a05f.c', 'return FUN_00539f60(edi, ebx, esi, a18);',
         'return FUN_00539f60(ebx, edi, esi, a18);'),
        ('m_esi6f', '0053eb6f.c', '*(unsigned *)(esi - 4) = m28;', '*(unsigned *)(esi - 4) = m1c;'),
        ('m_magic6f', '0053eb6f.c', '&& ebx != 0)', '&& ebx == 0)'),
    ]
    # apply mutants by temporarily copying
    kills = 0
    bakdir = os.path.join(OUT, 'srcbak')
    os.makedirs(bakdir, exist_ok=True)
    for tag, fn, old, new in mutants:
        src = os.path.join(R, 'src', 'fn', fn)
        bak = os.path.join(bakdir, fn)
        shutil.copy2(src, bak)
        t = open(src).read()
        if old not in t:
            raise SystemExit('mutant %s pattern not found' % tag)
        open(src, 'w').write(t.replace(old, new, 1))
        try:
            rc, out, err = compile_run([], tag=tag)
        finally:
            shutil.copy2(bak, src)
        killed = (rc != 0) or ('FAIL' in out) or ('PASS ran=24000 fail=0' not in out)
        print('mutant', tag, 'KILLED' if killed else 'SURVIVED', 'rc', rc, 'out', out.strip().splitlines()[-1] if out.strip() else '')
        if killed:
            kills += 1
        else:
            print(out[-1500:])
    if kills != len(mutants):
        raise SystemExit('mutant kill %d/%d' % (kills, len(mutants)))
    print('MUTANTS %d/%d killed' % (kills, len(mutants)))

    # production compile (no native define) of the six files
    prod_cflags = ['-std=gnu17', '-O2', '-fno-strict-aliasing', '-fwrapv',
                   '-march=i686', '-mno-sse', '-mfpmath=387',
                   '-I' + os.path.join(R, 'include')]
    for fn in ['00539f23.c','0053a05f.c','0053eb6f.c','00539eb0.c','00539ff0.c','0053ea80.c']:
        s = os.path.join(R, 'src', 'fn', fn)
        o = os.path.join(OUT, fn[:-2] + '_prod.o')
        r = subprocess.run([CC] + prod_cflags + ['-c', s, '-o', o], capture_output=True, text=True)
        if r.returncode:
            sys.stderr.write(r.stderr[-3000:]+'\n')
            raise SystemExit('production compile %s fail' % fn)
        print('prod', fn, 'OK')
    print('ALL STEP5 TAILS OK')

if __name__ == '__main__':
    main()
