/* Rebuilt from lomse.exe FUN_004b29e0 @ 0x004b29e0 (874 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cd34c (*(undefined *)0x005cd34c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0047f230 ((undefined4 (__thiscall *)(void *, void *, char *, int *, int, int, int))0x0047f230)
#define FUN_00483c50 ((undefined4 (__thiscall *)(void *, int))0x00483c50)
#define FUN_004952c0 ((undefined4 (__thiscall *)(void *, uint, int, int))0x004952c0)
#define FUN_00495370 ((undefined4 (__thiscall *)(void *, byte *))0x00495370)
#define FUN_00497270 ((undefined4 (__thiscall *)(void *, int, int, uint, int, undefined2))0x00497270)
#define FUN_004b2820 ((undefined4 (__fastcall *)(undefined4 *))0x004b2820)
#define FUN_004b9e00 ((undefined4 (__thiscall *)(void *, int))0x004b9e00)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_004b29e0 1
void __thiscall rb_004b29e0(void *this,int param_1,int param_2,char *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  DWORD DVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef uint _t_local_28;
  typedef uint _t_local_24;
  typedef byte * _t_local_20;
  typedef int _t_local_1c[4];
#define local_30 (*(_t_local_30 *)(_fr + 0x0))
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
#define local_28 (*(_t_local_28 *)(_fr + 0x8))
#define local_24 (*(_t_local_24 *)(_fr + 0xc))
#define local_20 (*(_t_local_20 *)(_fr + 0x10))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))

  iVar11 = DAT_00583650 + 0x10;
  local_1c[3] = 0;
  local_1c[2] = 0;
  local_1c[1] = 0;
  local_1c[0] = 0;
  if (((param_1 != DAT_005a7d8c) && (param_2 != -1)) && (param_2 != DAT_005a7d8c)) {
    return;
  }
  piVar2 = (int *)((int)this + param_1 * 200 + 0x1a0);
  DAT_00583650 = iVar11;
  if (*piVar2 != 0) {
    FUN_004b2820(piVar2);
  }
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar5 == (undefined *)0x0) {
    DAT_00583650 = DAT_00583650 + -0x10;
    return;
  }
  uVar6 = FUN_00483c50(this,param_1);
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
    iVar11 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar11 + iVar10 * 8) = 1;
    *(undefined4 *)(iVar11 + 4 + iVar10 * 8) = uVar6;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x5d4),*(int **)((int)this + 0x5d8));
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar12 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    cVar9 = (char)*(undefined4 *)(*piVar12 + -8 + iVar11 * 8);
    pbVar7 = *(byte **)(*piVar12 + -4 + iVar11 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    cVar9 = '\0';
    pbVar7 = local_20;
  }
  iVar11 = *(int *)((int)pvVar4 + 0x90);
  *(undefined4 *)((int)pvVar4 + 0x90) = 0;
  *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  if (iVar11 == 0) {
    if (cVar9 == '\b') goto LAB_004b2b6c;
    *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  pbVar7 = (byte *)0x0;
LAB_004b2b6c:
  FUN_00495370(piVar2 + 0x1a,pbVar7);
  piVar12 = piVar2 + 2;
  FUN_004952c0(piVar12,0x280,0xe,1);
  FUN_00497270(piVar12,0,0,piVar2[3],piVar2[4],0);
  pvVar4 = DAT_005a7b78;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0x27f;
  local_1c[3] = 0xe;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar10 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar10;
    *(undefined4 *)(iVar11 + iVar10 * 8) = 1;
    *(int *)(iVar11 + 4 + iVar10 * 8) = param_1;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x5dc),*(int **)((int)this + 0x5e0));
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    local_24 = *(uint *)(*piVar1 + -8 + iVar11 * 8);
    local_20 = *(byte **)(*piVar1 + -4 + iVar11 * 8);
  }
  else {
    FUN_00404ab0(DAT_005a7b78,6);
    local_24 = 0;
  }
  iVar11 = FUN_004026a0(&local_24,&local_30,&local_28,&local_2c);
  if (iVar11 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x90) = 0xe;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  if ((int)local_30 < 0) {
    uVar6 = *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10);
  }
  else {
    uVar6 = FUN_004b9e00(&DAT_005cd34c,local_30);
  }
  uVar3 = *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10);
  *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10) = uVar6;
  switch(param_1) {
  case 0:
  case 2:
    iVar11 = 1;
    break;
  case 1:
  case 3:
    iVar11 = 1;
    break;
  default:
    iVar11 = 2;
  }
  FUN_0047f230(*(void **)((int)this + 0x518),piVar12,param_3,local_1c,iVar11,-1,0);
  *(undefined4 *)(**(int **)((int)this + 0x518) + 0x10) = uVar3;
  *piVar2 = 1;
  DVar8 = GetTickCount();
  piVar2[1] = DVar8;
  DAT_00583650 = DAT_00583650 + -0x10;
  return;
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
}
