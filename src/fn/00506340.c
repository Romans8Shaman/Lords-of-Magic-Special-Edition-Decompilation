/* Rebuilt from lomse.exe FUN_00506340 @ 0x00506340 (100 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)

#define LOM_SELF_00506340 1
undefined4 __fastcall rb_00506340(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (3 < *(int *)(param_1 + 0x4c)) {
    return 0;
  }
  iVar1 = FUN_004c2330(param_1);
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = FUN_00420580(param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x5d4) != 0)) {
    return 0;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
  if ((uVar2 == 0) || (*(int *)(uVar2 + 0x4c) + *(int *)(param_1 + 0x4c) < 4)) {
    return 1;
  }
  return 0;
}
