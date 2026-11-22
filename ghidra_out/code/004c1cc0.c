
undefined4 __fastcall FUN_004c1cc0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x5b4) != -1) {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
    if ((uVar1 != 0) && (0 < *(int *)(uVar1 + 0x5bc))) {
      return 1;
    }
  }
  return 0;
}


