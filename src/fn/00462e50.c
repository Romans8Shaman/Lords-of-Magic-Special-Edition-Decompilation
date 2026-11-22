/* Rebuilt from lomse.exe FUN_00462e50 @ 0x00462e50 (381 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_00583560 (*(uint *)0x00583560)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005ae8c4 (*(int *)0x005ae8c4)
#define DAT_005af134 (*(uint *)0x005af134)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_0045c7b0 ((undefined4 (__fastcall *)(int))0x0045c7b0)
#define FUN_00481b40 ((undefined4 (__fastcall *)(int))0x00481b40)
#define FUN_00488540 ((undefined4 (__fastcall *)(int))0x00488540)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_00462e50 1
void __fastcall rb_00462e50(int *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  
  if (*param_1 != 0) {
    DAT_005577c8 = param_1[1];
    uVar1 = param_1[0x127];
    if (((char)uVar1 == '\x06') && ((uVar1 & 0x100) == 0)) {
      FUN_004d09a0(DAT_005a7b78,uVar1,(int *)param_1[0x128],0);
    }
    param_1[3] = -1;
    *param_1 = 0;
    return;
  }
  if (DAT_005af134 != param_1[3]) {
    iVar3 = 0;
    if (0 < param_1[0x178]) {
      puVar4 = (uint *)(param_1 + 300);
      do {
        if (puVar4[-1] == DAT_005af134) {
          if (((char)*puVar4 == '\x06') && ((*puVar4 & 0x100) == 0)) {
            DAT_005577c8 = param_1[1];
            FUN_004d09a0(DAT_005a7b78,*puVar4,(int *)puVar4[1],0);
          }
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 3;
      } while (iVar3 < param_1[0x178]);
    }
    if (((char)param_1[0x176] == '\x06') && ((param_1[0x176] & 0x100U) == 0)) {
      DAT_005577c8 = param_1[1];
      FUN_004d09a0(DAT_005a7b78,param_1[0x176],(int *)param_1[0x177],0);
    }
    if (DAT_005d1e84 == 0) {
      bVar5 = true;
    }
    else {
      iVar3 = *(int *)(DAT_005d1e84 + 0x390);
      iVar2 = FUN_004b7dd0(DAT_005d1e84);
      bVar5 = iVar3 == iVar2;
    }
    if (bVar5) {
      iVar3 = FUN_00481b40(0x5aa12c);
      if ((iVar3 != 0) && (0x9c4 < DAT_00583560)) {
        if (-1 < DAT_005ae8c4) {
          FUN_00488540(0x5aa12c);
          param_1[3] = DAT_005af134;
          return;
        }
        FUN_0045c7b0(0x5aa12c);
      }
    }
    param_1[3] = DAT_005af134;
  }
  return;
}
