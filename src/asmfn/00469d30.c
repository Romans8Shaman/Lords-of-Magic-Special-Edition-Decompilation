/* FUN_00469d30 @ 0x00469d30 (80 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00469d30 1
__attribute__((naked)) void rb_00469d30(void)
{
  __asm__(
    "  flds 8(%esp)\n"
    "  flds 4(%esp)\n"
    "  fmuls 4(%esp)\n"
    "  flds 0xc(%esp)\n"
    "  fxch %st(2)\n"
    "  fmuls 8(%esp)\n"
    "  flds 4(%esp)\n"
    "  fxch %st(3)\n"
    "  fmuls 0xc(%esp)\n"
    "  fxch %st(1)\n"
    "  faddp %st(2)\n"
    "  flds 8(%esp)\n"
    "  flds 0xc(%esp)\n"
    "  fxch %st(2)\n"
    "  faddp %st(3)\n"
    "  fxch %st(2)\n"
    "  fsqrt \n"
    "  fxch %st(3)\n"
    "  fdiv %st(3)\n"
    "  fxch %st(2)\n"
    "  fdiv %st(3)\n"
    "  fxch %st(1)\n"
    "  fdiv %st(3)\n"
    "  fxch %st(2)\n"
    "  fstps 0x58(%ecx)\n"
    "  fstps 0x5c(%ecx)\n"
    "  fstps 0x60(%ecx)\n"
    "  fstp %st(0)\n"
    "  retl $0xc\n"
  );
}
