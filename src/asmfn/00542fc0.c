/* FUN_00542fc0 @ 0x00542fc0 (34 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00542fc0 1
__attribute__((naked)) void rb_00542fc0(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  movl %eax, %ecx\n"
    "  andl $0x1f, %eax\n"
    "  sarl $5, %ecx\n"
    "  leal (%eax, %eax, 8), %edx\n"
    "  movl 0x5d6a20(, %ecx, 4), %eax\n"
    "  leal 0xc(%eax, %edx, 4), %ecx\n"
    "  pushl %ecx\n"
    "  call *0x54d0dc\n"
    "  retl \n"
  );
}
