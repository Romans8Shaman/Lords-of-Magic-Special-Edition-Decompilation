/* Rebuilt from lomse.exe FUN_00403880 @ 0x00403880 (155 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)

#define LOM_SELF_00403880 1
undefined4 __thiscall rb_00403880(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_1[7] == *(int *)(uVar1 + 0x1c)) {
    return 0;
  }
  uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)(uVar1 + 0x1c));
  if (uVar2 == 8) {
    return 0;
  }
  iVar3 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)(uVar1 + 0x1c));
  if (iVar3 < 3) {
    FUN_00401730(param_1);
    return 0;
  }
  FUN_00407fd0(this,param_1,uVar1,iVar3,uVar2,3,*(int *)(uVar1 + 0x1c));
  return 1;
}
