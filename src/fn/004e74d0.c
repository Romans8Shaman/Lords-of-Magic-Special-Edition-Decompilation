/* Rebuilt from lomse.exe FUN_004e74d0 @ 0x004e74d0 (550 bytes, __thiscall).
 * HAND 2026-11-13: the search-hit path must load table[current_index] (the original
 * jumps to 004e76e6) and the miss path must leave that slot unset, matching the
 * original [esp+0x10] scratch. Rewritten from the original disassembly. */
#include "lom.h"

#define DAT_00584610 (*(undefined4 *)0x00584610)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_00411910 ((undefined4 (__fastcall *)(undefined4 *))0x00411910)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004e74d0 1
void __thiscall rb_004e74d0(void *this,int param_1,int param_2)
{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int found;
  int cur;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uchar _fr[0x5e4] __attribute__((aligned(8)));
  typedef undefined4 _t_local_5e8[19];
  typedef undefined4 _t_local_59c;
  typedef undefined4 _t_local_524[7];
  typedef undefined4 _t_local_508[319];
#define local_5e8 (*(_t_local_5e8 *)(_fr + 0x8))
#define local_59c (*(_t_local_59c *)(_fr + 0x54))
#define local_524 (*(_t_local_524 *)(_fr + 0xcc))
#define local_508 (*(_t_local_508 *)(_fr + 0xe8))

  iVar5 = (&DAT_00584610)[param_1];
  /* found is deliberately not initialized: a miss uses the stale stack slot, as the original does. */
  if (param_2 < 0x20) {
    piVar1 = &DAT_00584610 + param_2;
    cur = param_2;
    do {
      if (*piVar1 != -1) {
        found = (&DAT_00584610)[cur];
        goto found_or_skip;
      }
      piVar1 = piVar1 + 1;
      cur = cur + 1;
    } while ((int)piVar1 < 0x584690);
  }
found_or_skip:
  FUN_00411610(local_5e8);
  iVar6 = *(int *)((int)this + 0x4c);
  if (0 < iVar6) {
    puVar2 = (undefined4 *)((int)this + 0xc4);
    puVar7 = local_524;
    for (uVar3 = (uint)(iVar6 * 0x4c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (found == -1) {
    if (iVar5 < iVar6 + -1) {
      puVar2 = (undefined4 *)((int)this + iVar5 * 0x4c + 0xc4);
      iVar6 = iVar5;
      do {
        iVar6 = iVar6 + 1;
        puVar7 = puVar2 + 0x13;
        puVar8 = puVar2;
        for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar2 = puVar2 + 0x13;
      } while (iVar6 < *(int *)((int)this + 0x4c) + -1);
    }
    puVar2 = local_524 + iVar5 * 0x13;
    iVar5 = *(int *)((int)this + 0x4c) * 0x4c + 0x78;
  }
  else {
    if (iVar5 < found) {
      iVar6 = iVar5;
      if (iVar5 < *(int *)((int)this + 0x4c)) {
        puVar2 = (undefined4 *)((int)this + iVar5 * 0x4c + 0xc4);
        do {
          iVar4 = iVar6 + 1;
          if (iVar4 == found) break;
          puVar7 = puVar2 + 0x13;
          puVar8 = puVar2;
          for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar2 = puVar2 + 0x13;
          iVar6 = iVar4;
        } while (iVar4 < *(int *)((int)this + 0x4c));
      }
      puVar2 = local_524 + iVar5 * 0x13;
      found = iVar6;
    }
    else {
      if (found < iVar5) {
        iVar6 = iVar5 - found;
        puVar2 = (undefined4 *)((int)this + iVar5 * 0x4c + 0xc4);
        do {
          iVar6 = iVar6 + -1;
          puVar7 = puVar2 + -0x13;
          puVar8 = puVar2;
          for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar2 = puVar2 + -0x13;
        } while (iVar6 != 0);
      }
      puVar2 = local_524 + iVar5 * 0x13;
    }
    iVar5 = found * 0x4c + 0xc4;
  }
  puVar7 = (undefined4 *)((int)this + iVar5);
  for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar5 = *(int *)((int)this + 0x4c);
  if (0 < iVar5) {
    puVar2 = local_508;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[-2] = 0;
      puVar2 = puVar2 + 0x13;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_59c = 0;
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    FUN_004d05e0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8);
  }
  FUN_00411910(local_5e8);
  return;
#undef local_5e8
#undef local_59c
#undef local_524
#undef local_508
}
