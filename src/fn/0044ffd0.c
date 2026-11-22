/* Rebuilt from lomse.exe FUN_0044ffd0 @ 0x0044ffd0 (1109 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_00411760 ((undefined4 (__fastcall *)(int))0x00411760)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00415610 ((undefined4 (__thiscall *)(void *, int))0x00415610)
#define FUN_0043e7b0 ((undefined4 (__fastcall *)(int))0x0043e7b0)
#define FUN_00441350 ((undefined4 (__thiscall *)(void *, uint, undefined4, uint *, int))0x00441350)
#define FUN_00480130 ((undefined4 (__thiscall *)(void *, int, void *, int, int, undefined4, int, undefined4, int *, int *, uint, int))0x00480130)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a4c50 ((uint (__thiscall *)(void *, int))0x004a4c50)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a6f60 ((int (__thiscall *)(void *, int, uint))0x004a6f60)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004a8430 ((undefined4 (__thiscall *)(void *, int))0x004a8430)
#define FUN_004bfd70 ((undefined4 (__thiscall *)(void *, int *))0x004bfd70)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00529200 ((undefined4 (__thiscall *)(void *, int, uint))0x00529200)

#define LOM_SELF_0044ffd0 1
undefined4 __thiscall rb_0044ffd0(void *this,int *param_1)

{
  uint uVar1;
  int *this_00;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined *this_01;
  bool bVar8;
  uchar _fr[0x630] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_628;
  typedef int _t_iStack_624;
  typedef int _t_iStack_620;
  typedef void * _t_local_61c;
  typedef uint _t_local_618;
  typedef int _t_local_614;
  typedef int _t_iStack_610;
  typedef int _t_iStack_60c;
  typedef int _t_local_608;
  typedef int _t_iStack_604;
  typedef undefined4 _t_uStack_600;
  typedef uint _t_auStack_5fc[2];
  typedef int _t_iStack_5f4;
  typedef int _t_iStack_5f0;
  typedef int _t_iStack_5ec;
  typedef undefined4 _t_auStack_5e8[18];
  typedef undefined4 _t_uStack_5a0;
  typedef undefined4 _t_uStack_59c;
  typedef undefined1 _t_auStack_524[1304];
#define pvStack_628 (*(_t_pvStack_628 *)(_fr + 0x0))
#define iStack_624 (*(_t_iStack_624 *)(_fr + 0x4))
#define iStack_620 (*(_t_iStack_620 *)(_fr + 0x8))
#define local_61c (*(_t_local_61c *)(_fr + 0xc))
#define local_618 (*(_t_local_618 *)(_fr + 0x10))
#define local_614 (*(_t_local_614 *)(_fr + 0x14))
#define iStack_610 (*(_t_iStack_610 *)(_fr + 0x18))
#define iStack_60c (*(_t_iStack_60c *)(_fr + 0x1c))
#define local_608 (*(_t_local_608 *)(_fr + 0x20))
#define iStack_604 (*(_t_iStack_604 *)(_fr + 0x24))
#define uStack_600 (*(_t_uStack_600 *)(_fr + 0x28))
#define auStack_5fc (*(_t_auStack_5fc *)(_fr + 0x2c))
#define iStack_5f4 (*(_t_iStack_5f4 *)(_fr + 0x34))
#define iStack_5f0 (*(_t_iStack_5f0 *)(_fr + 0x38))
#define iStack_5ec (*(_t_iStack_5ec *)(_fr + 0x3c))
#define auStack_5e8 (*(_t_auStack_5e8 *)(_fr + 0x40))
#define uStack_5a0 (*(_t_uStack_5a0 *)(_fr + 0x88))
#define uStack_59c (*(_t_uStack_59c *)(_fr + 0x8c))
#define auStack_524 (*(_t_auStack_524 *)(_fr + 0x104))

  local_608 = *param_1;
  uVar1 = param_1[1];
  this_01 = (undefined *)0x0;
  if ((((int)uVar1 < 0) || (DAT_005cd2f0 <= (int)uVar1)) || (DAT_005cd2f4 == 0)) {
    local_614 = 0;
  }
  else {
    local_614 = DAT_005cd2f4 + uVar1 * 1000;
  }
  local_61c = this;
  local_618 = uVar1;
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,local_608,2);
  if (this_00 != (int *)0x0) {
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
    if ((-1 < iVar2) && (iVar2 < 0x10)) {
      this_01 = &DAT_005af194 + iVar2 * 0x1d84;
    }
    FUN_00441350(this_00,uVar1,param_1[2],auStack_5fc,1);
    *(int *)(this_01 + 0xd04) = *(int *)(this_01 + 0xd04) - iStack_5f4;
    *(uint *)(this_01 + 0x15d8) = *(uint *)(this_01 + 0x15d8) | 0x40;
    *(uint *)(this_01 + 0xcfc) = *(int *)(this_01 + 0xcfc) - auStack_5fc[0];
    *(uint *)(this_01 + 0x15d8) = *(uint *)(this_01 + 0x15d8) | 0x40;
    *(int *)(this_01 + 0xd08) = *(int *)(this_01 + 0xd08) - iStack_5f0;
    *(uint *)(this_01 + 0x15d8) = *(uint *)(this_01 + 0x15d8) | 0x40;
    iVar2 = FUN_0043e7b0((int)this_00);
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar2 + 0xe0) - (iStack_5ec >> 8);
      *(int *)(iVar2 + 0xe0) = iVar7;
      if (iVar7 < 0) {
        pvStack_628 = (void *)-iVar7;
        *(undefined4 *)(iVar2 + 0xe0) = 0;
        FUN_004bfd70(this_01,(int *)&pvStack_628);
      }
      iStack_620 = param_1[3];
      if (iStack_620 == -1) {
        iStack_620 = this_00[7];
      }
      iVar7 = iStack_620 % DAT_005ae9c4;
      pvVar3 = (void *)(iStack_620 / DAT_005ae9c4);
      pvVar6 = (void *)((int)local_61c + 0x482c);
      pvStack_628 = pvVar3;
      iStack_624 = iVar7;
      iVar2 = FUN_004a8430(pvVar6,iStack_620);
      if (iVar2 != 0) {
        iStack_624 = iVar7 + 1;
        pvStack_628 = (void *)((int)pvVar3 + 1);
      }
      iStack_604 = FUN_004a51c0(pvVar6,iStack_624,(int)pvStack_628);
      bVar8 = false;
      iVar2 = FUN_004a8300(pvVar6,iStack_604,0);
      pvVar3 = (void *)FUN_00482ac0(local_61c,iVar2,0);
      if (pvVar3 != (void *)0x0) {
        FUN_00411610(auStack_5e8);
        uStack_59c = 1;
        FUN_00529200(auStack_524,local_618,param_1[2]);
        uStack_5a0 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
        iVar2 = FUN_00415610(pvVar3,(int)auStack_5e8);
        bVar8 = iVar2 == 0;
        FUN_00411760((int)auStack_5e8);
        FUN_00411910(auStack_5e8);
      }
      uVar4 = FUN_004a4c50(pvVar6,iStack_604);
      iVar7 = local_614;
      iVar2 = iStack_620;
      uVar1 = *(uint *)(local_614 + 0x14);
      if ((uVar4 & uVar1 & 0x1c0000) == 0) {
        bVar8 = true;
      }
      if (((uVar1 & 0x80000) != 0) && ((uVar1 & 0x140000) == 0)) {
        bVar8 = true;
      }
      if (bVar8) {
        iVar5 = FUN_004a6f60(pvVar6,iStack_620,uVar1 & 0x1c0000);
        if (iVar5 < 0) {
          iVar5 = iVar2;
        }
        pvVar6 = (void *)(iVar5 / DAT_005ae9c4);
        iVar2 = iVar5 % DAT_005ae9c4;
      }
      else {
        pvVar6 = pvStack_628;
        iVar2 = iStack_624;
      }
      pvVar3 = local_61c;
      iVar2 = FUN_00480130(local_61c,iVar2,pvVar6,*(int *)(this_01 + 0x15a8),local_618,0,0,
                           *(undefined4 *)(iVar7 + 0xe8),&iStack_610,&iStack_60c,param_1[2],-1);
      pvVar6 = DAT_005a7b78;
      if (iVar2 != 0) {
        uStack_600 = *(undefined4 *)((int)pvVar3 + 0x4fc4);
        if (((char)*(uint *)((int)pvVar3 + 0x4fc0) == '\x06') &&
           ((*(uint *)((int)pvVar3 + 0x4fc0) & 0x100) == 0)) {
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar6);
            *(undefined4 *)((int)pvVar6 + 0x90) = 0;
            *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar7 * 8) = local_608;
          }
          pvVar6 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar6);
            *(undefined4 *)((int)pvVar6 + 0x90) = 0;
            *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
          }
          else {
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            iVar2 = *(int *)((int)pvVar6 + 0x50);
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar7 * 8) = iStack_610;
          }
          pvVar6 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar6);
            *(undefined4 *)((int)pvVar6 + 0x90) = 0;
            *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
          }
          else {
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            iVar2 = *(int *)((int)pvVar6 + 0x50);
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar7 * 8) = iStack_60c;
          }
          FUN_004d05e0(DAT_005a7b78,*(uint *)((int)pvVar3 + 0x4fc0),*(int **)((int)pvVar3 + 0x4fc4))
          ;
        }
      }
      *(undefined4 *)((int)pvVar3 + 0x4dc8) = 1;
      return 1;
    }
  }
  return 0;
#undef pvStack_628
#undef iStack_624
#undef iStack_620
#undef local_61c
#undef local_618
#undef local_614
#undef iStack_610
#undef iStack_60c
#undef local_608
#undef iStack_604
#undef uStack_600
#undef auStack_5fc
#undef iStack_5f4
#undef iStack_5f0
#undef iStack_5ec
#undef auStack_5e8
#undef uStack_5a0
#undef uStack_59c
#undef auStack_524
}
