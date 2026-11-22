/* Rebuilt from lomse.exe __ftol @ 0x005394a0 (39 bytes).
 * HAND 2026-11-13 g157: first C used fnstcw / RC=11 / fistp / restore CW and
 * passed 3000 Unicorn preloads at CW=0x27f. HAND 2026-11-13 g157fix: that C
 * (clang-emitted `and esp,-8`, no `wait`) changed Autocalc outcomes in sa38
 * (two early Marauding Party losses). sa38_nft with this exact original
 * sequence won the same encounter type (Hound defeated by Shaman). Keep the
 * original instruction stream. */
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
