/* FUN_004f2be0 @ 0x004f2be0 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f2be0 1
__attribute__((naked)) void rb_004f2be0(void)
{
  __asm__(
    "  retl $4\n"
  );
}
