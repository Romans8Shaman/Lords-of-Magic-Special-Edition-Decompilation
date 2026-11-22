/* FUN_00530500 @ 0x00530500 (31 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00530500 1
__attribute__((naked)) void rb_00530500(void)
{
  __asm__(
    "  movl 0x5a7d8c, %eax\n"
    "  movl $0x5aa12c, %ecx\n"
    "  shll $0xa, %eax\n"
    "  movl 0x5a7d90(%eax), %eax\n"
    "  pushl %eax\n"
    "  call *_lom_af_00530500_0\n"
    "  movl $1, %eax\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_00530500_0: .long 0x005304c0\n"
  ".text\n");
