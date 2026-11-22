/* Rebuilt from lomse.exe FUN_004045a0 @ 0x004045a0 (325 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004019f0 ((undefined4 (__stdcall *)(void *, int, int))0x004019f0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00408a60 ((undefined4 (__thiscall *)(void *, void *, int))0x00408a60)
#define FUN_004094d0 ((undefined4 (__thiscall *)(void *, void *, int))0x004094d0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_004045a0 1
void __thiscall rb_004045a0(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = param_1;
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    param_1 = (void *)0x1;
  }
  else {
    param_1 = (void *)FUN_00420600((int)param_1);
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (uVar2 != 0) {
    iVar1 = FUN_00407d50(uVar2);
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(uVar2 + 0x48) == *(int *)((int)this_00 + 0x48)) {
      return;
    }
    iVar1 = FUN_00506110(this_00,uVar2);
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)(uVar2 + 0x1c));
  iVar3 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)(uVar2 + 0x1c));
  if ((iVar3 != 8) && (iVar1 <= (int)param_1)) {
    iVar4 = FUN_004205e0((int)this_00);
    if (iVar4 == 0) {
      iVar1 = FUN_004019f0(this_00,uVar2,iVar3);
      if (iVar1 == 0) {
        return;
      }
    }
    else {
      if (*(int *)((int)this_00 + 0x44) != iVar3) {
        FUN_004193e0(this_00,iVar3);
        return;
      }
      if (1 < iVar1) {
        uVar5 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)this_00 + 0x48));
        if (uVar5 == 0) {
          FUN_0041efa0(this_00,4);
          return;
        }
        iVar1 = FUN_00408a60(this,this_00,uVar2);
        if (iVar1 == 0) {
          return;
        }
        iVar1 = FUN_004094d0(this,this_00,uVar2);
        if (iVar1 == 0) {
          FUN_0041efa0(this_00,4);
          return;
        }
        return;
      }
    }
    FUN_0041efa0(this_00,3);
  }
  return;
}
