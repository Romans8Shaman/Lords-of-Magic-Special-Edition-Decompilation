/* Hand C for lomse.exe FUN_00539ff0 @ 0x00539ff0 (111 bytes, __stdcall ret 20).
 * g247, shim-plus-C. The original is an __ehvec constructor: it builds an
 * ebp / _except_handler3 frame (next, handler 0053b9f8, scope 0x54eeb0,
 * try=-1, add esp,-0x10, saved ebx/esi/edi), sets success [ebp-0x20] and
 * constructed-count [ebp-0x1c] and try to 0, then thiscall-calls the ctor
 * in [ebp+0x14] on each element (ecx=pointer, then pointer += size) until
 * the constructed count is >= the signed count argument. It then sets
 * success=1 and try=-1 and calls mid-entry rb_0053a068 (source label in
 * already-fn 0053a05f, not hooked).
 * 0053a068 returns immediately when success is 1; if success is 0 it calls
 * already-fn 00539f60 (ehvec dtor) with the pointer, size, constructed
 * count, and dtor [ebp+0x18]. Scope-table 0x54eeb0 has one finally entry
 * pointing at already-fn 0053a05f, not at a mid-entry in this body. A
 * naked shim builds the exact fs:0 frame and ret-20 epilogue, and issues
 * the rb_0053a068 call after the C body. The C body uses the original pointer,
 * success, constructed, and try slots.
 */
#include "lom.h"

#define LOM_SELF_00539ff0 1

#ifndef G247_NATIVE_TEST
extern void rb_0053a068(void);
__attribute__((used)) void *g247_cleanup = (void *)rb_0053a068;
#else
void stub_cleanup(void);
__attribute__((used)) void *g247_cleanup = (void *)stub_cleanup;
#endif

#ifndef G247_SHIM_HANDLER
#define G247_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G247_SHIM_SCOPE
#define G247_SHIM_SCOPE 0x54eeb0
#endif
#define G247_STRX(x) #x
#define G247_STR(x) G247_STRX(x)
#define G247_SHIM_HANDLER_STR G247_STR(G247_SHIM_HANDLER)
#define G247_SHIM_SCOPE_STR G247_STR(G247_SHIM_SCOPE)

void lom_body_00539ff0(unsigned *ptr, unsigned size, int count, void *ctor,
                       int *success, int *constructed, int *trylevel)
    __asm__("lom_body_00539ff0");

void lom_body_00539ff0(unsigned *ptr, unsigned size, int count, void *ctor,
                       int *success, int *constructed, int *trylevel)
{
  unsigned p;
  *success = 0;
  *trylevel = 0;
  *constructed = 0;
  p = *ptr;
  while (*constructed < count) {
    ((void (__thiscall *)(void *))ctor)((void *)p);
    p += size;
    *ptr = p;
    *constructed = *constructed + 1;
  }
  *success = 1;
}

__attribute__((naked)) void rb_00539ff0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G247_SHIM_SCOPE_STR "\n"
    "  pushl $" G247_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0x10, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x1c(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x20(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x14(%ebp)\n"
    "  pushl 0x10(%ebp)\n"
    "  pushl 0xc(%ebp)\n"
    "  leal 8(%ebp), %eax\n"
    "  pushl %eax\n"
    "  call lom_body_00539ff0\n"
    "  addl $28, %esp\n"
    "  movl $-1, -4(%ebp)\n"
    "  calll *_g247_cleanup\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $0x14\n"
  );
}
