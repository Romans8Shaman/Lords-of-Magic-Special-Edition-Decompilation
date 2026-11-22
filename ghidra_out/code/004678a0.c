
uint __fastcall FUN_004678a0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x18);
  iVar5 = 0x1e;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
    if (uVar1 != 0) {
      iVar2 = FUN_004205e0(uVar1);
      if (iVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
    }
    piVar4 = piVar4 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return (uint)(0 < iVar3);
}


