/* FUN_0053eb44 @ 0x0053eb44 (43 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053eb44 1
__attribute__((naked)) void rb_0053eb44(void)
{
  __asm__(
    "  movl -0x18(%ebp), %esp\n"
    "  movl $0, -0x2c(%ebp)\n"
    "  pushl $-1\n"
    "  leal -0x10(%ebp), %eax\n"
    "  pushl %eax\n"
    "  call *_lom_af_0053eb44_0\n"
    "  addl $8, %esp\n"
    "  xorl %eax, %eax\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_0053eb44_0: .long 0x00539d12\n"
  ".text\n");
