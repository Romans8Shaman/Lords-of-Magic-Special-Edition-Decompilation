
void __fastcall FUN_00481240(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (iVar3 = *(int *)(param_1 + 0x24), iVar3 <= *(int *)(param_1 + 0x18))) {
    do {
      piVar1 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,0);
      if ((piVar1 != (int *)0x0) && (iVar2 = FUN_004c1cf0((int)piVar1), iVar2 == 0)) {
        FUN_00481020(&DAT_005ae958,piVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x18));
  }
  return;
}


