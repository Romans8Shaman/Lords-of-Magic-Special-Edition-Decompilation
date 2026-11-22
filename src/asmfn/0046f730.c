/* FUN_0046f730 @ 0x0046f730 (23 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0046f730 1
__attribute__((naked)) void rb_0046f730(void)
{
  __asm__(
    "  movl 0x5831dc, %eax\n"
    "  testl %eax, %eax\n"
    "  jne .L0046f73c\n"
    "  xorl %eax, %eax\n"
    "  retl \n"
    ".L0046f73c:\n"
    "  movl (%ecx), %eax\n"
    "  call *4(%eax)\n"
    "  movl $1, %eax\n"
    "  retl \n"
  );
}
