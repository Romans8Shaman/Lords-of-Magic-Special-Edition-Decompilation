/* FUN_0051c6b0 @ 0x0051c6b0 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0051c6b0 1
__attribute__((naked)) void rb_0051c6b0(void)
{
  __asm__(
    "  incl 0x6c(%ecx)\n"
    "  retl \n"
  );
}
