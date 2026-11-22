/* FUN_0044a010 @ 0x0044a010 (22 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044a010 1
__attribute__((naked)) void rb_0044a010(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  cmpl $4, %eax\n"
    "  jae .L0044a01d\n"
    "  incl %eax\n"
    "  retl $4\n"
    ".L0044a01d:\n"
    "  pushl %eax\n"
    "  call *_lom_af_0044a010_0\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_0044a010_0: .long 0x004b9550\n"
  ".text\n");
