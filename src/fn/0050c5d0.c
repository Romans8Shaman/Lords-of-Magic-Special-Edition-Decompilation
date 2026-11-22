/* Rebuilt from lomse.exe FUN_0050c5d0 @ 0x0050c5d0 (534 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005d2d08 (*(uint *)0x005d2d08)
#define DAT_005d2d0c (*(int * *)0x005d2d0c)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_005cca78 (*(undefined4 *)0x005cca78)
#define _DAT_005cca7c (*(undefined4 *)0x005cca7c)
#define _DAT_005cca80 (*(undefined4 *)0x005cca80)
#define _DAT_005cca84 (*(undefined4 *)0x005cca84)
#define _DAT_005cca88 (*(undefined4 *)0x005cca88)
#define _DAT_005cca8c (*(undefined4 *)0x005cca8c)
#define _DAT_005cca90 (*(undefined4 *)0x005cca90)
#define _DAT_005cca94 (*(undefined4 *)0x005cca94)
#define _DAT_005cca98 (*(undefined4 *)0x005cca98)
#define _DAT_005cca9c (*(undefined4 *)0x005cca9c)
#define _DAT_005ccaa0 (*(undefined4 *)0x005ccaa0)
#define _DAT_005ccaa4 (*(undefined4 *)0x005ccaa4)
#define _DAT_005ccaa8 (*(undefined4 *)0x005ccaa8)
#define _DAT_005ccaac (*(undefined4 *)0x005ccaac)

#define LOM_SELF_0050c5d0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall rb_0050c5d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2d08,DAT_005d2d0c);
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005ccaa8 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005ccaac = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005ccaa8 = 0;
    _DAT_005ccaac = local_4;
  }
  if ((char)_DAT_005ccaa8 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005ccaa0 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005ccaa4 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005ccaa0 = 0;
    _DAT_005ccaa4 = local_4;
  }
  if ((char)_DAT_005ccaa0 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005cca98 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005cca9c = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005cca98 = 0;
    _DAT_005cca9c = local_4;
  }
  if ((char)_DAT_005cca98 == '\0') {
    return false;
  }
  puVar6 = (undefined4 *)FUN_0040adb0(DAT_005a7b78,&local_8);
  _DAT_005cca90 = *puVar6;
  _DAT_005cca94 = puVar6[1];
  if ((char)_DAT_005cca90 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005cca88 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    _DAT_005cca8c = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005cca88 = 0;
    _DAT_005cca8c = local_4;
  }
  if ((char)_DAT_005cca88 == '\0') {
    return false;
  }
  puVar6 = (undefined4 *)FUN_0040adb0(DAT_005a7b78,&local_8);
  _DAT_005cca80 = *puVar6;
  _DAT_005cca84 = puVar6[1];
  if ((char)_DAT_005cca80 == '\0') {
    return false;
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    _DAT_005cca78 = *(undefined4 *)(*piVar1 + -8 + iVar5 * 8);
    local_4 = *(undefined4 *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    _DAT_005cca78 = 0;
  }
  _DAT_005cca7c = local_4;
  return (char)_DAT_005cca78 != '\0';
#undef local_8
#undef local_4
}
