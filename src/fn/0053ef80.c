/* Rebuilt from lomse.exe FUN_0053ef80 @ 0x0053ef80 (19 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574dd0 (*(undefined *)0x00574dd0)

#define LOM_SELF_0053ef80 1
void __cdecl rb_0053ef80(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_00574dd0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}
