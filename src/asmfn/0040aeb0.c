/* FUN_0040aeb0 @ 0x0040aeb0 (99 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0040aeb0 1
__attribute__((naked)) void rb_0040aeb0(void)
{
  __asm__(
    "  subl $0x108, %esp\n"
    "  leal (%esp), %ecx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  pushl $0x45\n"
    "  call *_lom_af_0040aeb0_0\n"
    "  movl 0x114(%esp), %esi\n"
    "  movl $0x1f, %ecx\n"
    "  leal 0x1d(%esp), %edi\n"
    "  rep movsl (%esi), %es:(%edi)\n"
    "  movswl 0x1f(%esp), %edx\n"
    "  cmpl $0x1e, %edx\n"
    "  jge .L0040aef9\n"
    "  movl $0x1e, %ecx\n"
    "  leal 0x23(%esp, %edx, 4), %eax\n"
    "  subl %edx, %ecx\n"
    "  xorl %edx, %edx\n"
    ".L0040aeec:\n"
    "  movw %dx, -2(%eax)\n"
    "  movw %dx, (%eax)\n"
    "  addl $4, %eax\n"
    "  decl %ecx\n"
    "  jne .L0040aeec\n"
    ".L0040aef9:\n"
    "  leal 8(%esp), %eax\n"
    "  movl $0x584ae8, %ecx\n"
    "  pushl %eax\n"
    "  call *_lom_af_0040aeb0_1\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  addl $0x108, %esp\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_0040aeb0_0: .long 0x0048cc70\n"
  "_lom_af_0040aeb0_1: .long 0x00489b70\n"
  ".text\n");
