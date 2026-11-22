/* Rebuilt from lomse.exe FUN_00422fa0 @ 0x00422fa0 (889 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005787c0 (*(int *)0x005787c0)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_00419d00 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00419d00)
#define FUN_0042d4c0 ((undefined4 (__fastcall *)(undefined4 *))0x0042d4c0)
#define FUN_004c3990 ((undefined4 (__fastcall *)(undefined4 *))0x004c3990)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)
#define FUN_00526e40 ((undefined4 * (__fastcall *)(undefined4 *))0x00526e40)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define PTR_FUN_0054d3a8 (*(undefined * *)0x0054d3a8)
#define thunk_FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526e90)

#define LOM_SELF_00422fa0 1
undefined4 __thiscall rb_00422fa0(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uchar _fr[0x600] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_5f4;
  typedef int * _t_local_5f0;
  typedef int _t_local_5ec;
  typedef undefined ** _t_local_5e8[48];
  typedef undefined1 _t_local_528;
  typedef int _t_local_524[294];
  typedef undefined4 _t_local_8c[3];
  typedef undefined4 _t_local_80[29];
#define local_5f4 (*(_t_local_5f4 *)(_fr + 0x4))
#define local_5f0 (*(_t_local_5f0 *)(_fr + 0x8))
#define local_5ec (*(_t_local_5ec *)(_fr + 0xc))
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x10))
#define local_528 (*(_t_local_528 *)(_fr + 0xd0))
#define local_524 (*(_t_local_524 *)(_fr + 0xd4))
#define local_8c (*(_t_local_8c *)(_fr + 0x56c))
#define local_80 (*(_t_local_80 *)(_fr + 0x578))

  iVar8 = param_2;
  if (((((param_1 < 0) || (*(int *)((int)this + 0x4c) <= param_1)) ||
       (iVar1 = FUN_00525fc0((int *)((int)this + param_1 * 0x4c + 0xc4)),
       iVar1 < 0)) || ((param_2 < 0 || (*(int *)((int)this + 0x4c) <= param_2)))) ||
     ((iVar1 = FUN_00525fc0((int *)((int)this + param_2 * 0x4c + 0xc4)), iVar1 < 0 ||
      (param_2 == param_1)))) {
    uVar4 = 0;
  }
  else {
    if (param_2 < param_1) {
      param_2 = param_1;
      param_1 = iVar8;
    }
    FUN_004f59a0(local_5e8);
    local_528 = 0;
    FUN_00539ff0(local_524,0x4c,0xf,FUN_00526e40,thunk_FUN_00526ea0);
    FUN_004c3990(local_8c);
    FUN_0042d4c0(local_80);
    DAT_005787c0 = DAT_005787c0 + 0x5dc;
    local_5e8[0] = &PTR_FUN_0054d3a8;
    FUN_00419d00(local_5e8,this);
    local_5ec = 0;
    if (param_1 < *(int *)((int)this + 0x4c)) {
      local_5f4 = local_524 + param_1 * 0x13;
      iVar8 = param_1;
      do {
        if ((param_1 < iVar8) && (iVar1 = FUN_00525fc0(local_5f4), -1 < iVar1)) break;
        local_5ec = local_5ec + 1;
        iVar8 = iVar8 + 1;
        local_5f4 = local_5f4 + 0x13;
      } while (iVar8 < *(int *)((int)this + 0x4c));
    }
    local_5f4 = (int *)0x0;
    piVar2 = (int *)0;
    if (param_2 < *(int *)((int)this + 0x4c)) {
      local_5f0 = local_524 + param_2 * 0x13;
      iVar8 = param_2;
      do {
        if ((param_2 < iVar8) && (iVar1 = FUN_00525fc0(local_5f0), piVar2 = local_5f4, -1 < iVar1))
        break;
        piVar2 = (int *)((int)local_5f4 + 1);
        local_5f0 = local_5f0 + 0x13;
        iVar8 = iVar8 + 1;
        local_5f4 = piVar2;
      } while (iVar8 < *(int *)((int)this + 0x4c));
    }
    if ((int *)local_5ec == piVar2) {
      if (0 < local_5ec) {
        piVar2 = local_524 + param_2 * 0x13;
        local_5f4 = (int *)((int)this + param_2 * 0x4c + 0xc4);
        local_5f0 = (int *)local_5ec;
        piVar3 = (int *)((int)this + param_1 * 0x4c + 0xc4);
        piVar6 = local_524 + param_1 * 0x13;
        do {
          piVar7 = piVar2;
          piVar9 = piVar3;
          for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          piVar7 = piVar6;
          piVar9 = local_5f4;
          for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          piVar2 = piVar2 + 0x13;
          local_5f4 = local_5f4 + 0x13;
          local_5f0 = (int *)((int)local_5f0 + -1);
          piVar3 = piVar3 + 0x13;
          piVar6 = piVar6 + 0x13;
        } while (local_5f0 != (int *)0x0);
      }
    }
    else {
      if (0 < (int)piVar2) {
        piVar3 = local_524 + param_2 * 0x13;
        piVar6 = (int *)((int)this + param_1 * 0x4c + 0xc4);
        for (uVar5 = (uint)((int)piVar2 * 0x4c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar6 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      iVar8 = (param_2 - param_1) - local_5ec;
      if (0 < iVar8) {
        piVar3 = local_524 + (local_5ec + param_1) * 0x13;
        piVar6 = (int *)((int)this + ((int)piVar2 + param_1) * 0x4c + 0xc4);
        for (uVar5 = (uint)(iVar8 * 0x4c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar6 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      if (0 < local_5ec) {
        piVar3 = local_524 + param_1 * 0x13;
        piVar2 = (int *)((int)this + (((int)piVar2 + param_2) - local_5ec) * 0x4c + 0xc4);
        for (uVar5 = (uint)(local_5ec * 0x4c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar2 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar2 = piVar2 + 1;
        }
      }
    }
    FUN_004117f0(local_5e8,0);
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
    if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
       ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    }
    FUN_00411910(local_5e8);
    uVar4 = 1;
  }
  return uVar4;
#undef local_5f4
#undef local_5f0
#undef local_5ec
#undef local_5e8
#undef local_528
#undef local_524
#undef local_8c
#undef local_80
}
