/* Rebuilt from lomse.exe FUN_004b7940 @ 0x004b7940 (151 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004b79e0 ((undefined4 (__thiscall *)(void *, int, undefined4))0x004b79e0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define s_Error__unexpected_player_deleted_0055d370 (*(char (*)[])0x0055d370)

#define LOM_SELF_004b7940 1
undefined4 __thiscall rb_004b7940(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if ((0 < param_1) && (param_1 <= *(int *)((int)this + 0x100))) {
    iVar1 = FUN_004b7dd0((int)this);
    if (param_1 != iVar1) {
      *(undefined4 *)((int)this + param_1 * 0x25 + 8) = 1;
      iVar1 = *(int *)((int)this + 0x100);
      iVar2 = 0;
      if (0 < iVar1) {
        piVar4 = (int *)((int)this + 0x2d);
        do {
          if (*piVar4 == 0) break;
          iVar2 = iVar2 + 1;
          piVar4 = (int *)((int)piVar4 + 0x25);
        } while (iVar2 < iVar1);
      }
      if (iVar2 < iVar1) {
        FUN_004b79e0(&DAT_005aa12c,param_1,iVar2 + 1);
        return 1;
      }
      uVar3 = FUN_004b7dd0((int)this);
      FUN_004b79e0(&DAT_005aa12c,param_1,uVar3);
      return 1;
    }
  }
  FUN_005047d0(s_Error__unexpected_player_deleted_0055d370);
  return 1;
}
