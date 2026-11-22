/* Hand C for lomse.exe FUN_0053ee20 @ 0x0053ee20 (98/117 bytes, __cdecl).
 * g242, shim-plus-C. The original builds a standard ebp / _except_handler3
 * frame (next, handler 0053b9f8, scope 0x54efd8, try=-1, sub esp,8, saved
 * ebx/esi/edi, [ebp-0x18]=esp). If param_1 is 0 it returns with eax still
 * the prologue's fs:0 value; if [param_1+0x1c]+4 is 0 it returns 0; otherwise
 * it sets try=0, calls stay-asmfn trampoline 005399b0(this=[param_1+0x18],
 * fn=[param_1+0x1c]+4), sets try=-1, and returns that result. Scope-table
 * mid-entries 0053ee6a (filter: return param_2 != 0) and 0053ee75 (catch:
 * mov esp,[ebp-0x18]; call 0053f0d0) stay original bytes under a 5-byte
 * entry hook; standalone should keep them as bodyrefs. A naked shim builds
 * the exact fs:0 / scope-table frame and cdecl epilogue. The C body uses
 * the try slot and does not allocate its own frame object.
 */
#include "lom.h"

#define LOM_SELF_0053ee20 1

#ifndef G242_NATIVE_TEST
__attribute__((used)) void *g242_tramp = (void *)0x005399b0;
#else
unsigned __stdcall stub_005399b0(void *this, unsigned fn);
#endif

#ifndef G242_SHIM_HANDLER
#define G242_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G242_SHIM_SCOPE
#define G242_SHIM_SCOPE 0x54efd8
#endif
#define G242_STRX(x) #x
#define G242_STR(x) G242_STRX(x)
#define G242_SHIM_HANDLER_STR G242_STR(G242_SHIM_HANDLER)
#define G242_SHIM_SCOPE_STR G242_STR(G242_SHIM_SCOPE)

/* Standalone bodyref anchors: scope-table filter and catch. */
__attribute__((used)) static const unsigned g242_seh_filter = 0x0053ee6a;
__attribute__((used)) static const unsigned g242_seh_catch  = 0x0053ee75;

unsigned lom_body_0053ee20(unsigned old_fs, unsigned p1, unsigned p2, int *trylevel)
    __asm__("lom_body_0053ee20");

unsigned lom_body_0053ee20(unsigned old_fs, unsigned p1, unsigned p2, int *trylevel)
{
  unsigned fn, r;
  void *th;

  (void)p2;
  if (p1 == 0) {
    return old_fs;
  }
  fn = *(unsigned *)(*(unsigned *)(p1 + 0x1c) + 4);
  if (fn == 0) {
    return 0;
  }
  *trylevel = 0;
  th = *(void **)(p1 + 0x18);
#ifdef G242_NATIVE_TEST
  r = stub_005399b0(th, fn);
#else
  __asm__ volatile (
    "pushl %2\n"
    "pushl %1\n"
    "calll *_g242_tramp\n"
    : "=a"(r)
    : "r"(th), "r"(fn)
    : "ecx", "edx", "memory"
  );
#endif
  *trylevel = -1;
  return r;
}

__attribute__((naked)) void rb_0053ee20(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G242_SHIM_SCOPE_STR "\n"
    "  pushl $" G242_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  subl $8, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0xc(%ebp)\n"
    "  pushl 8(%ebp)\n"
    "  pushl -0x10(%ebp)\n"
    "  call lom_body_0053ee20\n"
    "  addl $16, %esp\n"
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

__attribute__((naked)) void rb_0053ee6a(void)
{
  __asm__(
    "  xorl %eax, %eax\n"
    "  movb 0xc(%ebp), %cl\n"
    "  testb %cl, %cl\n"
    "  setne %al\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053ee75(void)
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
