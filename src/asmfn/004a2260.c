/* thunk_FUN_004a1e10 @ 0x004a2260 (20 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */
#include "lom.h"
#define LOM_SELF_004a2260 1
__attribute__((naked)) void rb_004a2260(void)
{
  __asm__(
    "  movl 0x5a7d8c, %ecx\n"
    "  shll $0xa, %ecx\n"
    "  addl $0x5a8084, %ecx\n"
    "  jmp *_lom_af_004a2260_0\n"
  );
}
__asm__(".data\n"
  "_lom_af_004a2260_0: .long 0x004a1e10\n"
  ".text\n");
