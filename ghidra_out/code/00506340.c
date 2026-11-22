
undefined4 __fastcall FUN_00506340(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (3 < *(int *)(param_1 + 0x4c)) {
    return 0;
  }
  iVar1 = FUN_004c2330(param_1);
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = FUN_00420580(param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x5d4) != 0)) {
    return 0;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
  if ((uVar2 == 0) || (*(int *)(uVar2 + 0x4c) + *(int *)(param_1 + 0x4c) < 4)) {
    return 1;
  }
  return 0;
}


