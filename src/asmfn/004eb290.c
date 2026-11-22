/* FUN_004eb290 @ 0x004eb290 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004eb290 1
__attribute__((naked)) void rb_004eb290(void)
{
  __asm__(
    "  jmp *0x58(%ecx)\n"
  );
}
