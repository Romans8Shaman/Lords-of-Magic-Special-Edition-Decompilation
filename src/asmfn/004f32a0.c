/* FUN_004f32a0 @ 0x004f32a0 (35 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f32a0 1
__attribute__((naked)) void rb_004f32a0(void)
{
  __asm__(
    "  flds 4(%esp)\n"
    "  fadds 0x48(%ecx)\n"
    "  xorl %edx, %edx\n"
    "  fcoms 0x54de1c\n"
    "  fstps 0x48(%ecx)\n"
    "  fnstsw %ax\n"
    "  testb $1, %ah\n"
    "  je .L004f32be\n"
    "  movl $1, %edx\n"
    ".L004f32be:\n"
    "  movl %edx, %eax\n"
    "  retl $4\n"
  );
}
