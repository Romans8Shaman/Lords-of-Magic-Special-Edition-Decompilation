#!/usr/bin/env python3
"""test_eh_funclets.py : native parent-EBP test of the 618 template-generated EH funclets.

Builds a Wine i686 exe (official llvm-mingw) that, for each funclet, plants a fake parent frame,
points the production _lom_fl_* slot at a thiscall / cdecl / stdcall stub, runs the rebuilt
rb_* and a copy of the original bytes (rel32 patched to the same stub), and checks both match
the expected this/args. 4000 trials on one representative of each of the six patterns; 50
trials on every funclet. Mutants of the six representatives must all be killed.

Usage: python3 tools/test_eh_funclets.py [out-dir]
"""
import os, sys, re, struct, subprocess, shutil, random, textwrap
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, cc
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
R = lomdb.ROOT
OUT = sys.argv[1] if len(sys.argv) > 1 else os.path.join(R, 'build', 'eh_funclets')
CC = cc.CC
CFLAGS = ['-std=gnu17', '-O2', '-fno-strict-aliasing', '-fwrapv',
          '-march=i686', '-mno-sse', '-mfpmath=387',
          '-I' + os.path.join(R, 'include')]
BIN = '/opt/llvm-mingw/bin/'
md = Cs(CS_ARCH_X86, CS_MODE_32)
PAT = {
    'thiscall_dtor_jmp_lea': 1,
    'thiscall_dtor_jmp_ecx': 2,
    'thiscall_dtor_jmp_ecx_add': 3,
    'cdecl_dtor_local': 4,
    'ehvec_dtor_subobject': 5,
    'ehvec_dtor_lea_local': 6,
}
# one representative per pattern (first classified earlier)
REPS = {
    1: 0x00548ff0, 2: 0x005492b0, 3: 0x005492d0,
    4: 0x00548fd0, 5: 0x005492b8, 6: 0x00549490,
}

def parse_imm(s):
    return int(s, 0) if s else 0

def load_params():
    rows = []
    for l in open(os.path.join(OUT, 'params.tsv')):
        if not l.strip() or l.startswith('addr'): continue
        a, pat, sz, ebp, add, dtor, elem, cnt, szarg, vec = l.strip().split('\t')
        rows.append(dict(addr=int(a, 16), pat=pat, pid=PAT[pat], size=int(sz),
                         ebp_off=parse_imm(ebp), add_off=parse_imm(add),
                         dtor=parse_imm(dtor), elem_dtor=parse_imm(elem),
                         count=parse_imm(cnt), size_arg=parse_imm(szarg),
                         vec_dtor=parse_imm(vec)))
    return rows

def rel32_off(addr, size, target):
    """offset of the E8/E9 whose rel32 points at target, or -1."""
    if not target:
        return -1
    code = lomdb.read_va(addr, size)
    for i in md.disasm(code, addr):
        if i.mnemonic in ('jmp', 'call') and i.op_str.startswith('0x') and int(i.op_str, 16) == target:
            # rel32 starts 1 byte into a 5-byte insn
            if i.size == 5 and i.bytes[0] in (0xe8, 0xe9):
                return i.address - addr
    return -1

