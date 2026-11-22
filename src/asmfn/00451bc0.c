/* FUN_00451bc0 @ 0x00451bc0 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00451bc0 1
__attribute__((naked)) void rb_00451bc0(void)
{
  __asm__(
    "  movl 0x6c(%ecx), %eax\n"
    "  retl \n"
  );
}
