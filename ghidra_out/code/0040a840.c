
undefined4 FUN_0040a840(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_3;
  iVar2 = param_2;
  iVar1 = param_1;
  iVar5 = 0;
  do {
    iVar4 = FUN_00409f70(&DAT_005ae958,*(int *)(iVar1 + 0x1c),iVar3,iVar5,&param_3,&param_1);
    if (iVar4 != -1) {
      iVar4 = FUN_004a8330(&DAT_005ae958,iVar4,0);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x28) == *(int *)(iVar2 + 0x28))) {
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
    if (0x18 < iVar5) {
      return 0;
    }
  } while( true );
}


