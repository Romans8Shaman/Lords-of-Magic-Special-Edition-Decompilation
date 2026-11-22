/* op_sunlight @ 0x0051bc30 (1 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0051bc30 1
__attribute__((naked)) void rb_0051bc30(void)
{
  __asm__(
    "  retl \n"
  );
}
