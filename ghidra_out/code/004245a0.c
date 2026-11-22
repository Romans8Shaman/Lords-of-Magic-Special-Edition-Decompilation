
undefined4 __fastcall FUN_004245a0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1[10],2);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1[10],3);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1[10],1);
  if ((param_1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)(param_1 + 0xc) & 0x20) != 0)) {
    local_4 = param_1[10];
  }
  else {
    local_4 = -1;
  }
  iVar4 = FUN_00413180(param_1,*(int *)(DAT_005ae970 +
                                       ((param_1[0x11] - 4U & 7) + param_1[7] * 8) * 4));
  if (uVar1 == 0) {
    if (uVar2 == 0) {
      if (uVar3 == 0) {
        return 0;
      }
      *(undefined4 *)(uVar3 + 0x58) = 0;
      uVar1 = param_1[0xc] & 0xfeffffff;
    }
    else {
      *(undefined4 *)(uVar2 + 0x44) = 0;
      uVar1 = param_1[0xc] & 0xffbfffff;
    }
  }
  else {
    *(undefined4 *)(uVar1 + 0x48) = 0;
    uVar1 = param_1[0xc] & 0xff7fffff;
  }
  param_1[0xc] = uVar1;
  iVar4 = FUN_004a7d50(&DAT_005ae958,param_1,iVar4);
  if (param_1[0x16d] != -1) {
    puVar5 = FUN_00485080(&DAT_005aa12c,param_1[0x16d],0x2f);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[0x16c] = iVar4;
    }
  }
  (/*IC:00424696*/**(code **)(*param_1 + 0x2c))(param_1);
  if (-1 < local_4) {
    if (param_1[0x13] < 1) {
      iVar4 = -1;
    }
    else {
      iVar4 = param_1[10];
    }
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,local_4,iVar4);
  }
  return 1;
}


