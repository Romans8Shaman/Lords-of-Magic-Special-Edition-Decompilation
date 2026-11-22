/* Rebuilt from lomse.exe FUN_00402aa0 @ 0x00402aa0 (761 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f1e60 ((undefined4 (__fastcall *)(int *))0x004f1e60)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00402aa0 1
void __thiscall rb_00402aa0(void *this,void *param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_4;
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x4))
  
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (this_00 == (void *)0x0) {
    FUN_004010d0(this,(int)param_1);
    FUN_00401730(param_1);
    return;
  }
  iVar5 = FUN_00407d50((int)this_00);
  if ((((iVar5 == 0) && (*(int *)((int)this_00 + 0x48) != *(int *)((int)param_1 + 0x48))) &&
      (iVar5 = FUN_005071c0(this_00,*(int *)((int)param_1 + 0x48)), iVar5 != 0)) &&
     ((iVar5 = FUN_00420620((int)this_00), iVar5 == 0 || (iVar5 = FUN_00458170(), iVar5 == 0)))) {
    FUN_004a8960(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)((int)this_00 + 0x1c));
    iVar5 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)((int)this_00 + 0x1c));
    if (iVar5 != 8) {
      if (*(int *)((int)param_1 + 0x44) != iVar5) {
        FUN_004193e0(param_1,iVar5);
        return;
      }
      pfVar1 = (float *)((int)this + 0x1c);
      *(uint *)((int)param_1 + 0xe8) = *(uint *)((int)param_1 + 0xe8) & 0xff7fffff;
      *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 0x2000000;
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
      pvVar4 = DAT_005a7b78;
      if (DAT_005a7d84 == 0) {
        return;
      }
      uVar3 = *(undefined4 *)((int)param_1 + 0x28);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar4);
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar5 = *(int *)((int)pvVar4 + 0x50);
        *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 8) = uVar3;
      }
      pvVar4 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar4);
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar5 = *(int *)((int)pvVar4 + 0x50);
        *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 8) = 0;
      }
      pvVar4 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar4);
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      }
      else {
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        iVar5 = *(int *)((int)pvVar4 + 0x50);
        *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 8) = 2;
      }
      FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
      pvVar4 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar2 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        uVar7 = *(uint *)(*piVar2 + -8 + iVar5 * 8);
        fStack_4 = *(float *)(*piVar2 + -4 + iVar5 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar4);
        uVar7 = 0;
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      }
      uVar7 = uVar7 & 0xff;
      if (uVar7 == 1) {
        *pfVar1 = fStack_4;
      }
      else if (uVar7 == 2) {
        *pfVar1 = __BC(float, (__BC(int, fStack_4) >> 8));
      }
      else if (uVar7 == 4) {
        lVar8 = __ftol((float10)fStack_4);
        *pfVar1 = __BC(float, lVar8);
      }
      else {
        *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
        FUN_004d4550(pvVar4);
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
        *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
      }
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)param_1 + 0x48);
      *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)param_1 + 0x28);
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this_00 + 0x28);
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this_00 + 0x28);
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this_00 + 0x1c);
      FUN_004f1e60((int *)pfVar1);
      return;
    }
  }
  else {
    FUN_004010d0(this,(int)param_1);
  }
  FUN_00401730(param_1);
  return;
#undef fStack_4
}
