/* FUN_004c5210 @ 0x004c5210 (5 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004c5210 1
__attribute__((naked)) void rb_004c5210(void)
{
  __asm__(
    "  jmp *_lom_af_004c5210_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_004c5210_0: .long 0x004c51d0\n"
  ".text\n");
