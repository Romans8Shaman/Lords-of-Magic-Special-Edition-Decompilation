/* FUN_00420460 @ 0x00420460 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00420460 1
__attribute__((naked)) void rb_00420460(void)
{
  __asm__(
    "  movl 0x48(%ecx), %eax\n"
    "  retl \n"
  );
}
