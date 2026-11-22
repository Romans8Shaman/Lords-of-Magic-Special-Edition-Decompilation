/* Hand C for lomse.exe FUN_004d570c @ 0x004d570c (41 bytes, stdcall ret 8).
 * g238. Mid-function epilogue of already-C 004d4b10, reached by jle from the
 * parent's raw mid-body (range 004d4b15-004d570c). Incoming ebp is this
 * (004d4b10 does mov ebp, ecx). [esp+0x414] is param_1 (the first stdcall
 * out-pointer, below 4 saved regs + 0x400 alloca + the parent return).
 * [esp+0x1c] is local_3f4 (alloca+0x0c). C writes this+0x90 = 9, *param_1
 * = 0, param_1[1] = local_3f4, and returns param_1. A naked shim only
 * forwards those three values and then runs the parent epilogue: pop
 * edi/esi/ebp/ebx, add esp,0x400, ret 8.
 */
#include "lom.h"

#define LOM_SELF_004d570c 1

unsigned lom_body_004d570c(unsigned this, unsigned param_1, unsigned local_3f4)
    __asm__("lom_body_004d570c");

unsigned lom_body_004d570c(unsigned this, unsigned param_1, unsigned local_3f4)
{
  *(unsigned *)(this + 0x90) = 9;
  *(unsigned *)param_1 = 0;
  *(unsigned *)(param_1 + 4) = local_3f4;
  return param_1;
}

__attribute__((naked)) void rb_004d570c(void)
{
  __asm__(
    "  pushl 0x1c(%esp)\n"
    "  pushl 0x418(%esp)\n"
    "  pushl %ebp\n"
    "  call lom_body_004d570c\n"
    "  addl $12, %esp\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebp\n"
    "  popl %ebx\n"
    "  addl $0x400, %esp\n"
    "  retl $8\n"
  );
}
