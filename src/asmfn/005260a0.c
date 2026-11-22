/* FUN_005260a0 @ 0x005260a0 (64 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_005260a0 1
__attribute__((naked)) void rb_005260a0(void)
{
  __asm__(
    "  movl (%ecx), %eax\n"
    "  testl %eax, %eax\n"
    "  jl .L005260c6\n"
    "  cmpl 0x5cd2f0, %eax\n"
    "  jge .L005260c6\n"
    "  movl 0x5cd2f4, %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L005260c6\n"
    "  leal (%eax, %eax, 4), %eax\n"
    "  leal (%eax, %eax, 4), %eax\n"
    "  leal (%eax, %eax, 4), %eax\n"
    "  leal (%ecx, %eax, 8), %ecx\n"
    "  jmp .L005260c8\n"
    ".L005260c6:\n"
    "  xorl %ecx, %ecx\n"
    ".L005260c8:\n"
    "  movl 4(%esp), %eax\n"
    "  movl 0x10c(%ecx), %edx\n"
    "  movl %edx, (%eax)\n"
    "  movl 0x110(%ecx), %ecx\n"
    "  movl %ecx, 4(%eax)\n"
    "  retl $4\n"
  );
}
