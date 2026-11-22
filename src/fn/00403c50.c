/* Rebuilt from lomse.exe FUN_00403c50 @ 0x00403c50 (218 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00403780 ((int (__stdcall *)(int))0x00403780)
#define FUN_00403880 ((undefined4 (__thiscall *)(void *, int *))0x00403880)
#define FUN_00403920 ((undefined4 (__thiscall *)(void *, int *))0x00403920)
#define FUN_00403a90 ((undefined4 (__thiscall *)(void *, void *))0x00403a90)
#define FUN_00403c30 ((undefined4 (__thiscall *)(void *, void *))0x00403c30)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_00403c50 1
void __thiscall rb_00403c50(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if ((uVar1 == 0) || (iVar2 = FUN_00407d50(uVar1), iVar2 != 0)) {
    FUN_00403c30(this,param_1);
    return;
  }
  if (*(int *)((int)this + 0xc) < 0) {
    iVar2 = FUN_00403780(*(int *)((int)this + 4));
    *(int *)((int)this + 0xc) = iVar2;
    if (-1 < iVar2) {
      FUN_00403920(this,param_1);
      return;
    }
    iVar2 = FUN_00403880(this,param_1);
    if (iVar2 == 0) {
      FUN_00403a90(this,param_1);
      return;
    }
    return;
  }
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if ((((uVar1 == 0) || (iVar2 = FUN_00407d50(uVar1), iVar2 != 0)) ||
      (iVar2 = FUN_00506110(param_1,uVar1), iVar2 == 0)) ||
     (*(int *)(uVar1 + 0x74) != *(int *)((int)this + 4))) {
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    return;
  }
  FUN_00403920(this,param_1);
  return;
}
