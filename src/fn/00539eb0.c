/* Hand C for lomse.exe FUN_00539eb0 @ 0x00539eb0 (115 bytes, __stdcall ret 16).
 * g248, shim-plus-C. The original is an __ehvec destructor-from-the-end: it
 * builds an ebp / _except_handler3 frame (next, handler 0053b9f8, scope
 * 0x54ee90, try=-1, add esp,-0xc, saved ebx/esi/edi), sets success
 * [ebp-0x1c] to 0, advances the pointer slot to ptr+count*size, sets try=0,
 * then repeatedly decrements the count slot (signed js), subtracts size
 * from the pointer, and thiscall-calls the dtor in [ebp+0x14] until the
 * decremented count is negative. It then sets success=1 and try=-1 and
 * calls mid-entry rb_00539f29 (source label in already-fn 00539f23, not
 * hooked). 00539f29 returns immediately when
 * success is 1; if success is 0 it calls already-fn 00539f60. Scope-table
 * 0x54ee90 has one finally entry pointing at already-fn 00539f23, not at
 * a mid-entry in this body. A naked shim builds the exact fs:0 frame and
 * ret-16 epilogue, and issues the rb_00539f29 call after the C body. The C
 * body uses the original pointer, count, success, and try slots.
 */
#include "lom.h"

#define LOM_SELF_00539eb0 1

#ifndef G248_NATIVE_TEST
extern void rb_00539f29(void);
__attribute__((used)) void *g248_cleanup = (void *)rb_00539f29;
#else
void stub_cleanup(void);
__attribute__((used)) void *g248_cleanup = (void *)stub_cleanup;
#endif

#ifndef G248_SHIM_HANDLER
#define G248_SHIM_HANDLER 0x53b9f8
#endif
#ifndef G248_SHIM_SCOPE
#define G248_SHIM_SCOPE 0x54ee90
#endif
#define G248_STRX(x) #x
#define G248_STR(x) G248_STRX(x)
#define G248_SHIM_HANDLER_STR G248_STR(G248_SHIM_HANDLER)
#define G248_SHIM_SCOPE_STR G248_STR(G248_SHIM_SCOPE)

void lom_body_00539eb0(unsigned *ptr, unsigned size, int *count, void *dtor,
                       int *success, int *trylevel)
    __asm__("lom_body_00539eb0");

void lom_body_00539eb0(unsigned *ptr, unsigned size, int *count, void *dtor,
                       int *success, int *trylevel)
{
  *success = 0;
  *ptr = *ptr + size * (unsigned)*count;
  *trylevel = 0;
  for (;;) {
    *count = *count - 1;
    if (*count < 0) {
      break;
    }
    *ptr = *ptr - size;
    ((void (__thiscall *)(void *))dtor)((void *)*ptr);
  }
  *success = 1;
}

__attribute__((naked)) void rb_00539eb0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $" G248_SHIM_SCOPE_STR "\n"
    "  pushl $" G248_SHIM_HANDLER_STR "\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  addl $-0xc, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  leal -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  leal -0x1c(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0x14(%ebp)\n"
    "  leal 0x10(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl 0xc(%ebp)\n"
    "  leal 8(%ebp), %eax\n"
    "  pushl %eax\n"
    "  call lom_body_00539eb0\n"
    "  addl $24, %esp\n"
    "  movl $-1, -4(%ebp)\n"
    "  calll *_g248_cleanup\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl $0x10\n"
  );
}
