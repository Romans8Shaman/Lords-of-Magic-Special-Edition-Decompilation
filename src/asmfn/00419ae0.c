/* FUN_00419ae0 @ 0x00419ae0 (8 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00419ae0 1
__attribute__((naked)) void rb_00419ae0(void)
{
  __asm__(
    "  pushl $-1\n"
    "  call *_lom_af_00419ae0_0\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_00419ae0_0: .long 0x00411ba0\n"
  ".text\n");
