/* FUN_00405fe0 @ 0x00405fe0 (24 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00405fe0 1
__attribute__((naked)) void rb_00405fe0(void)
{
  __asm__(
    "  movl 0x54(%ecx), %eax\n"
    "  movl 4(%esp), %edx\n"
    "  pushl %eax\n"
    "  pushl %edx\n"
    "  call *_lom_af_00405fe0_0\n"
    "  movl %eax, %ecx\n"
    "  call *_lom_af_00405fe0_1\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_00405fe0_0: .long 0x004c6fc0\n"
  "_lom_af_00405fe0_1: .long 0x00406000\n"
  ".text\n");
