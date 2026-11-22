/* FUN_004d6220 @ 0x004d6220 (64 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004d6220 1
__attribute__((naked)) void rb_004d6220(void)
{
  __asm__(
    "  movl 8(%esp), %eax\n"
    "  pushl %esi\n"
    "  testl %eax, %eax\n"
    "  jl .L004d624c\n"
    "  cmpl 4(%ecx), %eax\n"
    "  jge .L004d624c\n"
    "  movl 0x10(%esp), %edx\n"
    "  pushl %edx\n"
    "  movl (%ecx), %edx\n"
    "  movl 4(%edx, %eax, 8), %esi\n"
    "  pushl %esi\n"
    "  movl (%edx, %eax, 8), %eax\n"
    "  movl 0x10(%esp), %edx\n"
    "  pushl %eax\n"
    "  pushl %edx\n"
    "  call *_lom_af_004d6220_0\n"
    "  popl %esi\n"
    "  retl $0xc\n"
    ".L004d624c:\n"
    "  movl 8(%esp), %ecx\n"
    "  pushl $0x555b78\n"
    "  call *_lom_af_004d6220_1\n"
    "  xorl %eax, %eax\n"
    "  popl %esi\n"
    "  retl $0xc\n"
  );
}
__asm__(".data\n"
  "_lom_af_004d6220_0: .long 0x004d63f0\n"
  "_lom_af_004d6220_1: .long 0x004d41c0\n"
  ".text\n");
