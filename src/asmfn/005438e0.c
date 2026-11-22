/* FUN_005438e0 @ 0x005438e0 (59 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_005438e0 1
__attribute__((naked)) void rb_005438e0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl %ecx\n"
    "  pushl %esi\n"
    "  wait \n"
    "  fnstcw -4(%ebp)\n"
    "  movl -4(%ebp), %eax\n"
    "  pushl %eax\n"
    "  call *_lom_af_005438e0_0\n"
    "  movl 0xc(%ebp), %ecx\n"
    "  movl 8(%ebp), %edx\n"
    "  movl %ecx, %esi\n"
    "  addl $4, %esp\n"
    "  notl %ecx\n"
    "  andl %edx, %esi\n"
    "  andl %eax, %ecx\n"
    "  orl %ecx, %esi\n"
    "  pushl %esi\n"
    "  call *_lom_af_005438e0_1\n"
    "  addl $4, %esp\n"
    "  movl %eax, 0xc(%ebp)\n"
    "  fldcw 0xc(%ebp)\n"
    "  movl %esi, %eax\n"
    "  popl %esi\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_005438e0_0: .long 0x00543940\n"
  "_lom_af_005438e0_1: .long 0x005439e0\n"
  ".text\n");
