/* Rebuilt from lomse.exe FUN_00533110 @ 0x00533110 (606 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574404 (*(int *)0x00574404)
#define DAT_00574408 (*(undefined4 *)0x00574408)
#define DAT_0057440c (*(int *)0x0057440c)
#define DAT_00574410 (*(int *)0x00574410)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define DAT_005d3858 (*(int *)0x005d3858)
#define FUN_004a4c30 ((undefined4 (__thiscall *)(void *, int))0x004a4c30)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_00531b20 ((undefined4 (__thiscall *)(void *, int))0x00531b20)
#define FUN_00531c70 ((undefined4 (__thiscall *)(void *, int))0x00531c70)

#define LOM_SELF_00533110 1
void __thiscall rb_00533110(void *this,int param_1,int param_2)

{
  int iVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar _fr[0x98] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_90;
  typedef int _t_local_8c;
  typedef int _t_local_88;
  typedef int _t_local_84;
  typedef int _t_local_80[32];
#define local_90 (*(_t_local_90 *)(_fr + 0x0))
#define local_8c (*(_t_local_8c *)(_fr + 0x4))
#define local_88 (*(_t_local_88 *)(_fr + 0x8))
#define local_84 (*(_t_local_84 *)(_fr + 0xc))
#define local_80 (*(_t_local_80 *)(_fr + 0x10))
  
  iVar1 = DAT_005ae9c8 * DAT_005ae9c4;
  local_88 = *(int *)(param_2 + 0x14);
  local_84 = *(int *)(param_2 + 0xec);
  *(int *)((int)this + 0xc) = DAT_005ae9c4;
  if (*(int *)((int)this + 8) != iVar1) {
    FUN_00531b20(this,iVar1);
    DAT_005d3858 = 0;
    DAT_00574404 = -1;
    DAT_00574408 = 0xffffffff;
    DAT_0057440c = -1;
  }
  iVar3 = 0;
  this_00 = (int *)(param_1 + 0xc4);
  piVar4 = local_80;
  do {
    local_90 = 1;
    FUN_00527e90(this_00,iVar3 + 0x6c,&local_90);
    iVar2 = local_88;
    if (local_90 < 0) {
      local_90 = 0;
    }
    iVar3 = iVar3 + 1;
    *piVar4 = local_90 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0x20);
  if ((((DAT_00574404 != local_88) || (DAT_005d3858 != *(int *)(param_1 + 0x54))) ||
      (DAT_0057440c != *this_00)) || (DAT_00574410 != local_84)) {
    if (*(int *)(param_1 + 0x54) == 0x40000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar3 = 0;
      if (0 < iVar1) {
        iVar5 = 0;
        local_8c = iVar2 * 6 + 2;
        do {
          if (*(short *)(DAT_005aef04 + local_8c) == *(short *)(DAT_005aef04 + 2 + iVar5)) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar3);
            *(int *)(*(int *)((int)this + 4) + iVar3 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar3 * 4) = 0x7fffffff;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 6;
        } while (iVar3 < iVar1);
        iVar2 = local_88;
      }
    }
    else if (*(int *)(param_1 + 0x54) == 0x80000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar3 = 0;
      if (0 < iVar1) {
        iVar5 = 0;
        local_8c = iVar2 * 6 + 4;
        do {
          if (*(short *)(DAT_005aef04 + local_8c) == *(short *)(DAT_005aef04 + 4 + iVar5)) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar3);
            *(int *)(*(int *)((int)this + 4) + iVar3 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar3 * 4) = 0x7fffffff;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 6;
        } while (iVar3 < iVar1);
        iVar2 = local_88;
      }
    }
    else {
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          iVar5 = FUN_004a4c30(&DAT_005ae958,iVar3);
          *(int *)(*(int *)((int)this + 4) + iVar3 * 4) = local_80[iVar5];
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    DAT_00574408 = 0xffffffff;
    DAT_005d3858 = *(int *)(param_1 + 0x54);
    DAT_0057440c = *this_00;
    DAT_00574410 = local_84;
    DAT_00574404 = iVar2;
    FUN_00531c70(this,iVar2);
  }
  ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_2 + 0xf4)), __typeof__(this)))(**(code **)(param_2 + 0xf0)))(*(undefined4 *)(param_2 + 0xf4),this);
  return;
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
}
