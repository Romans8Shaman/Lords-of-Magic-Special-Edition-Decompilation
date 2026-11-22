/* Rebuilt from lomse.exe FUN_00403180 @ 0x00403180 (500 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00401760 ((undefined4 (__stdcall *)(undefined4, int, int))0x00401760)
#define FUN_00406140 ((int (__stdcall *)(int, int))0x00406140)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_00409b90 ((undefined4 (__fastcall *)(int))0x00409b90)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041cdf0 ((undefined4 (__thiscall *)(void *, int *))0x0041cdf0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f20e0 ((undefined4 (__fastcall *)(int *))0x004f20e0)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_00403180 1
void __thiscall rb_00403180(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  uVar1 = FUN_0047c9e0(&DAT_005aa12c,param_1[0x12]);
  if (uVar1 != 0) {
    iVar2 = FUN_00409b90((int)param_1);
    if (iVar2 != 0) {
      pvVar3 = (void *)FUN_00401760(param_1,param_1[7],4);
      if (pvVar3 != (void *)0x0) {
        iVar2 = FUN_00420620((int)pvVar3);
        if (iVar2 != 0) {
          iVar2 = FUN_00458170();
          if (iVar2 != 0) goto LAB_004031fb;
        }
        iVar2 = FUN_005071c0(pvVar3,param_1[0x12]);
        if (iVar2 != 0) {
          FUN_004010d0(this,(int)param_1);
          *(undefined4 *)this = 0x30;
          *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)pvVar3 + 0x28);
          return;
        }
      }
    }
  }
LAB_004031fb:
  iVar2 = FUN_004efe80(&DAT_005aee6c,*(int *)((int)this + 0x1c));
  if (iVar2 == 0) {
    FUN_004010d0(this,(int)param_1);
    return;
  }
  iVar4 = FUN_0041cdf0(param_1,(int *)((int)this + 0x1c));
  if (iVar4 == 0) {
    FUN_004010d0(this,(int)param_1);
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (pvVar3 == (void *)0x0) {
LAB_00403293:
    iVar4 = FUN_00406140(param_1[0x12],param_1[10]);
    *(int *)((int)this + 4) = iVar4;
    pvVar3 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar4,0);
    if (pvVar3 != (void *)0x0) {
      iVar4 = FUN_00506110(param_1,(int)pvVar3);
      if (iVar4 != 0) goto LAB_004032cf;
    }
    FUN_004010d0(this,(int)param_1);
  }
  else {
    iVar4 = FUN_00407d50((int)pvVar3);
    if ((iVar4 != 0) || (*(int *)((int)pvVar3 + 0x48) == param_1[0x12])) goto LAB_00403293;
    iVar4 = FUN_00420620((int)pvVar3);
    if (iVar4 != 0) {
      iVar4 = FUN_00458170();
      if (iVar4 != 0) goto LAB_00403293;
    }
    iVar4 = FUN_005071c0(pvVar3,param_1[0x12]);
    if (iVar4 == 0) goto LAB_00403293;
LAB_004032cf:
    iVar4 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)pvVar3 + 0x1c));
    uVar1 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)pvVar3 + 0x1c));
    if (uVar1 != 8) {
      if ((0 < iVar2) && (iVar2 < iVar4)) {
        FUN_00407fd0(this,param_1,(int)pvVar3,iVar4,uVar1,iVar2,*(int *)((int)pvVar3 + 0x1c));
        return;
      }
      if (param_1[0x11] != uVar1) {
        FUN_004193e0(param_1,uVar1);
        return;
      }
      iVar2 = FUN_0041cdf0(param_1,(int *)((int)this + 0x1c));
      if (iVar2 == 0) {
        FUN_004010d0(this,(int)param_1);
        return;
      }
      FUN_004f20e0((int *)((int)this + 0x1c));
      return;
    }
  }
  FUN_00401730(param_1);
  return;
}
