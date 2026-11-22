/* FUN_00544720 @ 0x00544720 (20 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00544720 1
__attribute__((naked)) void rb_00544720(void)
{
  __asm__(
    "  call *_lom_af_00544720_0\n"
    "  movb 0x5d52e8, %al\n"
    "  testb %al, %al\n"
    "  je .L00544733\n"
    "  jmp *_lom_af_00544720_1\n"
    ".L00544733:\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_00544720_0: .long 0x0053ce20\n"
  "_lom_af_00544720_1: .long 0x00547940\n"
  ".text\n");
