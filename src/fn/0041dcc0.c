/* Rebuilt from lomse.exe FUN_0041dcc0 @ 0x0041dcc0 (395 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_005271e0 ((undefined4 (__thiscall *)(void *, int, undefined4 *))0x005271e0)
#define FUN_00527200 ((undefined4 (__thiscall *)(void *, undefined4, int *))0x00527200)
#define s_getunitdata___invalid_unit_num_00555b58 (*(char (*)[])0x00555b58)
#define s_getunitdata___no_army_00555b88 (*(char (*)[])0x00555b88)
#define s_invalid_data_id_00555b78 (*(char (*)[])0x00555b78)

#define LOM_SELF_0041dcc0 1
void __cdecl rb_0041dcc0(int volatile param_1, int volatile param_2, int volatile param_3, void *volatile param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = param_4;
  iVar2 = param_3;
  if (param_1 == 0) {
    FUN_004d41c0(param_4,s_getunitdata___no_army_00555b88);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar1 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar1;
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = 0;
      return;
    }
  }
  else if ((param_2 < 0) || (*(int *)(param_1 + 0x4c) <= param_2)) {
    FUN_004d41c0(param_4,s_getunitdata___invalid_unit_num_00555b58);
    if (*(int *)((int)pvVar3 + 0x54) != 0) {
      iVar1 = *(int *)((int)pvVar3 + 0x54) + -1;
      *(int *)((int)pvVar3 + 0x54) = iVar1;
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = 0;
      return;
    }
  }
  else {
    pvVar3 = (void *)(param_1 + 0xc4 + param_2 * 0x4c);
    iVar1 = FUN_00527200(pvVar3,param_3,&param_1);
    if (iVar1 == 0) {
      iVar2 = FUN_005271e0(pvVar3,iVar2,&param_2);
      pvVar3 = param_4;
      if (iVar2 == 0) {
        if (*(int *)((int)param_4 + 0x54) == 0) {
          *(undefined4 *)((int)param_4 + 0x90) = 3;
          FUN_004d4550(param_4);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          FUN_004d41c0(pvVar3,s_invalid_data_id_00555b78);
          return;
        }
        iVar2 = *(int *)((int)param_4 + 0x50);
        iVar1 = *(int *)((int)param_4 + 0x54) + -1;
        *(int *)((int)param_4 + 0x54) = iVar1;
        *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = 0;
        FUN_004d41c0(param_4,s_invalid_data_id_00555b78);
        return;
      }
      if (*(int *)((int)param_4 + 0x54) != 0) {
        iVar1 = *(int *)((int)param_4 + 0x54) + -1;
        *(int *)((int)param_4 + 0x54) = iVar1;
        iVar2 = *(int *)((int)param_4 + 0x50);
        *(undefined4 *)(iVar2 + iVar1 * 8) = 2;
        *(int *)(iVar2 + 4 + iVar1 * 8) = param_2;
        return;
      }
    }
    else {
      pvVar3 = param_4;
      if (*(int *)((int)param_4 + 0x54) != 0) {
        iVar1 = *(int *)((int)param_4 + 0x54) + -1;
        *(int *)((int)param_4 + 0x54) = iVar1;
        iVar2 = *(int *)((int)param_4 + 0x50);
        *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar1 * 8) = param_1;
        return;
      }
    }
  }
  *(undefined4 *)((int)pvVar3 + 0x90) = 3;
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return;
}
