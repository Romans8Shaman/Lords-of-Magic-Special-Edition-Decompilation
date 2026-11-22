
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0041de50(int *param_1,int param_2,int param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *local_c;
  int local_8;
  undefined4 *local_4;
  
  uVar7 = 0;
  if (param_1 == (int *)0x0) {
    FUN_004d41c0(param_4,s_setunitdata___no_army_00555bd0);
    if (*(int *)((int)param_4 + 0x54) < *(int *)((int)param_4 + 0x58)) {
      *(int *)((int)param_4 + 0x54) = *(int *)((int)param_4 + 0x54) + 1;
      return;
    }
  }
  else {
    if ((-1 < param_2) && (param_2 < param_1[0x13])) {
      if (*(int *)((int)param_4 + 0x54) < *(int *)((int)param_4 + 0x58)) {
        iVar2 = *(int *)((int)param_4 + 0x54) + 1;
        *(int *)((int)param_4 + 0x54) = iVar2;
        uVar6 = *(uint *)(*(int *)((int)param_4 + 0x50) + -8 + iVar2 * 8);
        local_4 = *(undefined4 **)(*(int *)((int)param_4 + 0x50) + -4 + iVar2 * 8);
      }
      else {
        FUN_00404ab0(param_4,6);
        uVar6 = 0;
      }
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1) {
        puVar5 = (undefined4 *)((int)local_4 << 8);
        local_c = local_4;
      }
      else if (uVar6 == 2) {
        local_c = (undefined4 *)((int)local_4 >> 8);
        puVar5 = local_4;
      }
      else {
        if (uVar6 != 4) {
          FUN_004d41c0(param_4,s_invalid_value_00555ba0);
          return;
        }
        lVar8 = __ftol((float10)(float)local_4 * (float10)_DAT_0054d448);
        lVar9 = __ftol((float10)(float)local_4);
        local_c = (undefined4 *)lVar9;
        puVar5 = (undefined4 *)lVar8;
      }
      local_8 = -1;
      if ((param_3 == 0x98) &&
         (uVar7 = FUN_005291e0((int)(param_1 + param_2 * 0x13 + 0x31)), uVar7 != 0)) {
        local_8 = *(int *)(uVar7 + 0x44);
      }
      iVar2 = FUN_00527e60(param_1 + param_2 * 0x13 + 0x31,param_3,puVar5);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_00527d00(param_1 + param_2 * 0x13 + 0x31,param_3,local_c), iVar2 == 0)) {
        FUN_004d41c0(param_4,s_invalid_data_id_00555b78);
      }
      if (param_3 == 0x96) {
        (/*IC:0041df91*/**(code **)(*param_1 + 0x2c))(param_1);
      }
      pvVar1 = DAT_005a7b78;
      if (local_8 < 1) {
        return;
      }
      if (*(int *)(uVar7 + 0x44) <= local_8) {
        return;
      }
      iVar2 = param_1[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar4 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
        *(int *)(iVar4 + 4 + iVar3 * 8) = iVar2;
      }
      pvVar1 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar4 * 8) = param_2;
      }
      FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
      return;
    }
    FUN_004d41c0(param_4,s_setunitdata___invalid_unit_num_00555bb0);
    if (*(int *)((int)param_4 + 0x54) < *(int *)((int)param_4 + 0x58)) {
      *(int *)((int)param_4 + 0x54) = *(int *)((int)param_4 + 0x54) + 1;
      return;
    }
  }
  *(undefined4 *)((int)param_4 + 0x90) = 6;
  FUN_004d4550(param_4);
  *(undefined4 *)((int)param_4 + 0x90) = 0;
  *(undefined4 *)((int)param_4 + 0xa4) = 0;
  return;
}


