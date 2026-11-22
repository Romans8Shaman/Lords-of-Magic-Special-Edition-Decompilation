/* FUN_0053a05f @ 0x0053a05f (9 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053a05f 1
__attribute__((naked)) void rb_0053a05f(void)
{
  __asm__(
    "  movl 0xc(%ebp), %ebx\n"
    "  movl 8(%ebp), %edi\n"
    "  movl -0x1c(%ebp), %esi\n"
  );
}
