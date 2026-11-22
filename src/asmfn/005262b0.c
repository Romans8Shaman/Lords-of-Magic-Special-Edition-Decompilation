/* FUN_005262b0 @ 0x005262b0 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_005262b0 1
__attribute__((naked)) void rb_005262b0(void)
{
  __asm__(
    "  movl (%ecx), %eax\n"
    "  retl \n"
  );
}
