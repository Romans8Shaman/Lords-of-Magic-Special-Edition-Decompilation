
undefined4 FUN_004a9ea0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  iVar4 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0xffffffff;
  }
  while ((((iVar2 = FUN_004f6000(&DAT_005ae974,iVar4), iVar2 == 0 || (*(int *)(iVar2 + 4) != 0)) ||
          (*(int *)(iVar2 + 0x48) != param_1)) ||
         ((((param_2 != 0x80000 || (uVar3 = FUN_00521e70((int *)(iVar2 + 0xc4)), uVar3 == 0)) &&
           ((param_2 != 0x40000 || (uVar3 = FUN_00521e50((int *)(iVar2 + 0xc4)), uVar3 == 0)))) &&
          ((param_2 != 0x100000 || (uVar3 = FUN_00521e30((int *)(iVar2 + 0xc4)), uVar3 == 0))))))) {
    iVar4 = iVar4 + 1;
    if (iVar1 < iVar4) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iVar2 + 0x1c);
}


