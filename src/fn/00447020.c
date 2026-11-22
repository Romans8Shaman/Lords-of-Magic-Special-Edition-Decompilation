/* Rebuilt from lomse.exe op_canupgradebuilding_getresourcesinfo @ 0x00447020 (821 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cd31c (*(undefined *)0x005cd31c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0043d300 ((int * (__thiscall *)(void *, int, int, int))0x0043d300)
#define FUN_0043e7b0 ((undefined4 (__fastcall *)(int))0x0043e7b0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_building_or_city_00556710 (*(char (*)[])0x00556710)

#define LOM_SELF_00447020 1
void __cdecl rb_00447020(void *vm)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *this;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_piStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_auStack_8[2];
#define piStack_10 (*(_t_piStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x8))
  
  this = vm;
  piVar9 = (int *)0x0;
  puVar8 = (undefined *)0x0;
  bVar2 = false;
  bVar4 = false;
  bVar1 = false;
  bVar3 = false;
  FUN_0040adb0(vm,auStack_8);
  iVar5 = FUN_004026a0(auStack_8,(uint *)&vm,&uStack_c,(undefined4 *)&piStack_10);
  if (iVar5 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    bVar2 = false;
  }
  else {
    piVar6 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
    piStack_10 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
    if (piVar6 == (int *)0x0) {
      if (piStack_10 == (int *)0x0) {
        FUN_004d41c0(this,s_no_building_or_city_00556710);
      }
      else {
        iVar5 = ((undefined4 (__thiscall *)(__typeof__(piStack_10)))(**(code **)(*piStack_10 + 0x3c)))(piStack_10);
        piVar6 = piStack_10;
        if ((iVar5 < 0) || (0xf < iVar5)) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = &DAT_005af194 + iVar5 * 0x1d84;
        }
        if ((puVar8 == (undefined *)0x0) ||
           (piVar9 = FUN_0043d300(&DAT_005cd31c,0,(int)*(short *)((int)piStack_10 + 0xce),
                                  piStack_10[0x35] + 1), piVar9 == (int *)0x0)) goto LAB_0044724b;
        bVar1 = piVar9[3] <= (int)((piVar6[0x38] & (piVar6[0x38] < 0) - 1) * 0x100);
      }
    }
    else {
      iVar5 = ((undefined4 (__thiscall *)(__typeof__(piVar6)))(**(code **)(*piVar6 + 0x3c)))(piVar6);
      if ((iVar5 < 0) || (0xf < iVar5)) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = &DAT_005af194 + iVar5 * 0x1d84;
      }
      if (((puVar8 == (undefined *)0x0) ||
          (piVar9 = FUN_0043d300(&DAT_005cd31c,piVar6[0x16],(int)*(short *)((int)piVar6 + 0x56),
                                 piVar6[0x17] + 1), piVar9 == (int *)0x0)) ||
         (iVar5 = FUN_0043e7b0((int)piVar6), iVar5 == 0)) goto LAB_0044724b;
      bVar1 = piVar9[3] <=
              (int)((*(uint *)(iVar5 + 0xe0) & ((int)*(uint *)(iVar5 + 0xe0) < 0) - 1) * 0x100);
    }
    if (*(int *)(puVar8 + 0xd04) < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(puVar8 + 0xd04) >> 8;
    }
    bVar2 = piVar9[5] <= iVar5 * 0x100;
    if (*(int *)(puVar8 + 0xcfc) < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(puVar8 + 0xcfc) >> 8;
    }
    bVar3 = piVar9[4] <= iVar5 * 0x100;
    if (*(int *)(puVar8 + 0xd08) < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(puVar8 + 0xd08) >> 8;
    }
    bVar4 = piVar9[6] <= iVar5 * 0x100;
  }
LAB_0044724b:
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x50);
    iVar7 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar7;
    *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
    *(uint *)(iVar5 + 4 + iVar7 * 8) = -(uint)bVar2;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x50);
    iVar7 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar7;
    *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
    *(uint *)(iVar5 + 4 + iVar7 * 8) = -(uint)bVar3;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x50);
    iVar7 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar7;
    *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
    *(uint *)(iVar5 + 4 + iVar7 * 8) = -(uint)bVar4;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar7 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar7;
  iVar5 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
  *(uint *)(iVar5 + 4 + iVar7 * 8) = -(uint)bVar1;
  return;
#undef piStack_10
#undef uStack_c
#undef auStack_8
}
