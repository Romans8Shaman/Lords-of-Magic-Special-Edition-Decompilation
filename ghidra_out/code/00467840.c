
undefined4 __fastcall FUN_00467840(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 0x18);
  iVar6 = 0x1e;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar5,0);
    if (uVar1 != 0) {
      iVar2 = FUN_00525fc0((int *)(uVar1 + 0xc4));
      if (iVar2 == 2) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    piVar5 = piVar5 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((iVar3 < 1) || (iVar4 < 1)) {
    return 0;
  }
  return 1;
}


