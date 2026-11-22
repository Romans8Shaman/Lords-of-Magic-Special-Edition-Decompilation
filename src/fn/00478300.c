/* Rebuilt from lomse.exe op_toggle_gman_hotkey @ 0x00478300 (19 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00586798 (*(int *)0x00586798)

#define LOM_SELF_00478300 1
void __cdecl rb_00478300(void)

{
  DAT_00586798 = 1 - DAT_00586798;
  return;
}
