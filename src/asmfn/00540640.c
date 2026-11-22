/* FUN_00540640 @ 0x00540640 (77 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00540640 1
__attribute__((naked)) void rb_00540640(void)
{
  __asm__(
    "  movl 4(%esp), %eax\n"
    "  movl $0, 0x5d5544\n"
    "  cmpl $-2, %eax\n"
    "  jne .L00540663\n"
    "  movl $1, 0x5d5544\n"
    "  jmp *0x54d158\n"
    ".L00540663:\n"
    "  cmpl $-3, %eax\n"
    "  jne .L00540678\n"
    "  movl $1, 0x5d5544\n"
    "  jmp *0x54d15c\n"
    ".L00540678:\n"
    "  cmpl $-4, %eax\n"
    "  jne .L0054068c\n"
    "  movl 0x5d5320, %eax\n"
    "  movl $1, 0x5d5544\n"
    ".L0054068c:\n"
    "  retl \n"
  );
}
