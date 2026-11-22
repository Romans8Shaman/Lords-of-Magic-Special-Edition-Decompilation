/* Rebuilt from lomse.exe op_canaffordbuilding_getresourcesinfo @ 0x00445390 (1171 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cd31c (*(undefined *)0x005cd31c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0043d300 ((int * (__thiscall *)(void *, int, int, int))0x0043d300)
#define FUN_0043e7b0 ((undefined4 (__fastcall *)(int))0x0043e7b0)
#define FUN_00452a50 ((undefined4 (__stdcall *)(int))0x00452a50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0050f7b0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0050f7b0)
#define s_invalid_data_005567d8 (*(char (*)[])0x005567d8)

#define LOM_SELF_00445390 1
void __cdecl rb_00445390(void *vm)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  void *this;
  int iVar4;
  int *piVar5;
  int *this_00;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined * _t_puStack_28;
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_auStack_8[2];
#define puStack_28 (*(_t_puStack_28 *)(_fr + 0x0))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x10))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x14))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x18))
#define piStack_c (*(_t_piStack_c *)(_fr + 0x1c))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x20))
  
  this = vm;
  bVar2 = true;
  uVar7 = 1;
  uStack_24 = 1;
  uStack_14 = 1;
  uStack_10 = 1;
  bVar1 = true;
  bVar3 = 1;
  FUN_0040adb0(vm,auStack_8);
  iVar4 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&puStack_28,(undefined4 *)&piStack_c);
  if (iVar4 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_invalid_data_005567d8);
    bVar1 = bVar2;
    goto LAB_004456e2;
  }
  FUN_0040adb0(this,auStack_8);
  iVar4 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&puStack_28,(undefined4 *)&piStack_c);
  if (iVar4 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar4 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&puStack_28,(undefined4 *)&piStack_c);
    if (iVar4 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar4 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&puStack_28,(undefined4 *)&piStack_c);
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,2);
        piStack_c = piVar5;
        if (piVar5 == (int *)0x0) {
          if ((((uStack_20 == 0xffffffff) ||
               (piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,1), piVar5 == (int *)0x0)) ||
              (iVar4 = FUN_0050f7b0(piVar5,&piStack_c), iVar4 == 0)) ||
             (iVar4 = FUN_00452a50((int)piStack_c), iVar4 == -1)) {
            this_00 = vm;
            puVar8 = puStack_28;
            piVar5 = vm;
          }
          else {
            this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar4,3);
            if (this_00 != (int *)0x0) {
              iVar4 = ((undefined4 (__thiscall *)(__typeof__(piVar5)))(**(code **)(*piVar5 + 0x3c)))(piVar5);
              iVar6 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
              if (iVar4 == iVar6) {
                iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
                if ((iVar4 < 0) || (0xf < iVar4)) {
                  puVar8 = (undefined *)0x0;
                }
                else {
                  puVar8 = &DAT_005af194 + iVar4 * 0x1d84;
                }
                if ((int)vm < 0) {
                  vm = (void *)(int)*(short *)((int)this_00 + 0xce);
                }
                piVar5 = FUN_0043d300(&DAT_005cd31c,uStack_18,(int)vm,uStack_1c);
                if (piVar5 == (int *)0x0) {
                  bVar3 = 0;
                  uVar7 = uStack_24;
                  goto LAB_004456e2;
                }
                goto LAB_00445685;
              }
            }
            puVar8 = puStack_28;
            piVar5 = vm;
          }
        }
        else {
          iVar4 = ((undefined4 (__thiscall *)(__typeof__(piVar5)))(**(code **)(*piVar5 + 0x3c)))(piVar5);
          if ((iVar4 < 0) || (0xf < iVar4)) {
            puStack_28 = (undefined *)0x0;
          }
          else {
            puStack_28 = &DAT_005af194 + iVar4 * 0x1d84;
          }
          this_00 = (int *)FUN_0043e7b0((int)piVar5);
          if (this_00 == (int *)0x0) {
            bVar3 = 0;
            bVar1 = bVar2;
            goto LAB_004456e2;
          }
          if ((int)vm < 0) {
            vm = (void *)this_00[0x20];
          }
          piVar5 = FUN_0043d300(&DAT_005cd31c,uStack_18,(int)vm,uStack_1c);
          if (piVar5 == (int *)0x0) {
            bVar3 = 0;
            goto LAB_004456e2;
          }
          iVar4 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
          iVar6 = ((undefined4 (__thiscall *)(__typeof__(piStack_c)))(**(code **)(*piStack_c + 0x3c)))(piStack_c);
          if (iVar4 != iVar6) {
            bVar3 = 0;
            uVar7 = uStack_24;
            goto LAB_004456e2;
          }
          puVar8 = puStack_28;
        }
LAB_00445685:
        uStack_10 = (uint)(piVar5[3] <= this_00[0x38] * 0x100);
        bVar1 = piVar5[4] <= *(int *)(puVar8 + 0xcfc);
        uStack_24 = (uint)(piVar5[5] <= *(int *)(puVar8 + 0xd04));
        uStack_14 = (uint)(piVar5[6] <= *(int *)(puVar8 + 0xd08));
        uVar7 = uStack_24;
        goto LAB_004456e2;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  FUN_004d41c0(this,s_invalid_data_005567d8);
  bVar1 = bVar2;
LAB_004456e2:
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)(uVar7 != 0);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)bVar1;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)(uStack_14 != 0);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)(uStack_10 != 0);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar6 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar6;
  iVar4 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
  *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)bVar3;
  return;
#undef puStack_28
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef piStack_c
#undef auStack_8
}
