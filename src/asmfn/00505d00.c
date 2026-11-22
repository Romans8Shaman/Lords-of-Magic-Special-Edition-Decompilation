/* FUN_00505d00 @ 0x00505d00 (114 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00505d00 1
__attribute__((naked)) void rb_00505d00(void)
{
  __asm__(
    "  subl $0x20, %esp\n"
    "  leal (%esp), %eax\n"
    "  pushl %esi\n"
    "  movl %ecx, %esi\n"
    "  pushl %eax\n"
    "  movl $0x20, 8(%esp)\n"
    "  call *0x54d0b8\n"
    "  movl 0x10(%esp), %ecx\n"
    "  movl 0x18(%esp), %edx\n"
    "  addl %edx, %ecx\n"
    "  cmpl $0x5f5e100, %ecx\n"
    "  jae .L00505d6b\n"
    "  movl 0x30(%esp), %eax\n"
    "  pushl %eax\n"
    "  movl $0x431bde83, %eax\n"
    "  mull %ecx\n"
    "  movl 0x30(%esp), %ecx\n"
    "  shrl $0x12, %edx\n"
    "  pushl %edx\n"
    "  pushl %ecx\n"
    "  pushl $0x5736e0\n"
    "  pushl $0x5d22f0\n"
    "  call *_lom_af_00505d00_0\n"
    "  movl 0x3c(%esp), %edx\n"
    "  movl 0x26c(%esi), %eax\n"
    "  addl $0x14, %esp\n"
    "  pushl $0\n"
    "  pushl %edx\n"
    "  pushl $0x5d22f0\n"
    "  pushl %eax\n"
    "  call *0x54d28c\n"
    ".L00505d6b:\n"
    "  popl %esi\n"
    "  addl $0x20, %esp\n"
    "  retl $0xc\n"
  );
}
__asm__(".data\n"
  "_lom_af_00505d00_0: .long 0x0053a090\n"
  ".text\n");
