
int FUN_0052bd80(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004a6e60(&DAT_005ae958,param_1,param_2);
  iVar1 = FUN_004f6000(&DAT_005ae974,iVar1);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 1) {
      if (*(int *)(iVar1 + 0x54) < 0) {
        iVar1 = 0;
      }
    }
    else if (*(int *)(iVar1 + 4) == 7) {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(iVar1 + 0x44),0);
      if (uVar2 != 0) {
        return *(int *)(uVar2 + 0x1c);
      }
    }
    if (iVar1 != 0) {
      return *(int *)(iVar1 + 0x1c);
    }
  }
  iVar1 = FUN_004a6180(&DAT_005ae958,param_1,param_2);
  return iVar1;
}


