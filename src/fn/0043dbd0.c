/* Rebuilt from lomse.exe FUN_0043dbd0 @ 0x0043dbd0 (25 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0043dbd0 1
uint __fastcall rb_0043dbd0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x7c) == -1) {
    return 0;
  }
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x7c),3);
  return uVar1;
}
