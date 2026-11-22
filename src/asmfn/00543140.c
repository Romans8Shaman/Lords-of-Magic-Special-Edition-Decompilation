/* FUN_00543140 @ 0x00543140 (32 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00543140 1
__attribute__((naked)) void rb_00543140(void)
{
  __asm__(
    "  movl 0x5d555c, %eax\n"
    "  testl %eax, %eax\n"
    "  je .L0054315d\n"
    "  movl 4(%esp), %ecx\n"
    "  pushl %ecx\n"
    "  call *%eax\n"
    "  addl $4, %esp\n"
    "  testl %eax, %eax\n"
    "  je .L0054315d\n"
    "  movl $1, %eax\n"
    "  retl \n"
    ".L0054315d:\n"
    "  xorl %eax, %eax\n"
    "  retl \n"
  );
}