def write_test_c(path, rows, only=None, label='full'):
    xs = [r for r in rows if only is None or r['addr'] in only]
    parts = []
    parts.append(r'''#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

volatile uint32_t g_seen, g_ecx, g_arg0, g_arg1, g_arg2, g_arg3;
volatile uint32_t g_run_fn, g_run_frame;

__attribute__((thiscall, noinline)) void stub_thiscall(void *self) {
    g_ecx = (uint32_t)self;
    g_seen = 1;
}
__attribute__((noinline)) void stub_cdecl(void *p) {
    g_arg0 = (uint32_t)p;
    g_seen = 1;
}
__attribute__((stdcall, noinline)) void stub_ehvec(void *p, uint32_t size, uint32_t count, uint32_t dtor) {
    g_arg0 = (uint32_t)p;
    g_arg1 = size;
    g_arg2 = count;
    g_arg3 = dtor;
    g_seen = 1;
}

__attribute__((noinline)) void invoke(void *fn, void *frame) {
    __asm__ volatile (
        "pushl %%ebx\n"
        "pushl %%esi\n"
        "pushl %%edi\n"
        "pushl %%ebp\n"
        "movl %[fn], %%eax\n"
        "movl %[fr], %%ecx\n"
        "movl %%ecx, %%ebp\n"
        "call *%%eax\n"
        "popl %%ebp\n"
        "popl %%edi\n"
        "popl %%esi\n"
        "popl %%ebx\n"
        :
        : [fn] "r"(fn), [fr] "r"(frame)
        : "eax", "ecx", "edx", "memory"
    );
}

typedef struct {
    uint32_t addr;
    int pat;
    int32_t ebp_off;
    uint32_t add_off;
    uint32_t elem_dtor, count, size_arg;
    void (*rb)(void);
    uint32_t *slot;
    const uint8_t *orig;
    uint16_t orig_len;
    int16_t patch_off;
} Case;

static void clear_rec(void) { g_seen = g_ecx = g_arg0 = g_arg1 = g_arg2 = g_arg3 = 0; }

static int check_expect(const Case *c, uint32_t ebp, uint32_t obj) {
    uint32_t exp = 0;
    if (c->pat == 1) exp = ebp + (uint32_t)c->ebp_off;
    else if (c->pat == 2) exp = obj;
    else if (c->pat == 3) exp = obj + c->add_off;
    else if (c->pat == 4) exp = obj;
    else if (c->pat == 5) exp = obj + c->add_off;
    else if (c->pat == 6) exp = ebp + (uint32_t)c->ebp_off;
    if (!g_seen) return 1;
    if (c->pat <= 3) {
        if (g_ecx != exp) return 2;
    } else if (c->pat == 4) {
        if (g_arg0 != exp) return 3;
    } else {
        if (g_arg0 != exp || g_arg1 != c->size_arg || g_arg2 != c->count || g_arg3 != c->elem_dtor) return 4;
    }
    return 0;
}
''')
    # externs
    for r in xs:
        a = r['addr']
        parts.append('extern void rb_%08x(void);\n' % a)
        parts.append('extern uint32_t lom_fl_%08x_0 __asm__("_lom_fl_%08x_0");\n' % (a, a))
    # orig bytes
    for r in xs:
        a, n = r['addr'], r['size']
        b = lomdb.read_va(a, n)
        hx = ', '.join('0x%02x' % x for x in b)
        parts.append('static const uint8_t orig_%08x[%d] = {%s};\n' % (a, n, hx))
    parts.append('static Case cases[] = {\n')
    for r in xs:
        a = r['addr']
        tgt = r['dtor'] if r['pid'] <= 4 else r['vec_dtor']
        poff = rel32_off(a, r['size'], tgt)
        parts.append('  {0x%08x, %d, %d, 0x%xu, 0x%xu, 0x%xu, 0x%xu, rb_%08x, &lom_fl_%08x_0, orig_%08x, %d, %d},\n' % (
            a, r['pid'], r['ebp_off'], r['add_off'] & 0xffffffff, r['elem_dtor'] & 0xffffffff,
            r['count'] & 0xffffffff, r['size_arg'] & 0xffffffff, a, a, a, r['size'], poff))
    parts.append('};\n')
    parts.append('#define NCASES (sizeof(cases)/sizeof(cases[0]))\n')
    parts.append(r'''
static uint8_t *orig_exec;
static size_t orig_exec_sz;

static void *prep_orig(const Case *c, void *stub) {
    uint8_t *p = orig_exec;
    memcpy(p, c->orig, c->orig_len);
    if (c->patch_off < 0) return NULL;
    uint32_t rel = (uint32_t)(uintptr_t)stub - ((uint32_t)(uintptr_t)(p + c->patch_off + 5));
    p[c->patch_off + 1] = (uint8_t)rel;
    p[c->patch_off + 2] = (uint8_t)(rel >> 8);
    p[c->patch_off + 3] = (uint8_t)(rel >> 16);
    p[c->patch_off + 4] = (uint8_t)(rel >> 24);
    FlushInstructionCache(GetCurrentProcess(), p, c->orig_len);
    return p;
}

static void *stub_for(int pat) {
    if (pat <= 3) return (void *)stub_thiscall;
    if (pat == 4) return (void *)stub_cdecl;
    return (void *)stub_ehvec;
}

/* 128 KiB frame, ebp 96 KiB in, covers ebp_off in [-65568, +32]. */
#define FRAME_SZ 131072
#define EBP_OFF   98304

static uint32_t run_one(const Case *c, uint32_t seed, int which) {
    static uint8_t frame[FRAME_SZ + 32];
    uint32_t ebp = (uint32_t)(uintptr_t)(frame + EBP_OFF);
    uint32_t obj = 0x40000000u + (seed * 0x9e3779b9u) + c->addr;
    /* place obj at [ebp+ebp_off] when the pattern loads a pointer from the frame */
    int32_t off = c->ebp_off;
    if ((uint32_t)(EBP_OFF + off) >= FRAME_SZ - 4) return 90;
    memcpy(frame + EBP_OFF + off, &obj, 4);
    void *stub = stub_for(c->pat);
    clear_rec();
    if (which == 0) {
        *c->slot = (uint32_t)(uintptr_t)stub;
        invoke((void *)c->rb, (void *)(uintptr_t)ebp);
    } else {
        void *fn = prep_orig(c, stub);
        if (!fn) return 91;
        invoke(fn, (void *)(uintptr_t)ebp);
    }
    return (uint32_t)check_expect(c, ebp, obj);
}

int main(int argc, char **argv) {
    int trials = 50, reps_trials = 4000;
    if (argc > 1) trials = atoi(argv[1]);
    if (argc > 2) reps_trials = atoi(argv[2]);
    orig_exec_sz = 256;
    orig_exec = (uint8_t *)VirtualAlloc(NULL, orig_exec_sz, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (!orig_exec) { printf("VirtualAlloc failed\n"); return 2; }
    unsigned fail = 0, ran = 0;
    /* representatives: 4000 trials each, orig and rebuilt */
    static const uint32_t reps[] = { 0x00548ff0, 0x005492b0, 0x005492d0, 0x00548fd0, 0x005492b8, 0x00549490 };
    for (unsigned ri = 0; ri < 6; ri++) {
        const Case *c = NULL;
        for (size_t i = 0; i < NCASES; i++) if (cases[i].addr == reps[ri]) { c = &cases[i]; break; }
        if (!c) { printf("skip missing rep %08x\n", reps[ri]); continue; }
        if (c->patch_off < 0) { printf("no rel32 %08x\n", c->addr); return 4; }
        for (int t = 0; t < reps_trials; t++) {
            uint32_t seed = 0xA5000000u + (uint32_t)t * 17u + c->addr;
            uint32_t e0 = run_one(c, seed, 0);
            uint32_t e1 = run_one(c, seed, 1);
            ran += 2;
            if (e0 || e1) {
                printf("FAIL rep %08x trial %d rebuilt=%u orig=%u\n", c->addr, t, e0, e1);
                fail++;
                if (fail > 8) return 1;
            }
        }
        printf("PASS rep %08x x %d (pat %d)\n", c->addr, reps_trials, c->pat);
        fflush(stdout);
    }
    for (size_t i = 0; i < NCASES; i++) {
        const Case *c = &cases[i];
        if (c->patch_off < 0) { printf("no rel32 %08x\n", c->addr); fail++; continue; }
        for (int t = 0; t < trials; t++) {
            uint32_t seed = 0xB6000000u + (uint32_t)t * 31u + c->addr;
            uint32_t e0 = run_one(c, seed, 0);
            uint32_t e1 = run_one(c, seed, 1);
            ran += 2;
            if (e0 || e1) {
                printf("FAIL %08x trial %d rebuilt=%u orig=%u\n", c->addr, t, e0, e1);
                fail++;
                if (fail > 20) { printf("%u failures, abort\n", fail); return 1; }
            }
        }
    }
    printf("DONE ran=%u fail=%u cases=%u trials=%d\n", ran, fail, (unsigned)NCASES, trials);
    return fail ? 1 : 0;
}
''')
    open(path, 'w').write(''.join(parts))

