/* FUN_00450530 @ 0x00450530 (18 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00450530 1
__attribute__((naked)) void rb_00450530(void)
{
  __asm__(
    "  movl 0x44(%ecx), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0045053c\n"
    "  movl (%ecx), %eax\n"
    "  call *0x4c(%eax)\n"
    ".L0045053c:\n"
    "  movl $1, %eax\n"
    "  retl \n"
  );
}
