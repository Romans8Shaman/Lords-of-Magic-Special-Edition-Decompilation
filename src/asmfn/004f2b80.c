/* FUN_004f2b80 @ 0x004f2b80 (58 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f2b80 1
__attribute__((naked)) void rb_004f2b80(void)
{
  __asm__(
    "  flds 4(%esp)\n"
    "  flds 4(%esp)\n"
    "  fcomps 0x54de18\n"
    "  fnstsw %ax\n"
    "  testb $1, %ah\n"
    "  jne .L004f2ba1\n"
    "  fstp %st(0)\n"
    "  flds 4(%esp)\n"
    "  fsubs 0x54de18\n"
    ".L004f2ba1:\n"
    "  fcoms 0x54de1c\n"
    "  fnstsw %ax\n"
    "  testb $1, %ah\n"
    "  je .L004f2bb4\n"
    "  fsubs 0x54de20\n"
    ".L004f2bb4:\n"
    "  fstps 4(%ecx)\n"
    "  retl $4\n"
  );
}
