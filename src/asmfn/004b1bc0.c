/* FUN_004b1bc0 @ 0x004b1bc0 (82 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004b1bc0 1
__attribute__((naked)) void rb_004b1bc0(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  testl %eax, %eax\n"
    "  movl %ecx, %edi\n"
    "  jne .L004b1bdb\n"
    "  movl 0x5851a0, %eax\n"
    "  movl $0x55cde8, %esi\n"
    "  testl %eax, %eax\n"
    "  je .L004b1be0\n"
    ".L004b1bdb:\n"
    "  movl $0x55ce20, %esi\n"
    ".L004b1be0:\n"
    "  xorb %bl, %bl\n"
    "  movb %bl, 0x10(%esp)\n"
    ".L004b1be6:\n"
    "  movl 0x10(%esp), %eax\n"
    "  movl %edi, %ecx\n"
    "  pushl %eax\n"
    "  call *_lom_af_004b1bc0_0\n"
    "  movl %esi, %ecx\n"
    "  incb %bl\n"
    "  addl $5, %esi\n"
    "  cmpb $0xa, %bl\n"
    "  movl (%ecx), %edx\n"
    "  movb %bl, 0x10(%esp)\n"
    "  movl %edx, (%eax)\n"
    "  movb 4(%ecx), %cl\n"
    "  movb %cl, 4(%eax)\n"
    "  jl .L004b1be6\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  retl $4\n"
  );
}
__asm__(".data\n"
  "_lom_af_004b1bc0_0: .long 0x004b1db0\n"
  ".text\n");
