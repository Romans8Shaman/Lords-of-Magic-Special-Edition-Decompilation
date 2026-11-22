/* FUN_0043d720 @ 0x0043d720 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0043d720 1
__attribute__((naked)) void rb_0043d720(void)
{
  __asm__(
    "  movl 0x4c(%ecx), %eax\n"
    "  retl \n"
  );
}
