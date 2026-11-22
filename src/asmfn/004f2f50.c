/* FUN_004f2f50 @ 0x004f2f50 (23 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f2f50 1
__attribute__((naked)) void rb_004f2f50(void)
{
  __asm__(
    "  movl 8(%esp), %edx\n"
    "  movl (%ecx), %eax\n"
    "  pushl $0x584ab8\n"
    "  pushl %edx\n"
    "  movl 0xc(%esp), %edx\n"
    "  pushl %edx\n"
    "  call *0x14(%eax)\n"
    "  retl $8\n"
  );
}
