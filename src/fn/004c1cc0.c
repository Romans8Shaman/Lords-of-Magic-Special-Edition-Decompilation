/* Rebuilt from lomse.exe FUN_004c1cc0 @ 0x004c1cc0 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_004c1cc0 1
undefined4 __fastcall rb_004c1cc0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x5b4) != -1) {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
    if ((uVar1 != 0) && (0 < *(int *)(uVar1 + 0x5bc))) {
      return 1;
    }
  }
  return 0;
}
