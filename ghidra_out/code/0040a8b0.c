
int FUN_0040a8b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_3;
  iVar1 = param_1;
  iVar5 = 0;
  do {
    iVar3 = FUN_00409f70(&DAT_005ae958,*(int *)(iVar1 + 0x1c),iVar2,iVar5,&param_3,&param_1);
    if (iVar3 != -1) {
      iVar3 = FUN_004a8330(&DAT_005ae958,iVar3,0);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x28) == *(int *)(param_2 + 0x28))) {
        return iVar2;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  iVar5 = 0;
  do {
    if (iVar5 != iVar2) {
      iVar3 = 0;
      do {
        iVar4 = FUN_00409f70(&DAT_005ae958,*(int *)(iVar1 + 0x1c),iVar5,iVar3,&param_3,&param_1);
        if (iVar4 != -1) {
          iVar4 = FUN_004a8330(&DAT_005ae958,iVar4,0);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x28) == *(int *)(param_2 + 0x28))) {
            return iVar5;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x19);
    }
    iVar5 = iVar5 + 1;
    if (7 < iVar5) {
      return -1;
    }
  } while( true );
}


