/* FUN_0046a000 @ 0x0046a000 (78 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0046a000 1
__attribute__((naked)) void rb_0046a000(void)
{
  __asm__(
    "  movb 4(%esp), %al\n"
    "  flds 0x54(%ecx)\n"
    "  testb %al, %al\n"
    "  je .L0046a013\n"
    "  fsubs 0x54d810\n"
    "  jmp .L0046a019\n"
    ".L0046a013:\n"
    "  fsubs 0x54d814\n"
    ".L0046a019:\n"
    "  fstps 0x54(%ecx)\n"
    "  movl 0x54(%ecx), %eax\n"
    "  movl %eax, %edx\n"
    "  movl %eax, 0x64(%ecx)\n"
    "  movl %edx, 0x78(%ecx)\n"
    "  movl %eax, 0x5577e0\n"
    "  movl 0x54(%ecx), %edx\n"
    "  movl %edx, 0x5577f4\n"
    "  movl 0x54(%ecx), %eax\n"
    "  movl %eax, 0x557820\n"
    "  movl 0x54(%ecx), %edx\n"
    "  movl %edx, 0x557834\n"
    "  movl (%ecx), %eax\n"
    "  call *0x2c(%eax)\n"
    "  retl $4\n"
  );
}
