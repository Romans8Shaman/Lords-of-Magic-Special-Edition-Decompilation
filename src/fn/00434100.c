/* Rebuilt from lomse.exe FUN_00434100 @ 0x00434100 (872 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005789c0 (*(uint *)0x005789c0)
#define DAT_005789c4 (*(int * *)0x005789c4)
#define DAT_005789c8 (*(uint *)0x005789c8)
#define DAT_005789cc (*(int * *)0x005789cc)
#define DAT_005789d8 (*(uint *)0x005789d8)
#define DAT_005789dc (*(int * *)0x005789dc)
#define DAT_00578a68 (*(uint *)0x00578a68)
#define DAT_00578a6c (*(int * *)0x00578a6c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_00421960 ((int (__thiscall *)(void *))0x00421960)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_00427e40 ((undefined4 (__fastcall *)(int))0x00427e40)
#define FUN_004298a0 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x004298a0)
#define FUN_00432be0 ((undefined4 (__fastcall *)(short *))0x00432be0)
#define FUN_00440e90 ((undefined4 (__fastcall *)(int))0x00440e90)
#define FUN_00451970 ((undefined4 (__fastcall *)(int))0x00451970)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_0050fe80 ((undefined4 (__fastcall *)(int))0x0050fe80)
#define FUN_005221f0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x005221f0)

#define LOM_SELF_00434100 1
undefined4 __thiscall rb_00434100(void *this)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *pfVar8;
  undefined4 *pfVar9;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_1c;
  typedef undefined4 _t_local_18;
  typedef undefined4 _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef uint _t_local_8[2];
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
  
  pvVar6 = DAT_005a7b78;
  local_1c = 0;
  switch(*(undefined1 *)((int)this + 4)) {
  case 1:
    sVar1 = *(short *)this;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
      iVar7 = *(int *)((int)pvVar6 + 0x50);
      *(undefined4 *)(iVar7 + iVar2 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar2 * 8) = (int)sVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_00578a68,DAT_00578a6c);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_18;
    pfVar8 = &local_14;
    break;
  case 2:
    sVar1 = *(short *)this;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
      iVar7 = *(int *)((int)pvVar6 + 0x50);
      *(undefined4 *)(iVar7 + iVar2 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar2 * 8) = (int)sVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005789c8,DAT_005789cc);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 3:
    sVar1 = *(short *)this;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
      iVar7 = *(int *)((int)pvVar6 + 0x50);
      *(undefined4 *)(iVar7 + iVar2 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar2 * 8) = (int)sVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005789c0,DAT_005789c4);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 4:
    FUN_0041d1d0(DAT_005a7b78,1,(int)*(short *)this);
    FUN_004d05e0(DAT_005a7b78,DAT_005789d8,DAT_005789dc);
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 5:
    FUN_00432be0(this);
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,0);
    if (uVar4 == 0) {
      return 0;
    }
    uVar5 = FUN_005221f0((int)*(short *)this,(int)*(char *)((int)this + 5));
    return uVar5;
  case 6:
    iVar7 = FUN_004efe80(&DAT_005aee6c,(int)*(short *)this);
    FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar7 + 0x8c),*(int **)(iVar7 + 0x90));
    pvVar6 = DAT_005a7b78;
    FUN_0040adb0(DAT_005a7b78,local_8);
    pfVar9 = &local_14;
    pfVar8 = &local_18;
    break;
  case 7:
    iVar7 = 0;
    piVar3 = (int *)FUN_004298a0(&DAT_005aa12c,(int)*(short *)this,&local_c,&local_10);
    if (piVar3 != (int *)0x0) {
      iVar7 = FUN_00427b80(*piVar3);
    }
    if (iVar7 == 0) {
      return 0;
    }
    uVar5 = FUN_00427e40(iVar7);
    return uVar5;
  case 8:
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,3);
    uVar5 = FUN_00451970(uVar4);
    return uVar5;
  case 9:
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,2);
    uVar5 = FUN_00440e90(uVar4);
    return uVar5;
  case 10:
    FUN_00432be0(this);
    pvVar6 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,0);
    iVar7 = FUN_00421960(pvVar6);
    return iVar7;
  case 0xb:
    uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)*(short *)this,1);
    uVar5 = FUN_0050fe80(uVar4);
    return uVar5;
  default:
    return 0;
  }
  iVar7 = FUN_004026a0(local_8,&local_1c,(uint *)pfVar8,pfVar9);
  if (iVar7 == 0) {
    *(undefined4 *)((int)pvVar6 + 0x90) = 0xe;
    FUN_004d4550(pvVar6);
    *(undefined4 *)((int)pvVar6 + 0x90) = 0;
    *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
    return 0;
  }
  return local_1c;
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
}
