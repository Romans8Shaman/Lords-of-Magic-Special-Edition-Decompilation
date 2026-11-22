/* FUN_004b8020 @ 0x004b8020 (57 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004b8020 1
__attribute__((naked)) void rb_004b8020(void)
{
  __asm__(
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %ecx, %edi\n"
    "  movl 0x4b2c(%edi), %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L004b8052\n"
    "  movl 0x10(%esp), %esi\n"
    "  pushl %esi\n"
    "  call *_lom_af_004b8020_0\n"
    "  testl %eax, %eax\n"
    "  je .L004b8052\n"
    "  movl 0x4b2c(%edi), %ecx\n"
    "  movl 0xc(%esp), %edx\n"
    "  pushl %esi\n"
    "  pushl %edx\n"
    "  movl (%ecx), %eax\n"
    "  call *0x50(%eax)\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  retl $8\n"
    ".L004b8052:\n"
    "  popl %edi\n"
    "  xorl %eax, %eax\n"
    "  popl %esi\n"
    "  retl $8\n"
  );
}
__asm__(".data\n"
  "_lom_af_004b8020_0: .long 0x004b7890\n"
  ".text\n");
