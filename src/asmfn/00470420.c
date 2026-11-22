/* FUN_00470420 @ 0x00470420 (33 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00470420 1
__attribute__((naked)) void rb_00470420(void)
{
  __asm__(
    "  movl 0x5d1e84, %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0047043c\n"
    "  movl 4(%esp), %edx\n"
    "  movl (%ecx), %eax\n"
    "  pushl %edx\n"
    "  movl 0xc(%esp), %edx\n"
    "  pushl %edx\n"
    "  call *0x28(%eax)\n"
    "  retl $0x10\n"
    ".L0047043c:\n"
    "  xorl %eax, %eax\n"
    "  retl $0x10\n"
  );
}
