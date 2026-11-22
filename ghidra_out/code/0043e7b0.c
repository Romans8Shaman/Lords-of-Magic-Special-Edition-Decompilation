
uint __fastcall FUN_0043e7b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x80),2);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x80),3);
  while (uVar2 != 0) {
    piVar1 = (int *)(uVar2 + 0x80);
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(uVar2 + 0x80),2);
    uVar3 = FUN_00482ac0(&DAT_005aa12c,*piVar1,3);
  }
  return uVar3;
}


