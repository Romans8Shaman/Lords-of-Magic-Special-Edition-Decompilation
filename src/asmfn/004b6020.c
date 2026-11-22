/* op_netlockgame @ 0x004b6020 (16 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004b6020 1
__attribute__((naked)) void rb_004b6020(void)
{
  __asm__(
    "  movl 0x5d1e84, %ecx\n"
    "  testl %ecx, %ecx\n"
    "  je .L004b602f\n"
    "  movl (%ecx), %eax\n"
    "  jmp *0x58(%eax)\n"
    ".L004b602f:\n"
    "  retl \n"
  );
}
