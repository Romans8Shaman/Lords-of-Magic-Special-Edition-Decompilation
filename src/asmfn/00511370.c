/* FUN_00511370 @ 0x00511370 (18 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00511370 1
__attribute__((naked)) void rb_00511370(void)
{
  __asm__(
    "  movl 0x58(%ecx), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0051137c\n"
    "  movl (%ecx), %eax\n"
    "  jmp *0x4c(%eax)\n"
    ".L0051137c:\n"
    "  movl $1, %eax\n"
    "  retl \n"
  );
}
