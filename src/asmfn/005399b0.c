/* FUN_005399b0 @ 0x005399b0 (7 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_005399b0 1
__attribute__((naked)) void rb_005399b0(void)
{
  __asm__(
    "  popl %eax\n"
    "  popl %ecx\n"
    "  xchgl %eax, (%esp)\n"
    "  jmp *%eax\n"
  );
}
