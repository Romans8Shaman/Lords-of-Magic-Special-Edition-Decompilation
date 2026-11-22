/* FUN_004fdc30 @ 0x004fdc30 (11 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004fdc30 1
__attribute__((naked)) void rb_004fdc30(void)
{
  __asm__(
    "  addl $0x2f4, %ecx\n"
    "  jmp *_lom_af_004fdc30_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_004fdc30_0: .long 0x0051bc30\n"
  ".text\n");
