/* FUN_00462c80 @ 0x00462c80 (14 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00462c80 1
__attribute__((naked)) void rb_00462c80(void)
{
  __asm__(
    "  movl 8(%ecx), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L00462c8d\n"
    "  movl (%ecx), %eax\n"
    "  pushl $1\n"
    "  call *(%eax)\n"
    ".L00462c8d:\n"
    "  retl \n"
  );
}
