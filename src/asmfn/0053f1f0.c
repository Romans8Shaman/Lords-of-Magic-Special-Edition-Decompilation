/* FUN_0053f1f0 @ 0x0053f1f0 (48 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053f1f0 1
__attribute__((naked)) void rb_0053f1f0(void)
{
  __asm__(
    "  movl 0x5747bc, %eax\n"
    "  testl %eax, %eax\n"
    "  je .L0053f1fb\n"
    "  call *%eax\n"
    ".L0053f1fb:\n"
    "  pushl $0x555110\n"
    "  pushl $0x555100\n"
    "  call *_lom_af_0053f1f0_0\n"
    "  addl $8, %esp\n"
    "  pushl $0x5550fc\n"
    "  pushl $0x555000\n"
    "  call *_lom_af_0053f1f0_1\n"
    "  addl $8, %esp\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_0053f1f0_0: .long 0x0053f340\n"
  "_lom_af_0053f1f0_1: .long 0x0053f340\n"
  ".text\n");
