
undefined4 __fastcall FUN_0052d110(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x18);
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar2,2);
    if (uVar1 != 0) {
      return *(undefined4 *)(uVar1 + 0x28);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar3 < 0x1e);
  return 0xffffffff;
}


