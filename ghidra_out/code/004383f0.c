
int __fastcall FUN_004383f0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  if ((*param_1 < 1) || (0xe < param_1[0x12])) {
    return 0;
  }
  iVar3 = 99999;
  iVar4 = 0;
  local_4 = 0;
  local_8 = 99999;
  iVar5 = 0;
  if (0 < *param_1) {
    iVar5 = 0;
    do {
      uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1[2] + iVar5),0);
      iVar2 = FUN_005221f0(*(undefined4 *)(uVar1 + 0x28),*(undefined4 *)(param_1[2] + 4 + iVar5));
      if ((iVar2 < iVar3) || ((iVar2 == iVar3 && (*(int *)(param_1[2] + 0xc + iVar5) < local_8)))) {
        local_8 = *(int *)(param_1[2] + 0xc + iVar5);
        iVar3 = iVar2;
        local_4 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *param_1);
    iVar5 = local_4;
  }
  iVar3 = param_1[2];
  param_1[param_1[0x12] + 3] = iVar5;
  param_1[0x12] = param_1[0x12] + 1;
  return iVar3 + iVar5 * 0x10;
}


