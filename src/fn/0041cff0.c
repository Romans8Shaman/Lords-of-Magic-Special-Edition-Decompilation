/* Rebuilt from lomse.exe FUN_0041cff0 @ 0x0041cff0 (404 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004192c0 ((uint (__fastcall *)(int))0x004192c0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0041da20 ((undefined4 (__fastcall *)(int))0x0041da20)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define s_getarmydata___invalid_data_id_005559e4 (*(char (*)[])0x005559e4)
#define s_getarmydata___no_army_00555a04 (*(char (*)[])0x00555a04)

#define LOM_SELF_0041cff0 1
void __cdecl rb_0041cff0(int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    pcVar5 = s_getarmydata___no_army_00555a04;
LAB_0041d167:
    FUN_004d41c0(param_3,pcVar5);
    FUN_0041d1d0(param_3,1,0);
    return;
  }
  switch(param_2) {
  case 0:
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    if (*(int *)((int)param_3 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_3 + 0x54) + -1;
      *(int *)((int)param_3 + 0x54) = iVar4;
      iVar1 = *(int *)((int)param_3 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
      return;
    }
    break;
  case 1:
    FUN_0041d1d0(param_3,1,*(undefined4 *)(param_1 + 0x1c));
    return;
  case 2:
    FUN_0041d1d0(param_3,1,*(undefined4 *)(param_1 + 0x48));
    return;
  default:
    pcVar5 = s_getarmydata___invalid_data_id_005559e4;
    goto LAB_0041d167;
  case 7:
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    if (*(int *)((int)param_3 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_3 + 0x54) + -1;
      *(int *)((int)param_3 + 0x54) = iVar4;
      iVar1 = *(int *)((int)param_3 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
      return;
    }
    break;
  case 8:
    uVar2 = FUN_004192c0(param_1);
    FUN_0041d1d0(param_3,1,uVar2);
    return;
  case 9:
    uVar3 = FUN_0041da20(param_1);
    if (*(int *)((int)param_3 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_3 + 0x54) + -1;
      *(int *)((int)param_3 + 0x54) = iVar4;
      iVar1 = *(int *)((int)param_3 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 8;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
      return;
    }
    break;
  case 10:
    FUN_0041d1d0(param_3,1,*(undefined4 *)(param_1 + 0x68));
    return;
  case 0xb:
    FUN_0041d1d0(param_3,1,*(undefined4 *)(param_1 + 0x548));
    return;
  case 0xc:
    uVar3 = *(undefined4 *)(param_1 + 0x54c);
    goto LAB_0041d13e;
  case 0xd:
    FUN_0041d1d0(param_3,1,*(undefined4 *)(param_1 + 0x550));
    return;
  case 0xe:
    FUN_0041d1d0(param_3,1,*(undefined4 *)(param_1 + 0x30));
    return;
  case 0xf:
    uVar3 = *(undefined4 *)(param_1 + 0x44);
LAB_0041d13e:
    if (*(int *)((int)param_3 + 0x54) != 0) {
      iVar4 = *(int *)((int)param_3 + 0x54) + -1;
      *(int *)((int)param_3 + 0x54) = iVar4;
      iVar1 = *(int *)((int)param_3 + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
      return;
    }
  }
  FUN_00404ab0(param_3,3);
  return;
}
