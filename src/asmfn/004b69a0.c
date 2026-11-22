/* FUN_004b69a0 @ 0x004b69a0 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004b69a0 1
__attribute__((naked)) void rb_004b69a0(void)
{
  __asm__(
    "  retl $0xc\n"
  );
}
