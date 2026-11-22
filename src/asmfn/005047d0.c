/* FUN_005047d0 @ 0x005047d0 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_005047d0 1
__attribute__((naked)) void rb_005047d0(void)
{
  __asm__(
    "  retl $4\n"
  );
}
