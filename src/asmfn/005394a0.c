/* __ftol @ 0x005394a0 (39 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_005394a0 1
__attribute__((naked)) void rb_005394a0(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  addl $-0xc, %esp\n"
    "  wait \n"
    "  fnstcw -2(%ebp)\n"
    "  wait \n"
    "  movw -2(%ebp), %ax\n"
    "  orb $0xc, %ah\n"
    "  movw %ax, -4(%ebp)\n"
    "  fldcw -4(%ebp)\n"
    "  fistpll -0xc(%ebp)\n"
    "  fldcw -2(%ebp)\n"
    "  movl -0xc(%ebp), %eax\n"
    "  movl -8(%ebp), %edx\n"
    "  leave \n"
    "  retl \n"
  );
}
