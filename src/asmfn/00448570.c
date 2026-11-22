/* FUN_00448570 @ 0x00448570 (18 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00448570 1
__attribute__((naked)) void rb_00448570(void)
{
  __asm__(
    "  movl 0x48(%ecx), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0044857c\n"
    "  movl (%ecx), %eax\n"
    "  jmp *0x4c(%eax)\n"
    ".L0044857c:\n"
    "  movl $1, %eax\n"
    "  retl \n"
  );
}
