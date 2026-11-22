/* Rebuilt from lomse.exe FUN_00401d20 @ 0x00401d20 (550 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555148 (*(void * *)0x00555148)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00401020 ((int (__thiscall *)(void *, int))0x00401020)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00401760 ((undefined4 (__stdcall *)(undefined4, int, int))0x00401760)
#define FUN_004019f0 ((undefined4 (__stdcall *)(void *, int, int))0x004019f0)
#define FUN_00407900 ((undefined4 (__fastcall *)(int))0x00407900)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004094d0 ((undefined4 (__thiscall *)(void *, void *, int))0x004094d0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)
#define FUN_00532820 ((undefined4 (__thiscall *)(void *, int, float, int, float, float))0x00532820)

#define LOM_SELF_00401d20 1
void __thiscall rb_00401d20(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  
  this_00 = param_1;
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    param_1 = (void *)0x1;
    pvVar2 = DAT_00555148;
  }
  else {
    param_1 = (void *)FUN_00420600((int)param_1);
    pvVar2 = param_1;
  }
  iVar1 = FUN_00401020(this_00,(int)pvVar2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this_00 + 0x1c);
  pvVar2 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if (pvVar2 == (void *)0x0) {
LAB_00401dcd:
    pvVar2 = (void *)FUN_00401760(this_00,*(int *)((int)this + 8),iVar1);
    if (pvVar2 == (void *)0x0) goto LAB_00401f36;
  }
  else {
    iVar3 = FUN_00407d50((int)pvVar2);
    if ((((iVar3 != 0) || (*(int *)((int)pvVar2 + 0x48) == *(int *)((int)this_00 + 0x48))) ||
        ((iVar3 = FUN_00420620((int)pvVar2), iVar3 != 0 && (iVar3 = FUN_00458170(), iVar3 != 0))))
       || ((iVar3 = FUN_005071c0(pvVar2,*(int *)((int)this_00 + 0x48)), iVar3 == 0 ||
           (iVar3 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 8),*(int *)((int)pvVar2 + 0x1c))
           , iVar1 < iVar3)))) {
      pvVar2 = (void *)0x0;
    }
    if (pvVar2 == (void *)0x0) goto LAB_00401dcd;
  }
  iVar1 = FUN_00420620((int)pvVar2);
  if (((iVar1 == 0) || (iVar1 = FUN_00458170(), iVar1 == 0)) &&
     (iVar1 = FUN_005071c0(pvVar2,*(int *)((int)this_00 + 0x48)), iVar1 != 0)) {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)pvVar2 + 0x28);
    iVar1 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)((int)pvVar2 + 0x1c));
    iVar3 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)((int)pvVar2 + 0x1c));
    if ((iVar3 != 8) && (iVar1 <= (int)param_1)) {
      iVar4 = FUN_004205e0((int)this_00);
      if (iVar4 == 0) {
        iVar1 = FUN_004019f0(this_00,(int)pvVar2,iVar3);
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
          fVar7 = *(float *)((int)pvVar2 + 0x5a8);
          iVar1 = *(int *)((int)pvVar2 + 0x1c);
          fVar6 = *(float *)((int)this_00 + 0x5a8);
          fVar8 = 0.5;
          iVar3 = *(int *)((int)this_00 + 0x1c);
          this_01 = FUN_004c6fc0();
          iVar1 = FUN_00532820(this_01,iVar3,fVar6,iVar1,fVar7,fVar8);
          if (iVar1 != 0) {
            iVar1 = FUN_004094d0(this,this_00,(int)pvVar2);
            if (iVar1 == 0) {
              FUN_0041efa0(this_00,4);
              FUN_00407900((int)this_00);
              return;
            }
            return;
          }
          goto LAB_00401f36;
        }
      }
      FUN_0041efa0(this_00,3);
      uVar5 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)this_00 + 0x48));
      if (uVar5 == 0) {
        return;
      }
      FUN_00407900((int)this_00);
      return;
    }
  }
LAB_00401f36:
  FUN_00401730(this_00);
  return;
}
