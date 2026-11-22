/* FUN_004f5c80 @ 0x004f5c80 (4 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f5c80 1
__attribute__((naked)) void rb_004f5c80(void)
{
  __asm__(
    "  orl $0xffffffff, %eax\n"
    "  retl \n"
  );
}
