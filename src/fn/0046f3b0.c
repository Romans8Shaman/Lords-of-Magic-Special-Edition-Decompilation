/* Rebuilt from lomse.exe FUN_0046f3b0 @ 0x0046f3b0 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005831dc (*(int *)0x005831dc)
#define FUN_004b7d40 ((undefined4 (__fastcall *)(int))0x004b7d40)
#define FUN_004b8b90 ((undefined4 (__fastcall *)(int))0x004b8b90)

#define LOM_SELF_0046f3b0 1
void __fastcall rb_0046f3b0(int param_1)

{
  FUN_004b8b90(param_1);
  if (DAT_005831dc != 0) {
    *(undefined4 *)(param_1 + 0x394) = 0;
  }
  FUN_004b7d40(param_1);
  return;
}
