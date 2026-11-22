/* FUN_0047e930 @ 0x0047e930 (69 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_0047e930 1
__attribute__((naked)) void rb_0047e930(void)
{
  __asm__(
    "  movb 0x583400, %al\n"
    "  testb $1, %al\n"
    "  jne .L0047e974\n"
    "  movb %al, %dl\n"
    "  movl 0x58340c, %eax\n"
    "  orb $1, %dl\n"
    "  testl %eax, %eax\n"
    "  movb %dl, 0x583400\n"
    "  je .L0047e96a\n"
    ".L0047e94d:\n"
    "  movl %eax, %ecx\n"
    "  movl 0x3c(%eax), %eax\n"
    "  testl %ecx, %ecx\n"
    "  movl %eax, 0x58340c\n"
    "  je .L0047e966\n"
    "  movl (%ecx), %eax\n"
    "  pushl $1\n"
    "  call *(%eax)\n"
    "  movl 0x58340c, %eax\n"
    ".L0047e966:\n"
    "  testl %eax, %eax\n"
    "  jne .L0047e94d\n"
    ".L0047e96a:\n"
    "  movl $0, 0x58340c\n"
    ".L0047e974:\n"
    "  retl \n"
  );
}
