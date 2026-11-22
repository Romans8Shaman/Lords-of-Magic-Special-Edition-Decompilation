/* FUN_004f2bc0 @ 0x004f2bc0 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f2bc0 1
__attribute__((naked)) void rb_004f2bc0(void)
{
  __asm__(
    "  flds 4(%ecx)\n"
    "  retl \n"
  );
}
