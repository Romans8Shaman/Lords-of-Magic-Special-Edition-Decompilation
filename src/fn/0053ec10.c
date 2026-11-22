/* Hand C for lomse.exe FUN_0053ec10 @ 0x0053ec10 (513 bytes, __cdecl).
 * g256, shim-plus-C. The original builds an ebp / _except_handler3 frame
 * (next, handler 0053b9f8, scope 0x54efc8, try=-1, add esp,-0xc, saved
 * ebx/esi/edi, saved esp at [ebp-0x18]). If param_3[1] is 0, or byte
 * [param_3[1]+8] is 0, or param_3[2] is 0, it just unlinks and returns.
 * Otherwise esi = param_2 + param_3[2] + 0xc, try=0, and it copies or
 * constructs an object at esi from param_1 / param_4 using already-fn
 * 00544ae0 / 00544b00 / 0053eea0 / 00544310 / 00544b20, or stay-asmfn
 * trampoline 005399b0, depending on flags in *param_3 and *param_4. A
 * failing helper cdecl-calls already-fn 0053f160. Scope-table mid-entries
 * 0053edeb (filter: return 1) and 0053edf1 (catch: restore esp from
 * [ebp-0x18], already-fn 0053f0d0, fall through the epilogue) stay
 * original bytes under a 5-byte entry hook; standalone should keep them
 * as bodyrefs. A naked shim builds the exact fs:0 / scope-table frame
 * and the cdecl epilogue (try=-1, unlink).
 */
#include "lom.h"

#define LOM_SELF_0053ec10 1

__attribute__((used)) static const unsigned g256_mid_filter = 0x0053edeb;
__attribute__((used)) static const unsigned g256_mid_catch  = 0x0053edf1;

#ifndef G256_NATIVE_TEST
__attribute__((used)) void *g256_ae0 = (void *)0x00544ae0;
__attribute__((used)) void *g256_b00 = (void *)0x00544b00;
__attribute__((used)) void *g256_eea0 = (void *)0x0053eea0;
__attribute__((used)) void *g256_c310 = (void *)0x00544310;
__attribute__((used)) void *g256_b20 = (void *)0x00544b20;
__attribute__((used)) void *g256_call = (void *)0x005399b0;
__attribute__((used)) void *g256_unexp = (void *)0x0053f160;
#else
unsigned stub_00544ae0(unsigned, unsigned);
unsigned stub_00544b00(unsigned, unsigned);
unsigned stub_0053eea0(unsigned, unsigned);
unsigned stub_00544310(unsigned, unsigned, unsigned);
unsigned stub_00544b20(unsigned);
void stub_005399b0(void);
unsigned stub_0053f160(void);
#define g256_ae0   stub_00544ae0
#define g256_b00   stub_00544b00
#define g256_eea0  stub_0053eea0
#define g256_c310  stub_00544310
#define g256_b20   stub_00544b20
#define g256_call  stub_005399b0
#define g256_unexp stub_0053f160
#endif

__attribute__((noinline)) static unsigned g256_cdecl2(void *fn, unsigned a, unsigned b)
{
  unsigned r;
  unsigned slots[3];
  slots[0]=a; slots[1]=b; slots[2]=(unsigned)(uintptr_t)fn;
  __asm__ volatile (
    "movl %[s], %%ebx\n"
    "pushl 4(%%ebx)\n"
    "pushl 0(%%ebx)\n"
    "calll *8(%%ebx)\n"
    "addl $8, %%esp\n"
    : "=&a"(r)
    : [s]"r"(slots)
    : "ebx", "ecx", "edx", "memory"
  );
  return r;
}

__attribute__((noinline)) static unsigned g256_cdecl3(void *fn, unsigned a, unsigned b, unsigned c)
{
  unsigned r;
  unsigned slots[4];
  slots[0]=a; slots[1]=b; slots[2]=c; slots[3]=(unsigned)(uintptr_t)fn;
  __asm__ volatile (
    "movl %[s], %%ebx\n"
    "pushl 8(%%ebx)\n"
    "pushl 4(%%ebx)\n"
    "pushl 0(%%ebx)\n"
    "calll *12(%%ebx)\n"
    "addl $12, %%esp\n"
    : "=&a"(r)
    : [s]"r"(slots)
    : "ebx", "ecx", "edx", "memory"
  );
  return r;
}

__attribute__((noinline)) static unsigned g256_cdecl1(void *fn, unsigned a)
{
  unsigned r;
  unsigned slots[2];
  slots[0]=a; slots[1]=(unsigned)(uintptr_t)fn;
  __asm__ volatile (
    "movl %[s], %%ebx\n"
    "pushl 0(%%ebx)\n"
    "calll *4(%%ebx)\n"
    "addl $4, %%esp\n"
    : "=&a"(r)
    : [s]"r"(slots)
    : "ebx", "ecx", "edx", "memory"
  );
  return r;
}

__attribute__((noinline)) static unsigned g256_cdecl0(void *fn)
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

