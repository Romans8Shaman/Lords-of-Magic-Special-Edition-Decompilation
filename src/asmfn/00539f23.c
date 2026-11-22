/* FUN_00539f23 @ 0x00539f23 (6 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539f23 1
__attribute__((naked)) void rb_00539f23(void)
{
  __asm__(
    "  movl 0xc(%ebp), %edi\n"
    "  movl 8(%ebp), %esi\n"
  );
}
