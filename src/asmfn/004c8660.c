/* FUN_004c8660 @ 0x004c8660 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004c8660 1
__attribute__((naked)) void rb_004c8660(void)
{
  __asm__(
    "  movl 0x10(%ecx), %eax\n"
    "  retl \n"
  );
}
