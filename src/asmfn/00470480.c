/* FUN_00470480 @ 0x00470480 (29 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00470480 1
__attribute__((naked)) void rb_00470480(void)
{
  __asm__(
    "  pushl $0x557f4c\n"
    "  call *0x54d0f8\n"
    "  movl 0x5d1e84, %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L0047049a\n"
    "  movl (%ecx), %eax\n"
    "  call *0x18(%eax)\n"
    ".L0047049a:\n"
    "  retl $4\n"
  );
}
