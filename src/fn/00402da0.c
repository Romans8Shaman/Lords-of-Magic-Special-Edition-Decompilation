/* Rebuilt from lomse.exe FUN_00402da0 @ 0x00402da0 (989 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555148 (*(int *)0x00555148)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00401760 ((undefined4 (__stdcall *)(undefined4, int, int))0x00401760)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00407fd0 ((undefined4 (__thiscall *)(void *, int *, int, int, uint, undefined4, int))0x00407fd0)
#define FUN_0040a840 ((undefined4 (__stdcall *)(int, int, int))0x0040a840)
#define FUN_0040a8b0 ((int (__stdcall *)(int, int, int))0x0040a8b0)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_004205e0 ((undefined4 (__fastcall *)(int))0x004205e0)
#define FUN_00420600 ((undefined4 (__fastcall *)(int))0x00420600)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f1e60 ((undefined4 (__fastcall *)(int *))0x004f1e60)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00402da0 1
void __thiscall rb_00402da0(void *this,int *param_1)

{
  float *pfVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  void *this_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 x;
  longlong lVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  iVar4 = FUN_004205e0((int)param_1);
  if (iVar4 == 0) {
    iVar4 = DAT_00555148;
  }
  else {
    iVar4 = FUN_00420600((int)param_1);
  }
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if ((((this_00 == (void *)0x0) || (iVar5 = FUN_00407d50((int)this_00), iVar5 != 0)) ||
      (*(int *)((int)this_00 + 0x48) == param_1[0x12])) ||
     ((iVar5 = FUN_005071c0(this_00,param_1[0x12]), iVar5 == 0 ||
      ((iVar5 = FUN_00420620((int)this_00), iVar5 != 0 && (iVar5 = FUN_00458170(), iVar5 != 0))))))
  {
    FUN_004010d0(this,(int)param_1);
  }
  else {
    x = FUN_004a89d0(0x5ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
    lVar8 = __ftol(x);
    iVar5 = (int)lVar8;
    uVar6 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
    if (uVar6 != 8) {
      if (6 < iVar5) {
        iVar5 = FUN_00407fd0(this,param_1,(int)this_00,iVar5,uVar6,6,*(int *)((int)this_00 + 0x1c));
        if (iVar5 != 0) {
          return;
        }
        iVar4 = FUN_00401760(param_1,*(int *)((int)this + 8),iVar4);
        if (iVar4 == 0) {
          return;
        }
        *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar4 + 0x28);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar4 + 0x28);
        *(undefined4 *)((int)this + 8) = 0xffffffff;
        *(undefined4 *)this = 2;
        return;
      }
      iVar4 = FUN_0040a840((int)param_1,(int)this_00,param_1[0x11]);
      if (iVar4 == 0) {
        iVar4 = FUN_0040a8b0((int)param_1,(int)this_00,uVar6);
        if (iVar4 == -1) {
          FUN_00407fd0(this,param_1,(int)this_00,iVar5,uVar6,1,*(int *)((int)this_00 + 0x1c));
          return;
        }
        if (param_1[0x11] != iVar4) {
          FUN_004193e0(param_1,iVar4);
          return;
        }
      }
      param_1[0x3a] = param_1[0x3a] & 0xffbfffff;
      pfVar1 = (float *)((int)this + 0x1c);
      param_1[0xc] = param_1[0xc] | 0x2000000;
      *pfVar1 = __BC(float, (int)0xffffffff);
      *(undefined4 *)((int)this + 0x20) = 0xffffffff;
      *(undefined4 *)((int)this + 0x24) = 0xffffffff;
      *(undefined4 *)((int)this + 0x28) = 0xffffffff;
      *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
      *(undefined4 *)((int)this + 0x30) = 0xffffffff;
      *(undefined4 *)((int)this + 0x34) = 0xffffffff;
      *(undefined4 *)((int)this + 0x38) = 0xffffffff;
      *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
      *(undefined4 *)((int)this + 0x40) = 0xffffffff;
      *(undefined4 *)((int)this + 0x44) = 0xffffffff;
      *(undefined4 *)((int)this + 0x48) = 0xffffffff;
      *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
      *(undefined4 *)((int)this + 0x50) = 0xffffffff;
      *(undefined4 *)((int)this + 0x54) = 0xffffffff;
      if (DAT_005a7d84 == 0) {
        return;
      }
      *(int *)((int)this + 0x3c) = param_1[0x12];
      *(int *)((int)this + 0x40) = param_1[10];
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this_00 + 0x28);
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this_00 + 0x28);
      *(undefined4 *)((int)this + 0x30) = 0;
      pvVar3 = DAT_005a7b78;
      iVar4 = param_1[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
        iVar5 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
        *(int *)(iVar5 + 4 + iVar7 * 8) = iVar4;
      }
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar4 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = 0;
      }
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar4 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = 1;
      }
      FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar2 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
        uVar6 = *(uint *)(*piVar2 + -8 + iVar4 * 8);
        fStack_4 = *(float *)(*piVar2 + -4 + iVar4 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar3);
        uVar6 = 0;
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1) {
        *pfVar1 = fStack_4;
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this_00 + 0x1c);
        FUN_004f1e60((int *)pfVar1);
        return;
      }
      if (uVar6 == 2) {
        *pfVar1 = __BC(float, (__BC(int, fStack_4) >> 8));
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this_00 + 0x1c);
        FUN_004f1e60((int *)pfVar1);
        return;
      }
      if (uVar6 == 4) {
        lVar8 = __ftol((float10)fStack_4);
        *pfVar1 = __BC(float, lVar8);
        *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this_00 + 0x1c);
        FUN_004f1e60((int *)pfVar1);
        return;
      }
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this_00 + 0x1c);
      FUN_004f1e60((int *)pfVar1);
      return;
    }
  }
  FUN_00401730(param_1);
  return;
#undef fStack_4
}
