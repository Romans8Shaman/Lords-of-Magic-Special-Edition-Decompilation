/* FUN_0050a570 @ 0x0050a570 (65 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0050a570 1
__attribute__((naked)) void rb_0050a570(void)
{
  __asm__(
    "  movl 0x84(%ecx), %eax\n"
    "  testl %eax, %eax\n"
    "  je .L0050a5a2\n"
    "  movl 8(%esp), %ecx\n"
    "  movl 4(%esp), %edx\n"
    ".L0050a582:\n"
    "  cmpl %edx, (%eax)\n"
    "  jne .L0050a58b\n"
    "  cmpl %ecx, 4(%eax)\n"
    "  je .L0050a59a\n"
    ".L0050a58b:\n"
    "  movl 0x14(%eax), %eax\n"
    "  testl %eax, %eax\n"
    "  jne .L0050a582\n"
    "  movl %eax, 0x5d2cd8\n"
    "  retl $8\n"
    ".L0050a59a:\n"
    "  movl %eax, 0x5d2cd8\n"
    "  retl $8\n"
    ".L0050a5a2:\n"
    "  movl $0, 0x5d2cd8\n"
    "  xorl %eax, %eax\n"
    "  retl $8\n"
  );
}
