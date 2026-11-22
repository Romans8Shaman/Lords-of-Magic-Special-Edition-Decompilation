/* FUN_004d570c @ 0x004d570c (41 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004d570c 1
__attribute__((naked)) void rb_004d570c(void)
{
  __asm__(
    "  movl 0x414(%esp), %eax\n"
    "  xorl %ecx, %ecx\n"
    "  movl $9, 0x90(%ebp)\n"
    "  popl %edi\n"
    "  movl %ecx, (%eax)\n"
    "  movl 0x18(%esp), %ecx\n"
    "  popl %esi\n"
    "  popl %ebp\n"
    "  movl %ecx, 4(%eax)\n"
    "  popl %ebx\n"
    "  addl $0x400, %esp\n"
    "  retl $8\n"
  );
}
