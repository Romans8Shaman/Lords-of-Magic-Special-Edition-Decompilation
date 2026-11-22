/* Hand C for lomse.exe FUN_0053f160 @ 0x0053f160 (101/110 bytes, __cdecl).
 * g245, shim-plus-C. The original is unexpected(): it builds a standard ebp /
 * _except_handler3 frame (next, handler 0053b9f8, scope 0x54f000, try=-1,
 * sub esp,8, saved ebx/esi/edi, [ebp-0x18]=esp), sets try=0, and if
 * DAT_00574a54 is a handler it sets try=1, calls that pointer, then try=0.
 * It then sets try=-1 and calls already-fn thunk 0053f1ce (terminate /
 * 0053f0d0), returning that eax. Scope-table mid-entries 0053f1a1 (filter:
 * return 1) and 0053f1a7 (catch: mov esp,[ebp-0x18]) stay original bytes
 * under a 5-byte entry hook; standalone should keep them as bodyrefs. A
 * naked shim builds the exact fs:0 / scope-table frame and cdecl epilogue.
 * The C body uses the try slot.
 */
#include "lom.h"

#define LOM_SELF_0053f160 1

#ifndef G245_NATIVE_TEST
__attribute__((used)) void *g245_term = (void *)0x0053f1ce;
__attribute__((used)) unsigned *g245_unexp = (unsigned *)0x00574a54;
#else
unsigned stub_terminate(void);
#endif

#ifndef G245_SHIM_HANDLER
#define G245_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G245_SHIM_SCOPE
#define G245_SHIM_SCOPE 0x54f000
#endif
#define G245_STRX(x) #x
#define G245_STR(x) G245_STRX(x)
#define G245_SHIM_HANDLER_STR G245_STR(G245_SHIM_HANDLER)
#define G245_SHIM_SCOPE_STR G245_STR(G245_SHIM_SCOPE)

__attribute__((used)) static const unsigned g245_seh_filter = 0x0053f1a1;
__attribute__((used)) static const unsigned g245_seh_catch  = 0x0053f1a7;

unsigned lom_body_0053f160(int *trylevel)
    __asm__("lom_body_0053f160");

unsigned lom_body_0053f160(int *trylevel)
{
  unsigned fn, r;
  *trylevel = 0;
#ifdef G245_NATIVE_TEST
  fn = *(unsigned *)0x00574a54;
#else
  fn = *g245_unexp;
#endif
  if (fn != 0) {
    *trylevel = 1;
    ((void (*)(void))fn)();
    *trylevel = 0;
  }
  *trylevel = -1;
#ifdef G245_NATIVE_TEST
  r = stub_terminate();
#else
  __asm__ volatile (
    "calll *_g245_term\n"
    : "=a"(r)
    :
    : "ecx", "edx", "memory"
  );
#endif
  return r;
}

__attribute__((naked)) void rb_0053f160(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G245_SHIM_SCOPE_STR "\n"
    "  pushl $" G245_SHIM_HANDLER_STR "\n"
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
    "  call lom_body_0053f160\n"
    "  addl $4, %esp\n"
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

extern void __stdcall rb_0053f1ce(void);

__attribute__((naked)) void rb_0053f1a1(void)
{
  __asm__(
    "  movl $1, %eax\n"
    "  retl\n"
  );
}

__attribute__((naked)) void rb_0053f1a7(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  movl $0, -4(%ebp)\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  calll _rb_0053f1ce@0\n"
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
