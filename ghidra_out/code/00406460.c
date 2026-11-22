
int FUN_00406460(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1;
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if ((uVar3 == 0) || (iVar4 = FUN_00407d50(uVar3), iVar1 = DAT_005ae98c, iVar4 != 0)) {
    return 0;
  }
  param_1 = 0;
  for (iVar4 = DAT_005ae998; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
    iVar5 = FUN_004f6000(&DAT_005ae974,iVar4);
    if ((((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) &&
        (*(int *)(iVar5 + 0x48) != *(int *)(uVar3 + 0x48))) &&
       (iVar6 = FUN_00407d50(iVar5), iVar6 == 0)) {
      iVar6 = FUN_00405a30((void *)(iVar5 + 0x68),iVar2);
      if ((iVar6 != 0) || (iVar5 = FUN_00405a10((void *)(iVar5 + 0x68),iVar2), iVar5 != 0)) {
        param_1 = param_1 + 1;
      }
    }
  }
  return param_1;
}


