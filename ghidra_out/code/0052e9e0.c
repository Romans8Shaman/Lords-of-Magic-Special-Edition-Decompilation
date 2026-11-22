
void __fastcall FUN_0052e9e0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 6;
  iVar3 = 0x1e;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar2,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *param_1)) {
      FUN_00407860(&DAT_005aa12c,*(int *)(uVar1 + 0x28));
    }
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


