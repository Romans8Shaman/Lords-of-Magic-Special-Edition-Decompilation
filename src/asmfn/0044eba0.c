/* FUN_0044eba0 @ 0x0044eba0 (30 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044eba0 1
__attribute__((naked)) void rb_0044eba0(void)
{
  __asm__(
    "  movl 0x30(%ecx), %eax\n"
    "  testb $8, %al\n"
    "  je .L0044ebb9\n"
    "  andb $0xf7, %al\n"
    "  movl %eax, 0x30(%ecx)\n"
    "  movl (%ecx), %eax\n"
    "  call *0x2c(%eax)\n"
    "  movl $1, %eax\n"
    "  retl $4\n"
    ".L0044ebb9:\n"
    "  xorl %eax, %eax\n"
    "  retl $4\n"
  );
}
