/* FUN_0053f8d0 @ 0x0053f8d0 (80 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053f8d0 1
__attribute__((naked)) void rb_0053f8d0(void)
{
  __asm__(
    "  movl 0x577b9c, %eax\n"
    "  testl %eax, %eax\n"
    "  jne .L0053f8fe\n"
    "  movl 0x10(%esp), %eax\n"
    "  movl 8(%esp), %ecx\n"
    "  pushl %eax\n"
    "  movl 0x10(%esp), %eax\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  pushl $0\n"
    "  pushl $0\n"
    "  pushl %eax\n"
    "  pushl %ecx\n"
    "  movl 0x20(%esp), %ecx\n"
    "  pushl %ecx\n"
    "  pushl $1\n"
    "  call *_lom_af_0053f8d0_0\n"
    "  addl $0x24, %esp\n"
    "  retl \n"
    ".L0053f8fe:\n"
    "  call *_lom_af_0053f8d0_1\n"
    "  movl 0x10(%esp), %edx\n"
    "  pushl $0xffff\n"
    "  pushl %edx\n"
    "  movl $0x21, (%eax)\n"
    "  call *_lom_af_0053f8d0_2\n"
    "  fldl 0x10(%esp)\n"
    "  addl $8, %esp\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_0053f8d0_0: .long 0x00540050\n"
  "_lom_af_0053f8d0_1: .long 0x0053b4c0\n"
  "_lom_af_0053f8d0_2: .long 0x00540380\n"
  ".text\n");
