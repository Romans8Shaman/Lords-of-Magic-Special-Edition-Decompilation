/* FUN_0044b900 @ 0x0044b900 (18 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044b900 1
__attribute__((naked)) void rb_0044b900(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  pushl %eax\n"
    "  call *_lom_af_0044b900_0\n"
    "  movl $1, %eax\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_0044b900_0: .long 0x0044b610\n"
  ".text\n");
