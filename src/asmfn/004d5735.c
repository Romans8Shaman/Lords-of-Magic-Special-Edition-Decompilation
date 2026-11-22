/* FUN_004d5735 @ 0x004d5735 (7 bytes): ASM FALLBACK (no behaviour-verified C yet).
 * Same instruction sequence as lomse.exe; jmp retargeted to mid-entry
 * rb_004d5399 in already-fn 004d4b10 (not the original mid VA).
 */
#include "lom.h"
#define LOM_SELF_004d5735 1
extern void rb_004d5399(void);
__attribute__((naked)) void rb_004d5735(void)
{
  __asm__(
    "  movl (%esi), %eax\n"
    "  jmp _rb_004d5399\n"
  );
}
