/* Hand C for lomse.exe entry @ 0x0053c2c0 (424 bytes, no-arg, ret).
 * g255, shim-plus-C. The original is the MSVC WinMainCRTStartup-style
 * entry: an ebp / _except_handler3 frame (next, handler 0053b9f8, scope
 * 0x54eed8, try=-1, add esp,-0x58, saved ebx/esi/edi, saved esp at
 * [ebp-0x18]). It calls IAT GetVersion and stores the version fields at
 * 0x5d52c0 / 0x5d52bc / 0x5d52b8 / 0x5d52b4, then already-fn 00542410 and
 * 0053ef20 (each 0053c4a0(0x1c) / 0053c4a0(0x10) if they return 0). try=0,
 * already-fn 00540c20 / 00540910, IAT GetCommandLineA into 0x5d6b38,
 * already-fn 00543560 into 0x5d5238, and already-fn 0053f220(-1) if either
 * is 0. Then already-fn 005432b0 / 005431c0 / 0053f1f0, parse the command
 * line (quoted path, already-fn 00543160 as a lead-byte test, skip
 * whitespace), IAT GetStartupInfoA, IAT GetModuleHandleA(0) leaving the
 * WinMain args on the stack, stdcall already-fn 004ff8b0 (g221) as
 * WinMain, and already-fn 0053f220(result). Scope-table mid-entries
 * 0053c41d (filter, already-fn 005409d0) and 0053c432 (catch, already-fn
 * 0053f240, falls through the original epilogue) stay original bytes
 * under a 5-byte entry hook; standalone should keep them as bodyrefs.
 * A naked shim builds the exact fs:0 / scope-table frame and the ret
 * epilogue (try=-1, unlink).
 */
#include "lom.h"

#define LOM_SELF_0053c2c0 1

__attribute__((used)) static const unsigned g255_mid_filter = 0x0053c41d;
__attribute__((used)) static const unsigned g255_mid_catch  = 0x0053c432;

#ifndef G255_NATIVE_TEST
#define G255_GETVERSION      (*(unsigned (__stdcall *)(void)) *(unsigned *)0x0054d1b4)
#define G255_GETCMDLINE      (*(char * (__stdcall *)(void)) *(unsigned *)0x0054d1b8)
#define G255_GETSTARTUPINFO  (*(void (__stdcall *)(void *)) *(unsigned *)0x0054d1bc)
#define G255_GETMODULEHANDLE (*(unsigned (__stdcall *)(unsigned)) *(unsigned *)0x0054d098)
#define G255_WINMAJOR        (*(unsigned *)0x005d52bc)
#define G255_WINMINOR        (*(unsigned *)0x005d52c0)
#define G255_WINVER          (*(unsigned *)0x005d52b8)
#define G255_WINBUILD        (*(unsigned *)0x005d52b4)
#define G255_CMDLINE         (*(char **)0x005d6b38)
#define G255_ENV             (*(unsigned *)0x005d5238)
__attribute__((used)) void *g255_i0 = (void *)0x00542410;
__attribute__((used)) void *g255_fatal = (void *)0x0053c4a0;
__attribute__((used)) void *g255_i2 = (void *)0x0053ef20;
__attribute__((used)) void *g255_i4 = (void *)0x00540c20;
__attribute__((used)) void *g255_i5 = (void *)0x00540910;
__attribute__((used)) void *g255_i6 = (void *)0x00543560;
__attribute__((used)) void *g255_exit = (void *)0x0053f220;
__attribute__((used)) void *g255_i8 = (void *)0x005432b0;
__attribute__((used)) void *g255_i9 = (void *)0x005431c0;
__attribute__((used)) void *g255_i10 = (void *)0x0053f1f0;
__attribute__((used)) void *g255_lead = (void *)0x00543160;
__attribute__((used)) void *g255_winmain = (void *)0x004ff8b0;
#else
unsigned stub_00542410(void);
void stub_0053c4a0(unsigned);
unsigned stub_0053ef20(void);
void stub_00540c20(void);
void stub_00540910(void);
unsigned stub_00543560(void);
unsigned stub_0053f220(unsigned);
void stub_005432b0(void);
void stub_005431c0(void);
void stub_0053f1f0(void);
unsigned stub_00543160(unsigned);
unsigned __stdcall stub_004ff8b0(unsigned, unsigned, unsigned, unsigned);
unsigned __stdcall stub_GetVersion(void);
char *__stdcall stub_GetCommandLineA(void);
void __stdcall stub_GetStartupInfoA(void *);
unsigned __stdcall stub_GetModuleHandleA(unsigned);
extern unsigned g255_winmajor, g255_winminor, g255_winver, g255_winbuild, g255_env;
extern char *g255_cmdline;
#define G255_GETVERSION      stub_GetVersion
#define G255_GETCMDLINE      stub_GetCommandLineA
#define G255_GETSTARTUPINFO  stub_GetStartupInfoA
#define G255_GETMODULEHANDLE stub_GetModuleHandleA
#define G255_WINMAJOR        g255_winmajor
#define G255_WINMINOR        g255_winminor
#define G255_WINVER          g255_winver
#define G255_WINBUILD        g255_winbuild
#define G255_CMDLINE         g255_cmdline
#define G255_ENV             g255_env
#define g255_i0      stub_00542410
#define g255_fatal   stub_0053c4a0
#define g255_i2      stub_0053ef20
#define g255_i4      stub_00540c20
#define g255_i5      stub_00540910
#define g255_i6      stub_00543560
#define g255_exit    stub_0053f220
#define g255_i8      stub_005432b0
#define g255_i9      stub_005431c0
#define g255_i10     stub_0053f1f0
#define g255_lead    stub_00543160
#define g255_winmain stub_004ff8b0
#endif

