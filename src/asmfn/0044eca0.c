/* FUN_0044eca0 @ 0x0044eca0 (18 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0044eca0 1
__attribute__((naked)) void rb_0044eca0(void)
{
  __asm__(
    "  movl 8(%esp), %eax\n"
    "  movl 4(%esp), %edx\n"
    "  pushl %eax\n"
    "  pushl %edx\n"
    "  call *_lom_af_0044eca0_0\n"
    "  retl $8\n"
  );
}
__asm__(".data\n"
  "_lom_af_0044eca0_0: .long 0x004f5a10\n"
  ".text\n");
