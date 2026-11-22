/* Rebuilt from lomse.exe FUN_0052bd80 @ 0x0052bd80 (120 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6180 ((int (__thiscall *)(void *, int, int))0x004a6180)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_0052bd80 1
int __stdcall rb_0052bd80(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004a6e60(&DAT_005ae958,param_1,param_2);
  iVar1 = FUN_004f6000(&DAT_005ae974,iVar1);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 1) {
      if (*(int *)(iVar1 + 0x54) < 0) {
        iVar1 = 0;
      }
    }
    else if (*(int *)(iVar1 + 4) == 7) {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(iVar1 + 0x44),0);
      if (uVar2 != 0) {
        return *(int *)(uVar2 + 0x1c);
      }
    }
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 0x1c);
    }
  }
  iVar1 = FUN_004a6180(&DAT_005ae958,param_1,param_2);
  return iVar1;
}