/* stay-asmfn 005399b0 trampoline: ecx=esi, call tgt(arg), returns to us. */
__attribute__((noinline)) static unsigned g256_tramp(unsigned esi, unsigned tgt, unsigned arg, int extra_one)
{
  unsigned slots[5];
  slots[0]=esi; slots[1]=tgt; slots[2]=arg; slots[3]=(unsigned)(uintptr_t)(void *)g256_call;
  slots[4]=extra_one ? 1 : 0;
  unsigned r;
  if (extra_one) {
    __asm__ volatile (
      "movl %[s], %%ebx\n"
      "pushl $1\n"
      "pushl 8(%%ebx)\n"
      "pushl 4(%%ebx)\n"
      "pushl 0(%%ebx)\n"
      "calll *12(%%ebx)\n"
      : "=&a"(r)
      : [s]"r"(slots)
      : "ebx", "ecx", "edx", "memory"
    );
  } else {
    __asm__ volatile (
      "movl %[s], %%ebx\n"
      "pushl 8(%%ebx)\n"
      "pushl 4(%%ebx)\n"
      "pushl 0(%%ebx)\n"
      "calll *12(%%ebx)\n"
      : "=&a"(r)
      : [s]"r"(slots)
      : "ebx", "ecx", "edx", "memory"
    );
  }
  return r;
}

unsigned lom_body_0053ec10(unsigned p1, unsigned p2, unsigned p3, unsigned p4, int *trylevel)
    __asm__("lom_body_0053ec10");

unsigned lom_body_0053ec10(unsigned p1, unsigned p2, unsigned p3, unsigned p4, int *trylevel)
{
  unsigned *px = (unsigned *)(uintptr_t)p3;
  unsigned *py;
  unsigned eax, typ, dest, srcobj, r;
  unsigned char *pb;

  eax = px[1];
  if (eax == 0)
    return 0;
  pb = (unsigned char *)(uintptr_t)eax;
  if (pb[8] == 0)
    return eax;
  eax = px[2];
  if (eax == 0)
    return 0;

  dest = p2 + eax + 0xc;
  *trylevel = 0;

  if ((*(unsigned char *)(uintptr_t)p3 & 8) != 0) {
    typ = p1;
    if (g256_cdecl2((void *)g256_ae0, *(unsigned *)(typ + 0x18), 1) == 0)
      goto fail;
    if (g256_cdecl2((void *)g256_b00, dest, 1) == 0)
      goto fail;
    *(unsigned *)(uintptr_t)dest = *(unsigned *)(typ + 0x18);
    r = g256_cdecl2((void *)g256_eea0, *(unsigned *)(uintptr_t)dest, p4 + 8);
    *(unsigned *)(uintptr_t)dest = r;
    return r;
  }

  py = (unsigned *)(uintptr_t)p4;
  if ((*(unsigned char *)(uintptr_t)p4 & 1) != 0) {
    typ = p1;
    if (g256_cdecl2((void *)g256_ae0, *(unsigned *)(typ + 0x18), 1) == 0)
      goto fail;
    if (g256_cdecl2((void *)g256_b00, dest, 1) == 0)
      goto fail;
    r = g256_cdecl3((void *)g256_c310, dest, *(unsigned *)(typ + 0x18), py[0x14 / 4]);
    if (py[0x14 / 4] != 4)
      return r;
    r = *(unsigned *)(uintptr_t)dest;
    if (r == 0)
      return 0;
    r = g256_cdecl2((void *)g256_eea0, r, p4 + 8);
    *(unsigned *)(uintptr_t)dest = r;
    return r;
  }

  srcobj = py[0x18 / 4];
  typ = p1;
  if (srcobj == 0) {
    if (g256_cdecl2((void *)g256_ae0, *(unsigned *)(typ + 0x18), 1) == 0)
      goto fail;
    if (g256_cdecl2((void *)g256_b00, dest, 1) == 0)
      goto fail;
    r = g256_cdecl2((void *)g256_eea0, *(unsigned *)(typ + 0x18), p4 + 8);
    return g256_cdecl3((void *)g256_c310, dest, r, py[0x14 / 4]);
  }

  if (g256_cdecl2((void *)g256_ae0, *(unsigned *)(typ + 0x18), 1) == 0)
    goto fail;
  if (g256_cdecl2((void *)g256_b00, dest, 1) == 0)
    goto fail;
  if (g256_cdecl1((void *)g256_b20, srcobj) == 0)
    goto fail;
  r = g256_cdecl2((void *)g256_eea0, *(unsigned *)(typ + 0x18), p4 + 8);
  if ((*(unsigned char *)(uintptr_t)p4 & 4) != 0)
    return g256_tramp(dest, srcobj, r, 1);
  return g256_tramp(dest, srcobj, r, 0);

fail:
  return g256_cdecl0((void *)g256_unexp);
}

__attribute__((naked)) void rb_0053ec10(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $0x54efc8\n"
    "  pushl $0x53b9f8\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0xc, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x14(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  call lom_body_0053ec10\n"
    "  addl $20, %esp\n"
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

extern void rb_0053f0d0(void);

__attribute__((naked)) void rb_0053edeb(void)
{
  __asm__(
    "  movl $1, %eax\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053edf1(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  calll _rb_0053f0d0\n"
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