__attribute__((noinline)) static unsigned g255_call0(void *fn)
{
  unsigned r;
  void *volatile f = fn;
  __asm__ volatile (
    "calll *%[fn]\n"
    : "=&a"(r)
    : [fn]"r"(f)
    : "ecx", "edx", "memory"
  );
  return r;
}

__attribute__((noinline)) static unsigned g255_call_cdecl1(void *fn, unsigned a)
{
  unsigned r;
  void *volatile f = fn;
  unsigned volatile av = a;
  __asm__ volatile (
    "pushl %[a]\n"
    "calll *%[fn]\n"
    "addl $4, %%esp\n"
    : "=&a"(r)
    : [fn]"r"(f), [a]"r"(av)
    : "ecx", "edx", "memory"
  );
  return r;
}


__attribute__((noinline)) static unsigned g255_call_winmain(void *fn, unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned r;
  void *slots[5];
  slots[0] = (void *)(uintptr_t)a0;
  slots[1] = (void *)(uintptr_t)a1;
  slots[2] = (void *)(uintptr_t)a2;
  slots[3] = (void *)(uintptr_t)a3;
  slots[4] = fn;
  __asm__ volatile (
    "movl %[slots], %%ebx\n"
    "pushl 12(%%ebx)\n"
    "pushl 8(%%ebx)\n"
    "pushl 4(%%ebx)\n"
    "pushl 0(%%ebx)\n"
    "calll *16(%%ebx)\n"
    : "=&a"(r)
    : [slots]"r"(slots)
    : "ebx", "ecx", "edx", "memory"
  );
  return r;
}


unsigned lom_body_0053c2c0(int *trylevel)
    __asm__("lom_body_0053c2c0");

unsigned lom_body_0053c2c0(int *trylevel)
{
  unsigned ver, major, minor, show, hmod, retv, a0, a1, a2, a3;
  char *p;
  unsigned char c;
  unsigned si[17];
  void *fn;

  ver = G255_GETVERSION();
  minor = (ver >> 8) & 0xff;
  major = ver & 0xff;
  G255_WINMINOR = minor;
  G255_WINMAJOR = major;
  G255_WINVER = (major << 8) + minor;
  G255_WINBUILD = ver >> 16;

  fn = (void *)g255_i0;
  if (g255_call0(fn) == 0) {
    fn = (void *)g255_fatal;
    g255_call_cdecl1(fn, 0x1c);
  }
  fn = (void *)g255_i2;
  if (g255_call0(fn) == 0) {
    fn = (void *)g255_fatal;
    g255_call_cdecl1(fn, 0x10);
  }

  *trylevel = 0;
  fn = (void *)g255_i4;
  g255_call0(fn);
  fn = (void *)g255_i5;
  g255_call0(fn);
  G255_CMDLINE = G255_GETCMDLINE();
  fn = (void *)g255_i6;
  G255_ENV = g255_call0(fn);
  if (G255_ENV == 0 || G255_CMDLINE == 0) {
    fn = (void *)g255_exit;
    g255_call_cdecl1(fn, (unsigned)-1);
  }

  fn = (void *)g255_i8;
  g255_call0(fn);
  fn = (void *)g255_i9;
  g255_call0(fn);
  fn = (void *)g255_i10;
  g255_call0(fn);

  p = G255_CMDLINE;
  if ((unsigned char)*p == 0x22) {
    for (;;) {
      p++;
      c = (unsigned char)*p;
      if (c == 0x22 || c == 0)
        break;
      fn = (void *)g255_lead;
      if (g255_call_cdecl1(fn, (unsigned)c) != 0)
        p++;
    }
    if ((unsigned char)*p == 0x22)
      p++;
  } else {
    while ((unsigned char)*p > 0x20)
      p++;
  }
  for (;;) {
    c = (unsigned char)*p;
    if (c == 0 || c > 0x20)
      break;
    p++;
  }

  si[0x2c / 4] = 0;
  G255_GETSTARTUPINFO((void *)si);
  if (si[0x2c / 4] & 1)
    show = si[0x30 / 4] & 0xffff;
  else
    show = 0xa;

  hmod = G255_GETMODULEHANDLE(0);
  a0 = hmod;
  a1 = 0;
  a2 = (unsigned)(uintptr_t)p;
  a3 = show;
  fn = (void *)g255_winmain;
  retv = g255_call_winmain(fn, a0, a1, a2, a3);
  fn = (void *)g255_exit;
  /* The original leaves eax as whatever 0053f220 returns. */
  return g255_call_cdecl1(fn, retv);
}

__attribute__((naked)) void rb_0053c2c0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $0x54eed8\n"
    "  pushl $0x53b9f8\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0x58, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  call lom_body_0053c2c0\n"
    "  addl $4, %esp\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}

extern void rb_0053f240(void);
extern void rb_005409d0(void);

__attribute__((naked)) void rb_0053c41d(void)
{
  __asm__(
    "  movl -0x14(%ebp), %eax\n"
    "  movl (%eax), %ecx\n"
    "  movl (%ecx), %ecx\n"
    "  movl %ecx, -0x68(%ebp)\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  calll _rb_005409d0\n"
    "  addl $8, %esp\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053c432(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  movl -0x68(%ebp), %edx\n"
    "  pushl %edx\n"
    "  calll _rb_0053f240\n"
    "  addl $4, %esp\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl\n"
  );
}
