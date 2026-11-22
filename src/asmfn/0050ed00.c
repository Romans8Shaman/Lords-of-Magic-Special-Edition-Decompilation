/* FUN_0050ed00 @ 0x0050ed00 (18 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0050ed00 1
__attribute__((naked)) void rb_0050ed00(void)
{
  __asm__(
    "  movl 0x58(%ecx), %eax\n"
    "  testl %eax, %eax\n"
    "  jne .L0050ed0b\n"
    "  movl 0x5c(%ecx), %eax\n"
    "  retl \n"
    ".L0050ed0b:\n"
    "  movl (%eax), %edx\n"
    "  movl %eax, %ecx\n"
    "  jmp *0x3c(%edx)\n"
  );
}
