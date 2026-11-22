/* FUN_0051bc20 @ 0x0051bc20 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0051bc20 1
__attribute__((naked)) void rb_0051bc20(void)
{
  __asm__(
    "  movl %ecx, %eax\n"
    "  retl \n"
  );
}
