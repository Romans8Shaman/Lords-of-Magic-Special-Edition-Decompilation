/* lomrb harness: proxy smackw32.dll that patches rebuilt functions into the running lomse.exe.
 * All 39 smackw32 exports are forwarded to smackw32_orig.dll (the untouched original DLL).
 * At DLL_PROCESS_ATTACH (before lomse.exe's entry point runs) each hooked original entry point
 * gets "jmp rel32" to a counting thunk, which jumps to the rebuilt C function.
 * Env: LOMRB_HOOKS=none -> install nothing; LOMRB_SKIP=addr,addr -> skip those;
 *      LOMRB_ONLY=addr,addr -> only those. Log: lomrb.log in the game's current directory. */
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct lom_hook { unsigned orig; unsigned char expect[5]; };
extern const struct lom_hook lom_hooks[];
extern const int lom_nhooks;
extern void *lom_thunks[];
extern volatile LONG lom_hits[];
extern void *lom_targets[];
static int nexc;
static void dump(const char *why);
/* TEST-ONLY write watch (lomrb_watch.txt: "ADDR LEN [SIG_OFF SIG_DWORD]"): once the dword at ADDR+SIG_OFF equals
 * SIG_DWORD, the page holding ADDR is made read-only; every write fault on that page is single-stepped
 * (TF) and the page re-protected. Writes that touch [ADDR, ADDR+LEN) are logged with eip, regs, stack,
 * before/after bytes to lomrb_watch.log. Other writes to the page pass through (counted). */
