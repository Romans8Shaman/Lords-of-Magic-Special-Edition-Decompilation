/* FUN_0046faf0 @ 0x0046faf0 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0046faf0 1
__attribute__((naked)) void rb_0046faf0(void)
{
  __asm__(
    "  xorl %eax, %eax\n"
    "  retl \n"
  );
}
