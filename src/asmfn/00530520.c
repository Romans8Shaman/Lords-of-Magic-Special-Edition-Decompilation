/* thunk_FUN_00530500 @ 0x00530520 (20 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_00530520 1
__attribute__((naked)) void rb_00530520(void)
{
  __asm__(
    "  movl 0x5a7d8c, %ecx\n"
    "  shll $0xa, %ecx\n"
    "  addl $0x5a7d90, %ecx\n"
    "  jmp *_lom_af_00530520_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_00530520_0: .long 0x00530500\n"
  ".text\n");
