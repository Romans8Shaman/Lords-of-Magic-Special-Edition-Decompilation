/* FUN_0044ecc0 @ 0x0044ecc0 (13 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044ecc0 1
__attribute__((naked)) void rb_0044ecc0(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  pushl %eax\n"
    "  call *_lom_af_0044ecc0_0\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_0044ecc0_0: .long 0x004f5c00\n"
  ".text\n");
