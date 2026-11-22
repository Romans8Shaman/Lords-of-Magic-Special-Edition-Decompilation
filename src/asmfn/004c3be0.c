/* FUN_004c3be0 @ 0x004c3be0 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004c3be0 1
__attribute__((naked)) void rb_004c3be0(void)
{
  __asm__(
    "  movb 4(%ecx), %al\n"
    "  retl \n"
  );
}
