/* FUN_00539a60 @ 0x00539a60 (91 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539a60 1
__attribute__((naked)) void rb_00539a60(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  subl $0x14, %esp\n"
    "  movl 0x14(%ebp), %edx\n"
    "  movl 0xc(%ebp), %eax\n"
    "  movl 8(%ebp), %ecx\n"
    "  incl %edx\n"
    "  movl $0, -0x14(%ebp)\n"
    "  movl $0x539ac0, -0x10(%ebp)\n"
    "  movl %eax, -0xc(%ebp)\n"
    "  movl %ecx, -8(%ebp)\n"
    "  movl %edx, -4(%ebp)\n"
    "  movl %fs:0, %eax\n"
    "  movl %eax, -0x14(%ebp)\n"
    "  leal -0x14(%ebp), %eax\n"
    "  movl %eax, %fs:0\n"
    "  movl 0x18(%ebp), %eax\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  movl 0x10(%ebp), %ecx\n"
    "  pushl %ecx\n"
    "  call *_lom_af_00539a60_0\n"
    "  movl %eax, %ecx\n"
    "  movl -0x14(%ebp), %eax\n"
    "  movl %eax, %fs:0\n"
    "  movl %ecx, %eax\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_00539a60_0: .long 0x0053eed0\n"
  ".text\n");
