/* Rebuilt from lomse.exe FUN_00423320 @ 0x00423320 (703 bytes, __thiscall).
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

#define LOM_SELF_00423320 1
undefined4 __thiscall rb_00423320(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uchar _fr[0x5f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined ** _t_local_5e8[30];
  typedef int _t_aiStack_570[18];
  typedef undefined1 _t_local_528;
  typedef undefined4 _t_local_524[19];
  typedef int _t_aiStack_4d8[275];
  typedef undefined4 _t_local_8c[3];
  typedef undefined4 _t_local_80[29];
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x0))
#define aiStack_570 (*(_t_aiStack_570 *)(_fr + 0x78))
#define local_528 (*(_t_local_528 *)(_fr + 0xc0))
#define local_524 (*(_t_local_524 *)(_fr + 0xc4))
#define aiStack_4d8 (*(_t_aiStack_4d8 *)(_fr + 0x110))
#define local_8c (*(_t_local_8c *)(_fr + 0x55c))
#define local_80 (*(_t_local_80 *)(_fr + 0x568))

  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0x4c))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0x4c))) {
    piVar5 = (int *)((int)this + param_1 * 0x4c + 0xc4);
    iVar1 = FUN_00525fc0(piVar5);
    if ((iVar1 < 0) &&
       (iVar1 = FUN_00525fc0((int *)((int)this + param_2 * 0x4c + 0xc4)), -1 < iVar1)) {
      iVar1 = param_1;
      piVar3 = piVar5;
      do {
        iVar2 = FUN_00525fc0(piVar3);
        if (-1 < iVar2) break;
        iVar1 = iVar1 + -1;
        piVar3 = piVar3 + -0x13;
      } while (-1 < iVar1);
      if (iVar1 == param_2) {
        return 1;
      }
      iVar1 = *(int *)((int)this + 0x4c) + -1;
      if (param_2 != iVar1) {
        iVar1 = param_2 + 1;
        if (iVar1 < *(int *)((int)this + 0x4c)) {
          piVar3 = (int *)((int)this + iVar1 * 0x4c + 0xc4);
          do {
            iVar2 = FUN_00525fc0(piVar3);
            if (-1 < iVar2) break;
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 0x13;
          } while (iVar1 < *(int *)((int)this + 0x4c));
        }
        iVar1 = iVar1 + -1;
      }
      if (param_1 == iVar1) {
        return 1;
      }
      FUN_004f59a0(local_5e8);
      local_528 = 0;
      FUN_00539ff0(local_524,0x4c,0xf,FUN_00526e40,thunk_FUN_00526ea0);
      FUN_004c3990(local_8c);
      FUN_0042d4c0(local_80);
      DAT_005787c0 = DAT_005787c0 + 0x5dc;
      local_5e8[0] = &PTR_FUN_0054d3a8;
      FUN_00419d00(local_5e8,this);
      if (param_1 < iVar1) {
        piVar3 = aiStack_4d8 + param_1 * 0x13;
        for (uVar4 = (uint)(iVar1 * 0x4c + param_1 * -0x4c) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar5 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        }
      }
      else {
        iVar6 = iVar1 + 1;
        iVar2 = iVar1 + 2;
        iVar1 = iVar6;
        if (iVar2 <= param_1) {
          iVar2 = (param_1 - iVar2) + 1;
          piVar3 = aiStack_570 + param_1 * 0x13;
          do {
            iVar2 = iVar2 + -1;
            piVar7 = piVar3;
            piVar9 = piVar5;
            for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar9 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar9 = piVar9 + 1;
            }
            piVar3 = piVar3 + -0x13;
            piVar5 = piVar5 + -0x13;
          } while (iVar2 != 0);
        }
      }
      puVar8 = local_524 + param_1 * 0x13;
      puVar10 = (undefined4 *)((int)this + iVar1 * 0x4c + 0xc4);
      for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_004117f0(local_5e8,0);
      ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
      if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
         ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
      }
      FUN_00411910(local_5e8);
      return 1;
    }
  }
  return 0;
#undef local_5e8
#undef aiStack_570
#undef local_528
#undef local_524
#undef aiStack_4d8
#undef local_8c
#undef local_80
}
