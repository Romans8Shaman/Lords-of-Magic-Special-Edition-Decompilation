/* FUN_0044eb90 @ 0x0044eb90 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044eb90 1
__attribute__((naked)) void rb_0044eb90(void)
{
  __asm__(
    "  movl 0x68(%ecx), %eax\n"
    "  retl \n"
  );
}
