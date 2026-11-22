/* __amsg_exit @ 0x0053c470 (38 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053c470 1
__attribute__((naked)) void rb_0053c470(void)
{
  __asm__(
    "  cmpl $1, 0x5d5240\n"
    "  jne .L0053c47e\n"
    "  call *_lom_af_0053c470_0\n"
    ".L0053c47e:\n"
    "  movl 4(%esp), %eax\n"
    "  pushl %eax\n"
    "  call *_lom_af_0053c470_1\n"
    "  addl $4, %esp\n"
    "  pushl $0xff\n"
    "  call *0x574960\n"
  );
}
__asm__(".data\n"
  "_lom_af_0053c470_0: .long 0x005436c0\n"
  "_lom_af_0053c470_1: .long 0x00543700\n"
  ".text\n");
