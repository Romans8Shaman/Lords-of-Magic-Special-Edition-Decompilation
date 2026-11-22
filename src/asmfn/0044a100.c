/* FUN_0044a100 @ 0x0044a100 (81 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044a100 1
__attribute__((naked)) void rb_0044a100(void)
{
  __asm__(
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  movl 0x4a0(%esi), %eax\n"
    "  testl %eax, %eax\n"
    "  je .L0044a145\n"
    "  movl (%eax), %ecx\n"
    "  pushl $0x5568d8\n"
    "  pushl %eax\n"
    "  call *0x10(%ecx)\n"
    "  pushl %eax\n"
    "  call *_lom_af_0044a100_0\n"
    "  movl 0x4a0(%esi), %eax\n"
    "  addl $8, %esp\n"
    "  movl (%eax), %edx\n"
    "  pushl $0x5568bc\n"
    "  pushl %eax\n"
    "  call *8(%edx)\n"
    "  pushl %eax\n"
    "  call *_lom_af_0044a100_1\n"
    "  addl $8, %esp\n"
    "  movl $0, 0x4a0(%esi)\n"
    ".L0044a145:\n"
    "  call *_lom_af_0044a100_2\n"
    "  movl $1, %eax\n"
    "  popl %esi\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_0044a100_0: .long 0x004756f0\n"
  "_lom_af_0044a100_1: .long 0x004756f0\n"
  "_lom_af_0044a100_2: .long 0x0046f360\n"
  ".text\n");