def compile_exe(src, objs, exe):
    cmd = [CC] + CFLAGS + ['-o', exe, src] + objs + [
        '-Wl,--image-base=0x00800000', '-Wl,--disable-dynamicbase']
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode:
        sys.stderr.write(r.stderr[-4000:] + '\n')
        raise SystemExit('link failed')

def run_wine(exe, args):
    env = os.environ.copy()
    env['WINEPREFIX'] = os.environ.get('WINEPREFIX', '/tmp/ehwp')
    env['WINEDEBUG'] = '-all'
    os.makedirs(env['WINEPREFIX'], exist_ok=True)
    cmd = ['wine', exe] + list(args)
    r = subprocess.run(cmd, capture_output=True, text=True, env=env, timeout=180)
    return r.returncode, r.stdout, r.stderr

def mutate_rep_source(addr, kind, dest):
    """Write a mutated copy of src/asm/<addr>.c that should fail the native test."""
    src = open(os.path.join(R, 'src', 'asm', '%08x.c' % addr)).read()
    # flip a nibble in the ebp offset or addend
    def bump(m):
        raw = m.group(0)
        # only first ebp-like off after the macro name
        return raw
    t = src
    if '-0x' in t:
        t = t.replace('-0x', '-0x1', 1) if '-0x1' not in t.split(',')[0] else t.replace('-0x', '-0x2', 1)
    elif ', 0x' in t:
        t = t.replace(', 0x', ', 0x1', 1)
    else:
        t = t.replace(', 4,', ', 5,', 1)
    if t == src:
        t = src.replace('0x', '0x1', 1)
    open(dest, 'w').write(t)
    return t != src

