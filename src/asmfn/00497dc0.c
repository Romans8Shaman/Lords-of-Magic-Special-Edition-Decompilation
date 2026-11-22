/* FUN_00497dc0 @ 0x00497dc0 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00497dc0 1
__attribute__((naked)) void rb_00497dc0(void)
{
  __asm__(
    "  movl 0x20(%ecx), %eax\n"
    "  retl \n"
  );
}
