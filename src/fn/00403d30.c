/* Rebuilt from lomse.exe FUN_00403d30 @ 0x00403d30 (222 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00403c30 ((undefined4 (__thiscall *)(void *, void *))0x00403c30)
#define FUN_004045a0 ((undefined4 (__thiscall *)(void *, void *))0x004045a0)
#define FUN_00404e60 ((undefined4 (__thiscall *)(void *, int, undefined4))0x00404e60)
#define FUN_00404f90 ((undefined4 (__stdcall *)(int, int))0x00404f90)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_00403d30 1
void __thiscall rb_00403d30(void *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (((uVar1 == 0) || (iVar2 = FUN_00407d50(uVar1), iVar2 != 0)) ||
     (iVar2 = FUN_00506110(param_1,uVar1), iVar2 == 0)) {
    FUN_00403c30(this,param_1);
    return;
  }
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != -1) {
    if (iVar2 != *(int *)(uVar1 + 0x1c)) {
      iVar2 = FUN_004a8960(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),iVar2);
      if (2 < iVar2) {
        *(undefined4 *)((int)this + 8) = 0xffffffff;
        FUN_004045a0(this,param_1);
        return;
      }
      FUN_00404f90((int)param_1,uVar1);
    }
    FUN_004045a0(this,param_1);
    return;
  }
  *(int *)((int)this + 8) = *(int *)(uVar1 + 0x1c);
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 2;
  iVar2 = FUN_00404e60(&DAT_005aa12c,*(int *)((int)param_1 + 0x28),*(undefined4 *)((int)this + 8));
  if (iVar2 == 0) {
    *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) & 0xfffffffd;
    FUN_00404f90((int)param_1,uVar1);
    return;
  }
  return;
}
