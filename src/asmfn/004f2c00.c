/* FUN_004f2c00 @ 0x004f2c00 (1 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f2c00 1
__attribute__((naked)) void rb_004f2c00(void)
{
  __asm__(
    "  retl \n"
  );
}
