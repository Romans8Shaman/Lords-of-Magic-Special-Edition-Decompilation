/* op_sunlight @ 0x0048cf40 (5 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0048cf40 1
__attribute__((naked)) void rb_0048cf40(void)
{
  __asm__(
    "  jmp *_lom_af_0048cf40_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_0048cf40_0: .long 0x0051bc30\n"
  ".text\n");
