/* op_C @ 0x004f5c70 (3 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f5c70 1
__attribute__((naked)) void rb_004f5c70(void)
{
  __asm__(
    "  xorl %eax, %eax\n"
    "  retl \n"
  );
}
