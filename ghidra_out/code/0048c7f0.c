
int FUN_0048c7f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  local_4 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  iVar1 = FUN_004c4d00((int *)&DAT_005cd2c4);
  while (0 < iVar1) {
    iVar2 = FUN_004c4cb0(&DAT_005cd2c4,&local_4);
    if (iVar2 != 0) {
      iVar3 = FUN_0048c2b0(iVar2);
      if (((iVar3 != 0) && (*(char *)(iVar2 + 7) == '\x02')) && (*(int *)(iVar3 + 4) != 0)) {
        iVar4 = iVar4 + 1;
      }
      iVar1 = iVar1 + -1;
    }
  }
  return iVar4;
}


