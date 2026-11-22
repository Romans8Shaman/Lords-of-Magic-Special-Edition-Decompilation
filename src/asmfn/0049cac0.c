/* FUN_0049cac0 @ 0x0049cac0 (84 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0049cac0 1
__attribute__((naked)) void rb_0049cac0(void)
{
  __asm__(
    "  subl $0x6c, %esp\n"
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  movl 0x34(%esi), %eax\n"
    "  testl %eax, %eax\n"
    "  je .L0049cb0f\n"
    "  leal 4(%esp), %edx\n"
    "  movl $0x6c, 4(%esp)\n"
    "  movl $0, 8(%esp)\n"
    "  movl (%eax), %ecx\n"
    "  pushl %edx\n"
    "  pushl %eax\n"
    "  call *0x58(%ecx)\n"
    "  movl 0x14(%esp), %eax\n"
    "  movl 0x58372c, %ecx\n"
    "  imull 0xc(%esp), %eax\n"
    "  subl %eax, %ecx\n"
    "  movl %ecx, 0x58372c\n"
    "  movl 0x34(%esi), %eax\n"
    "  pushl %eax\n"
    "  movl (%eax), %ecx\n"
    "  call *8(%ecx)\n"
    "  movl $0, 0x34(%esi)\n"
    ".L0049cb0f:\n"
    "  popl %esi\n"
    "  addl $0x6c, %esp\n"
    "  retl \n"
  );
}