static unsigned w_addr, w_len, w_sigoff, w_sig, w_page, w_s0, w_s1, w_s2, w_s3, w_pre; static volatile int w_scan; static volatile LONG w_armed, w_stepping;
static volatile LONG w_faults, w_hits; static unsigned char w_before[64]; static unsigned w_hiteip, w_hitaddr;
static void w_protect(int on) { DWORD old; VirtualProtect((void *)(uintptr_t)w_page, 0x1000, on ? PAGE_READONLY : PAGE_READWRITE, &old); }
static LONG CALLBACK wveh(PEXCEPTION_POINTERS ep) {
    EXCEPTION_RECORD *er = ep->ExceptionRecord; CONTEXT *c = ep->ContextRecord;
    if (!w_armed) return EXCEPTION_CONTINUE_SEARCH;
    if (er->ExceptionCode == 0xc0000005 && er->NumberParameters >= 2 && er->ExceptionInformation[0] == 1 &&
        (er->ExceptionInformation[1] & ~0xfffu) == w_page) {
        unsigned a = (unsigned)er->ExceptionInformation[1];
        InterlockedIncrement(&w_faults);
        w_hiteip = 0;
        if (a + 16 > w_addr && a < w_addr + w_len) {   /* may touch the record (up to 16-byte stores) */
            memcpy(w_before, (void *)(uintptr_t)w_addr, w_len > 64 ? 64 : w_len); w_hiteip = (unsigned)c->Eip; w_hitaddr = a;
            if (InterlockedIncrement(&w_hits) <= 200) {
                FILE *f = fopen("lomrb_watch.log", "a");
                if (f) {
                    fprintf(f, "WRITE %08x by eip %08x (thread %lu) eax=%08lx ebx=%08lx ecx=%08lx edx=%08lx esi=%08lx edi=%08lx ebp=%08lx esp=%08lx\n",
                            a, (unsigned)c->Eip, GetCurrentThreadId(), c->Eax, c->Ebx, c->Ecx, c->Edx, c->Esi, c->Edi, c->Ebp, c->Esp);
                    unsigned *sp = (unsigned *)(uintptr_t)c->Esp; fprintf(f, "  stack:");
                    for (int i = 0; i < 32; i++) fprintf(f, " %08x", sp[i]);
                    fprintf(f, "\n  code:"); for (int i = 0; i < 12; i++) fprintf(f, " %02x", ((unsigned char *)(uintptr_t)c->Eip)[i]);
                    fprintf(f, "\n  before:"); for (unsigned i = 0; i < w_len && i < 64; i++) fprintf(f, " %02x", w_before[i]);
                    fprintf(f, "\n"); fclose(f);
                }
            }
        }
        w_protect(0); InterlockedExchange(&w_stepping, 1); c->EFlags |= 0x100;
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    if (er->ExceptionCode == EXCEPTION_SINGLE_STEP && w_stepping) {
        InterlockedExchange(&w_stepping, 0);
        if (w_hiteip && w_hits <= 200) {
            FILE *f = fopen("lomrb_watch.log", "a");
            if (f) { fprintf(f, "  after: "); for (unsigned i = 0; i < w_len && i < 64; i++) fprintf(f, " %02x", ((unsigned char *)(uintptr_t)w_addr)[i]);
                     fprintf(f, "  (next eip %08x)\n", (unsigned)c->Eip); fclose(f); }
        }
        w_protect(1);
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    return EXCEPTION_CONTINUE_SEARCH;
}
static DWORD WINAPI watcher(LPVOID x) {
    for (;;) {
        Sleep(200);
        if (!w_armed && w_scan) {   /* v8: find the record by its signature (heap address differs per run) */
            static int sn; if (++sn % 10) continue;   /* every ~2 s */
            unsigned char *q = 0; MEMORY_BASIC_INFORMATION mi;
            while ((uintptr_t)q < 0x7ff00000 && VirtualQuery(q, &mi, sizeof mi)) {
                unsigned char *nx = (unsigned char *)mi.BaseAddress + mi.RegionSize;
                if (mi.State == MEM_COMMIT && mi.Type == MEM_PRIVATE && mi.Protect == PAGE_READWRITE && (uintptr_t)mi.BaseAddress >= 0x01000000) {
                    unsigned *d = (unsigned *)mi.BaseAddress, n = (unsigned)(mi.RegionSize / 4);
                    for (unsigned i = 0; i + 3 < n; i++)
                        if (d[i] == w_s0 && d[i + 1] == w_s1 && d[i + 2] == w_s2 && d[i + 3] == (unsigned)(uintptr_t)&d[i] + w_s3) {
                            unsigned a = (unsigned)(uintptr_t)&d[i] - w_pre;
                            w_addr = a; w_page = a & ~0xfffu; if (w_addr + w_len > w_page + 0x1000) w_len = w_page + 0x1000 - w_addr;
                            FILE *f = fopen("lomrb_watch.log", "a");
                            if (f) { fprintf(f, "FOUND signature at %08x (tick %lu) -> watch %08x len %u\n", (unsigned)(uintptr_t)&d[i], GetTickCount(), w_addr, w_len); fclose(f); }
                            w_scan = 0; w_sigoff = w_pre + 8; w_sig = w_s2; goto found;
                        }
                }
                q = nx;
            }
            continue;
        found: ;
        }
        if (!w_armed) {
            MEMORY_BASIC_INFORMATION mi;
            if (VirtualQuery((void *)(uintptr_t)w_addr, &mi, sizeof mi) && mi.State == MEM_COMMIT && !(mi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) &&
                *(volatile unsigned *)(uintptr_t)(w_addr + w_sigoff) == w_sig) {
                FILE *f = fopen("lomrb_watch.log", "a");
                if (f) { fprintf(f, "ARMED %08x len %u at tick %lu, bytes:", w_addr, w_len, GetTickCount());
                         for (unsigned i = 0; i < w_len && i < 64; i++) fprintf(f, " %02x", ((unsigned char *)(uintptr_t)w_addr)[i]);
                         fprintf(f, "\n"); fclose(f); }
                InterlockedExchange(&w_armed, 1); w_protect(1);
            }
        } else {
            static LONG last; static int n;
            if (++n % 50 == 0 && w_faults != last) {   /* every ~10 s: page write count */
                FILE *f = fopen("lomrb_watch.log", "a");
                if (f) { fprintf(f, "tick %lu: page writes %ld, record hits %ld, byte1=%02x\n", GetTickCount(), w_faults, w_hits,
                                 ((unsigned char *)(uintptr_t)w_addr)[1]); fclose(f); }
                last = w_faults;
            }
        }
    }
    return 0;
}
static void watch_setup(void) {
    FILE *f = fopen("lomrb_watch.txt", "r"); if (!f) return;
    unsigned a = 0, l = 16, so = 8, sg = 0;
    char kw[16] = "";
    if (fscanf(f, "%15s", kw) == 1 && !strcmp(kw, "scan")) {   /* "scan S0 S1 S2 S3DELTA PRE LEN": record = 4 dwords S0 S1 S2 (self+S3DELTA) */
        int n = fscanf(f, "%x %x %x %x %x %u", &w_s0, &w_s1, &w_s2, &w_s3, &w_pre, &w_len); fclose(f);
        if (n != 6) return;
        w_scan = 1; w_addr = 0x7fff0000;
        AddVectoredExceptionHandler(1, wveh);
        CreateThread(NULL, 0, watcher, NULL, 0, NULL);
        return;
    }
    rewind(f);
    int n = fscanf(f, "%x %u %x %x", &a, &l, &so, &sg); fclose(f);
    if (n < 1 || !a) return;
    if (n < 4) return;   /* need ADDR LEN SIG_OFF SIG_DWORD */
    w_addr = a; w_len = l; w_sigoff = so; w_sig = sg; w_page = a & ~0xfffu;
    if (w_addr + w_len > w_page + 0x1000) w_len = w_page + 0x1000 - w_addr;
    AddVectoredExceptionHandler(1, wveh);
    CreateThread(NULL, 0, watcher, NULL, 0, NULL);
}

/* TEST-ONLY input capture (lomrb_capture.txt: one hex ADDR per line, optional "max N" line): the hook of each listed
 * function first goes through a stub that, on call numbers 1,2,4,10,40,200,1000,5000,20000 (up to N per function),
 * writes lomrb_snap/req_ADDR_K.txt (registers, FPU state, caller stack) and waits until an external dumper
 * (tools/snapd.py, reads /proc/PID/mem) deletes it. The function then runs normally. */
static int cap_max = 4;
static unsigned cap_addr[256]; static volatile LONG cap_calls[256], cap_done[256]; static int cap_n;
static volatile LONG cap_lock;
static void __cdecl cap_c(int slot, unsigned *blk) {
    LONG c = InterlockedIncrement(&cap_calls[slot]);
    if (c != 1 && c != 2 && c != 4 && c != 10 && c != 40 && c != 200 && c != 1000 && c != 5000 && c != 20000) return;
    if (cap_done[slot] >= cap_max) return;
    while (InterlockedCompareExchange(&cap_lock, 1, 0)) Sleep(1);
    LONG k = InterlockedIncrement(&cap_done[slot]);
    unsigned char fpu[108]; __asm__ volatile("fnsave %0\n\tfrstor %0" : "+m"(fpu));
    char nm[96], tmp[96]; snprintf(nm, sizeof nm, "lomrb_snap\\req_%08x_%ld.txt", cap_addr[slot], k);
    snprintf(tmp, sizeof tmp, "lomrb_snap\\tmp_%08x_%ld.txt", cap_addr[slot], k);
    FILE *f = fopen(tmp, "w");
    if (f) {
        unsigned esp = (unsigned)(uintptr_t)(blk + 9);
        fprintf(f, "addr %08x\ncall %ld\ntid %lu\n", cap_addr[slot], c, GetCurrentThreadId());
        fprintf(f, "eflags %08x\nedi %08x\nesi %08x\nebp %08x\nebx %08x\nedx %08x\necx %08x\neax %08x\nesp %08x\n",
                blk[0], blk[1], blk[2], blk[3], blk[5], blk[6], blk[7], blk[8], esp);
        fprintf(f, "fpu "); for (int i = 0; i < 108; i++) fprintf(f, "%02x", fpu[i]); fprintf(f, "\n");
        fclose(f);
        MoveFileA(tmp, nm);
        DWORD t0 = GetTickCount();
        while (GetFileAttributesA(nm) != INVALID_FILE_ATTRIBUTES && GetTickCount() - t0 < 120000) Sleep(20);
    }
    InterlockedExchange(&cap_lock, 0);
}
static void capture_setup(FILE *log) {
    FILE *f = fopen("lomrb_capture.txt", "r"); if (!f) return;
    char line[128];
    CreateDirectoryA("lomrb_snap", NULL);
    unsigned char *buf = VirtualAlloc(NULL, 0x4000, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    while (fgets(line, sizeof line, f) && cap_n < 256) {
        if (!strncmp(line, "max", 3)) { cap_max = atoi(line + 3); continue; }
        unsigned a = (unsigned)strtoul(line, NULL, 16); if (!a) continue;
        int i; for (i = 0; i < lom_nhooks; i++) if (lom_hooks[i].orig == a) break;
        unsigned char *p = (unsigned char *)(uintptr_t)a;
        if (i == lom_nhooks || p[0] != 0xE9) { if (log) fprintf(log, "capture: %08x not hooked\n", a); continue; }
        int slot = cap_n++; cap_addr[slot] = a;
        unsigned char *st = buf + slot * 48, *q = st;
        *q++ = 0x60; *q++ = 0x9C; *q++ = 0x54;                                  /* pushad; pushfd; push esp */
        *q++ = 0x68; memcpy(q, &slot, 4); q += 4;                                /* push slot */
        *q++ = 0xE8; { int rel = (int)((unsigned char *)cap_c - (q + 4)); memcpy(q, &rel, 4); q += 4; }
        *q++ = 0x83; *q++ = 0xC4; *q++ = 0x08; *q++ = 0x9D; *q++ = 0x61;         /* add esp,8; popfd; popad */
        *q++ = 0xFF; *q++ = 0x25; { void **pt = &lom_thunks[i]; memcpy(q, &pt, 4); q += 4; }  /* jmp [lom_thunks+i] */
        DWORD old; VirtualProtect(p, 5, PAGE_EXECUTE_READWRITE, &old);
        int rel = (int)(st - (p + 5)); memcpy(p + 1, &rel, 4);
        VirtualProtect(p, 5, old, &old);
        if (log) fprintf(log, "capture: %08x slot %d\n", a, slot);
    }
    fclose(f);
    FlushInstructionCache(GetCurrentProcess(), NULL, 0);
}
static LONG CALLBACK veh(PEXCEPTION_POINTERS ep) {
    if (nexc++ > 20) return EXCEPTION_CONTINUE_SEARCH;
    FILE *f = fopen("lomrb_crash.log", "a"); if (!f) return EXCEPTION_CONTINUE_SEARCH;
    unsigned eip = (unsigned)(uintptr_t)ep->ExceptionRecord->ExceptionAddress;
    unsigned best = 0, bestorig = 0;
    for (int i = 0; i < lom_nhooks; i++) {
        unsigned t = (unsigned)(uintptr_t)lom_targets[i];
        if (t <= eip && t > best) { best = t; bestorig = lom_hooks[i].orig; }
    }
    fprintf(f, "exception %08lx at %08x (nearest rebuilt entry %08x = orig %08x) esp=%08lx\n",
            ep->ExceptionRecord->ExceptionCode, eip, best, bestorig, ep->ContextRecord->Esp);
    { CONTEXT *c = ep->ContextRecord; fprintf(f, "  regs: eax=%08lx ebx=%08lx ecx=%08lx edx=%08lx esi=%08lx edi=%08lx ebp=%08lx\n",
            c->Eax, c->Ebx, c->Ecx, c->Edx, c->Esi, c->Edi, c->Ebp); }
    if (ep->ExceptionRecord->ExceptionCode == 0xc0000005) {
        CONTEXT *c = ep->ContextRecord;
        unsigned rv[7] = {c->Eax, c->Ebx, c->Ecx, c->Edx, c->Esi, c->Edi, c->Ebp};
        static const char *rn[7] = {"eax","ebx","ecx","edx","esi","edi","ebp"};
        for (int r = 0; r < 7; r++) {
            const unsigned char *m = (const unsigned char *)(uintptr_t)rv[r];
            MEMORY_BASIC_INFORMATION mi;
            if (rv[r] < 0x10000 || !VirtualQuery(m, &mi, sizeof mi) || mi.State != MEM_COMMIT ||
                (mi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) || (char *)mi.BaseAddress + mi.RegionSize < (char *)m + 0x40) continue;
            fprintf(f, "  [%s-0x20..+0x20]:", rn[r]);
            for (int i = -0x20; i < 0x20; i++) fprintf(f, "%s%02x", (i & 15) ? " " : (i ? " | " : " "), m[i]);
            fprintf(f, "\n");
        }
        if (ep->ExceptionRecord->NumberParameters >= 2)
            fprintf(f, "  access: %s %08lx\n", ep->ExceptionRecord->ExceptionInformation[0] ? "write" : "read",
                    (unsigned long)ep->ExceptionRecord->ExceptionInformation[1]);
    }
    unsigned *sp = (unsigned *)(uintptr_t)ep->ContextRecord->Esp;
    fprintf(f, "  stack:");
    for (int i = 0; i < 24; i++) fprintf(f, " %08x", sp[i]);
    fprintf(f, "\n"); fclose(f);
    if (ep->ExceptionRecord->ExceptionCode == 0xc0000005) dump("crash");
    return EXCEPTION_CONTINUE_SEARCH;
}
static char *read_list(const char *path) {
    FILE *f = fopen(path, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    char *b = malloc(n + 1); fread(b, 1, n, f); b[n] = 0; fclose(f);
    for (char *q = b; *q; q++) if (*q == '\n' || *q == '\r' || *q == ' ') *q = ',';
    return b;
}
static int installed;
/* TEST-ONLY determinism aid: lomrb_seed.txt (decimal) or LOMRB_SEED -> CRT srand (0053a100) always seeds that value. */
static unsigned lom_seed;
static void __cdecl seed_srand(unsigned s) { (void)s; unsigned *(__stdcall *ptd)(void) = (void *)0x0053efa0; ptd()[5] = lom_seed; }
static void patch_seed(FILE *log) {
    char *sf = read_list("lomrb_seed.txt"); const char *e = sf ? sf : getenv("LOMRB_SEED");
    if (!e || !*e) return;
    lom_seed = (unsigned)strtoul(e, NULL, 0);
    unsigned char *p = (unsigned char *)0x0053a100; DWORD old;
    if (!VirtualProtect(p, 5, PAGE_EXECUTE_READWRITE, &old)) return;
    int rel = (int)((unsigned char *)seed_srand - (p + 5)); p[0] = 0xE9; memcpy(p + 1, &rel, 4);
    VirtualProtect(p, 5, old, &old);
    /* also seed the main thread now (default seed would be 1) */
    unsigned *(__stdcall *ptd)(void) = (void *)0x0053efa0; (void)ptd;
    if (log) fprintf(log, "seed patch: srand -> %u\n", lom_seed);
}
static int in_list(const char *list, unsigned a) {
    char buf[16]; const char *p = list;
    snprintf(buf, sizeof buf, "%08x", a);
    while (p && *p) {
        if (!strncmp(p, buf, 8) || !strncmp(p, buf + 2, 6)) return 1;
        p = strchr(p, ','); if (p) p++;
    }
    return 0;
}
static void dump(const char *why) {
    FILE *f = fopen("lomrb_hits.log", "w"); if (!f) return;
    fprintf(f, "# %s installed=%d of %d\n", why, installed, lom_nhooks);
    for (int i = 0; i < lom_nhooks; i++) if (lom_hits[i]) fprintf(f, "%08x %ld\n", lom_hooks[i].orig, lom_hits[i]);
    fclose(f);
}
static DWORD WINAPI dumper(LPVOID x) { for (;;) { Sleep(5000); dump("periodic"); } return 0; }
static void install(void) {
    FILE *log = fopen("lomrb.log", "w");
    const char *mode = getenv("LOMRB_HOOKS"), *skip = getenv("LOMRB_SKIP"), *only = getenv("LOMRB_ONLY");
    /* list files in the game dir override env: lomrb_only.txt / lomrb_skip.txt (one hex addr per line) */
    char *of = read_list("lomrb_only.txt"), *sf = read_list("lomrb_skip.txt");
    if (of) only = of;
    if (sf) skip = sf;
    AddVectoredExceptionHandler(1, veh);
    if (log) fprintf(log, "lomrb harness: %d rebuilt functions available, mode=%s\n", lom_nhooks, mode ? mode : "all");
    patch_seed(log);
    if (mode && !strcmp(mode, "none")) { if (log) fclose(log); return; }
    for (int i = 0; i < lom_nhooks; i++) {
        unsigned char *p = (unsigned char *)(uintptr_t)lom_hooks[i].orig;
        if (skip && in_list(skip, lom_hooks[i].orig)) continue;
        if (only && !in_list(only, lom_hooks[i].orig)) continue;
        if (memcmp(p, lom_hooks[i].expect, 5)) { if (log) fprintf(log, "MISMATCH %08x - not hooked\n", lom_hooks[i].orig); continue; }
        DWORD old;
        if (!VirtualProtect(p, 5, PAGE_EXECUTE_READWRITE, &old)) continue;
        if (lom_seed && lom_hooks[i].orig == 0x0053a100) continue;
        int rel = (int)((unsigned char *)lom_thunks[i] - (p + 5));
        p[0] = 0xE9; memcpy(p + 1, &rel, 4);
        VirtualProtect(p, 5, old, &old);
        installed++;
    }
    FlushInstructionCache(GetCurrentProcess(), NULL, 0);
    capture_setup(log);
    if (log) { fprintf(log, "installed %d hooks\n", installed); fclose(log); }
}
BOOL WINAPI DllMain(HINSTANCE h, DWORD reason, LPVOID r) {
    if (reason == DLL_PROCESS_ATTACH) { DisableThreadLibraryCalls(h); install(); watch_setup(); CreateThread(NULL, 0, dumper, NULL, 0, NULL); }
    if (reason == DLL_PROCESS_DETACH) dump("exit");
    return TRUE;
}
