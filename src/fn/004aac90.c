/* Rebuilt from lomse.exe FUN_004aac90 @ 0x004aac90 (697 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055cb30 (*(undefined *)0x0055cb30)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004f5960 ((undefined4 (__fastcall *)(int))0x004f5960)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define FUN_004f5a90 ((undefined4 (__thiscall *)(void *, int))0x004f5a90)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define FUN_004f5b90 ((undefined4 (__thiscall *)(void *, int))0x004f5b90)
#define FUN_004f6030 ((int (__thiscall *)(void *, int))0x004f6030)
#define FUN_004f62f0 ((undefined4 (__fastcall *)(int))0x004f62f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004aac90 1
void __fastcall rb_004aac90(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))

  iVar3 = 0;
  iVar4 = 0;
  local_20 = 0;
  local_24 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    puVar5 = (uint *)(*(int *)(param_1 + 100) + 4);
    do {
      if ((*puVar5 & 0x400) != 0) {
        local_20 = local_20 + iVar3 % DAT_005ae9c4;
        local_24 = local_24 + iVar3 / DAT_005ae9c4;
        iVar4 = iVar4 + 1;
      }
      if ((*puVar5 & 0x800) != 0) {
        local_18 = local_18 + iVar3 % DAT_005ae9c4;
        local_1c = local_1c + iVar3 / DAT_005ae9c4;
        local_28 = local_28 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar3 < *(int *)(param_1 + 0x68));
    iVar8 = local_28;
  }
  iVar3 = -1;
  iVar6 = -1;
  if (0 < iVar4) {
    iVar3 = FUN_004a51c0(&DAT_005ae958,local_20 / iVar4,local_24 / iVar4);
  }
  if (0 < iVar8) {
    iVar6 = FUN_004a51c0(&DAT_005ae958,local_18 / iVar8,local_1c / iVar8);
  }
  if (iVar3 == iVar6) {
    if (iVar3 != -1) {
      iVar6 = iVar6 + 1;
      goto LAB_004aada0;
    }
  }
  else {
LAB_004aada0:
    if (iVar3 != -1) {
      if (DAT_005aa7d4 == 0xf) {
LAB_004aade5:
        iVar8 = 8;
      }
      else {
        if ((DAT_005aa7d4 < 0) || (0xf < DAT_005aa7d4)) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar2 = &DAT_005af194 + DAT_005aa7d4 * 0x1d84;
        }
        if (puVar2 == (undefined *)0x0) goto LAB_004aade5;
        iVar8 = *(int *)(puVar2 + 0x15b0);
      }
      puVar1 = (undefined4 *)Ordinal_401(0x44,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      piVar7 = (int *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        piVar7 = FUN_004f59a0(puVar1);
      }
      FUN_004f5960((int)piVar7);
      piVar7[7] = iVar3;
      FUN_004f5a90(piVar7,*(int *)(&DAT_0055cb30 + iVar8 * 4));
      FUN_004f5b30(piVar7,0);
      FUN_004f5b90(piVar7,0);
      piVar7[1] = 10;
      ((undefined4 (__thiscall *)(__typeof__(piVar7)))(**(code **)(*piVar7 + 0x1c)))(piVar7);
      FUN_004f6030((void *)(param_1 + 0x1c),(int)piVar7);
    }
  }
  if (iVar6 == -1) goto LAB_004aaf2a;
  if (DAT_005aadb0 == 0xf) {
LAB_004aaea7:
    iVar8 = 8;
  }
  else {
    if ((DAT_005aadb0 < 0) || (0xf < DAT_005aadb0)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = &DAT_005af194 + DAT_005aadb0 * 0x1d84;
    }
    if (puVar2 == (undefined *)0x0) goto LAB_004aaea7;
    iVar8 = *(int *)(puVar2 + 0x15b0);
  }
  puVar1 = (undefined4 *)Ordinal_401(0x44,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_004f59a0(puVar1);
  }
  FUN_004f5960((int)piVar7);
  piVar7[7] = iVar6;
  FUN_004f5a90(piVar7,*(int *)(&DAT_0055cb30 + iVar8 * 4));
  FUN_004f5b30(piVar7,0);
  FUN_004f5b90(piVar7,0);
  piVar7[1] = 10;
  ((undefined4 (__thiscall *)(__typeof__(piVar7)))(**(code **)(*piVar7 + 0x1c)))(piVar7);
  FUN_004f6030((void *)(param_1 + 0x1c),(int)piVar7);
LAB_004aaf2a:
  FUN_004f62f0(param_1 + 0x1c);
  return;
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
}