def main():
    os.makedirs(OUT, exist_ok=True)
    rows = load_params()
    if len(rows) != 618:
        raise SystemExit('expected 618 params, got %d' % len(rows))
    src = os.path.join(OUT, 'test_eh_funclets.c')
    write_test_c(src, rows)
    objs = [os.path.join(R, 'build', 'obj', 'asm', '%08x.o' % r['addr']) for r in rows]
    exe = os.path.join(OUT, 'test_eh_funclets.exe')
    print('linking', exe, 'cases', len(rows))
    compile_exe(src, objs, exe)
    print('running wine (4000x6 + 50x618) ...')
    rc, out, err = run_wine(exe, [])
    open(os.path.join(OUT, 'test_eh_funclets.out'), 'w').write(out + ('\n--- stderr ---\n' + err if err else ''))
    print(out[-2000:] if len(out) > 2000 else out)
    if rc != 0:
        print('NATIVE FAIL rc', rc)
        if err: print(err[-1500:])
        raise SystemExit(1)
    print('NATIVE PASS')

    # mutants of the 6 representatives: compile mutated fn + same test restricted to that addr, expect fail
    print('mutants...')
    killed = 0
    for pat, addr in REPS.items():
        row = next(r for r in rows if r['addr'] == addr)
        msrc = os.path.join(OUT, 'mut_%08x.c' % addr)
        if not mutate_rep_source(addr, row['pat'], msrc):
            print('  could not mutate %08x' % addr); continue
        mobj = os.path.join(OUT, 'mut_%08x.o' % addr)
        r = subprocess.run([CC] + cc.CFLAGS + ['-c', msrc, '-o', mobj], capture_output=True, text=True)
        if r.returncode:
            # compile-error mutant still counts as killed
            print('  %08x mutant compile-fail (killed)' % addr)
            killed += 1
            continue
        # tiny test exe: reuse full test? easier: one-off main
        tsrc = os.path.join(OUT, 'muttest_%08x.c' % addr)
        write_test_c(tsrc, rows, only={addr}, label='mut')
        # replace object for this addr
        mobjs = [mobj if r['addr'] == addr else os.path.join(R, 'build', 'obj', 'asm', '%08x.o' % r['addr'])
                 for r in rows if r['addr'] == addr]
        texe = os.path.join(OUT, 'muttest_%08x.exe' % addr)
        compile_exe(tsrc, mobjs, texe)
        rc, out, err = run_wine(texe, ['8', '8'])  # short
        ok = (rc != 0) or ('FAIL' in out)
        print('  %08x mutant %s rc=%s' % (addr, 'KILLED' if ok else 'SURVIVED', rc))
        if ok: killed += 1
        else:
            print(out[-800:])
    print('mutants killed %d / %d' % (killed, len(REPS)))
    if killed != len(REPS):
        raise SystemExit('mutant survived')
    print('ALL NATIVE + MUTANTS PASS')

if __name__ == '__main__':
    main()
