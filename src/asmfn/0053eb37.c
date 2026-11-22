/* FUN_0053eb37 @ 0x0053eb37 (13 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053eb37 1
__attribute__((naked)) void rb_0053eb37(void)
{
  __asm__(
    "  movl -0x14(%ebp), %edx\n"
    "  pushl %edx\n"
    "  call *_lom_af_0053eb37_0\n"
    "  addl $4, %esp\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_0053eb37_0: .long 0x0053ebe0\n"
  ".text\n");
