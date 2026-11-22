/* __alloca_probe @ 0x00539630 (47 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00539630 1
__attribute__((naked)) void rb_00539630(void)
{
  __asm__(
    "  pushl %ecx\n"
    "  cmpl $0x1000, %eax\n"
    "  leal 8(%esp), %ecx\n"
    "  jb .L00539650\n"
    ".L0053963c:\n"
    "  subl $0x1000, %ecx\n"
    "  subl $0x1000, %eax\n"
    "  testl %eax, (%ecx)\n"
    "  cmpl $0x1000, %eax\n"
    "  jae .L0053963c\n"
    ".L00539650:\n"
    "  subl %eax, %ecx\n"
    "  movl %esp, %eax\n"
    "  testl %eax, (%ecx)\n"
    "  movl %ecx, %esp\n"
    "  movl (%eax), %ecx\n"
    "  movl 4(%eax), %eax\n"
    "  pushl %eax\n"
    "  retl \n"
  );
}
