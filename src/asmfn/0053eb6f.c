/* FUN_0053eb6f @ 0x0053eb6f (9 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053eb6f 1
__attribute__((naked)) void rb_0053eb6f(void)
{
  __asm__(
    "  movl 0xc(%ebp), %esi\n"
    "  movl 8(%ebp), %edi\n"
    "  movl -0x2c(%ebp), %ebx\n"
  );
}
