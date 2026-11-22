/* FUN_004f3540 @ 0x004f3540 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f3540 1
__attribute__((naked)) void rb_004f3540(void)
{
  __asm__(
    "  xorw %ax, %ax\n"
    "  retl \n"
  );
}
