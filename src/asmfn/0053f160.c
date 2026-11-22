/* FUN_0053f160 @ 0x0053f160 (110 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0053f160 1
__attribute__((naked)) void rb_0053f160(void)
{
  __asm__(
    "  pushl %ebp\n"
    "  movl %esp, %ebp\n"
    "  pushl $-1\n"
    "  pushl $0x54f000\n"
    "  pushl $0x53b9f8\n"
    "  movl %fs:0, %eax\n"
    "  pushl %eax\n"
    "  movl %esp, %fs:0\n"
    "  subl $8, %esp\n"
    "  pushl %ebx\n"
    "  pushl %esi\n"
    "  pushl %edi\n"
    "  movl %esp, -0x18(%ebp)\n"
    "  movl $0, -4(%ebp)\n"
    "  movl 0x574a54, %eax\n"
    "  testl %eax, %eax\n"
    "  je .L0053f1b1\n"
    "  movl $1, -4(%ebp)\n"
    "  call *%eax\n"
    "  jmp .L0053f1aa\n"
    "  movl $1, %eax\n"
    "  retl \n"
    "  movl -0x18(%ebp), %esp\n"
    ".L0053f1aa:\n"
    "  movl $0, -4(%ebp)\n"
    ".L0053f1b1:\n"
    "  movl $0xffffffff, -4(%ebp)\n"
    "  call *_lom_af_0053f160_0\n"
    "  movl -0x10(%ebp), %ecx\n"
    "  movl %ecx, %fs:0\n"
    "  popl %edi\n"
    "  popl %esi\n"
    "  popl %ebx\n"
    "  movl %ebp, %esp\n"
    "  popl %ebp\n"
    "  retl \n"
  );
}
__asm__(".data\n"
  "_lom_af_0053f160_0: .long 0x0053f1ce\n"
  ".text\n");
