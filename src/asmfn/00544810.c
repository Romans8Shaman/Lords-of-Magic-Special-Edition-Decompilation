/* FUN_00544810 @ 0x00544810 (51 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00544810 1
__attribute__((naked)) void rb_00544810(void)
{
  __asm__(
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  pushl $0x5d6b2c\n"
    "  call *0x54d1e0\n"
    "  movl 0x5d6b28, %eax\n"
    "  movl 0x54d1f0, %edi\n"
    "  testl %eax, %eax\n"
    "  je .Lx00544810_0\n"
    "  pushl $0x5d6b2c\n"
    "  call *%edi\n"
    "  pushl $0x13\n"
    "  call *_lom_af_00544810_1\n"
    "  addl $4, %esp\n"
    "  movl $1, %esi\n"
    ".Lx00544810_0: jmp *_lom_af_00544810_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_00544810_0: .long 0x00544845\n"
  "_lom_af_00544810_1: .long 0x0053cbb0\n"
  ".text\n");
