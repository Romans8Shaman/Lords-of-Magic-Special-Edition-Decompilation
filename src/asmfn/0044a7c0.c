/* FUN_0044a7c0 @ 0x0044a7c0 (33 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044a7c0 1
__attribute__((naked)) void rb_0044a7c0(void)
{
  __asm__(
    "  movl 0x5d1e84, %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0044a7dc\n"
    "  movl 4(%esp), %edx\n"
    "  movl (%ecx), %eax\n"
    "  pushl %edx\n"
    "  movl 0xc(%esp), %edx\n"
    "  pushl %edx\n"
    "  call *0x28(%eax)\n"
    "  retl $0x14\n"
    ".L0044a7dc:\n"
    "  xorl %eax, %eax\n"
    "  retl $0x14\n"
  );
}
