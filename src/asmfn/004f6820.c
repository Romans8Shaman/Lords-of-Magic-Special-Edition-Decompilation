/* FUN_004f6820 @ 0x004f6820 (5 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004f6820 1
__attribute__((naked)) void rb_004f6820(void)
{
  __asm__(
    "  movl (%ecx), %eax\n"
    "  jmp *0x1c(%eax)\n"
  );
}
