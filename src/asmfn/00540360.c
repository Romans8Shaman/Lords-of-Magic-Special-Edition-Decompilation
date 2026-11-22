/* FUN_00540360 @ 0x00540360 (17 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00540360 1
__attribute__((naked)) void rb_00540360(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl %ecx\n"
    "  fnstsw -2(%ebp)\n"
    "  fnclex \n"
    "  movswl -2(%ebp), %eax\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl \n"
  );
}
