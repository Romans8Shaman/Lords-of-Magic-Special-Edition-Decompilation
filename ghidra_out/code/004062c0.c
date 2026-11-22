
undefined4 FUN_004062c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  iVar1 = DAT_005ae98c;
  if (uVar2 != 0) {
    if ((*(byte *)(uVar2 + 0x78) & 4) != 0) {
      return 1;
    }
    iVar5 = DAT_005ae998;
    if (DAT_005ae998 <= DAT_005ae98c) {
      do {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar5);
        if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
            (*(int *)(iVar3 + 0x48) != *(int *)(uVar2 + 0x48))) &&
           (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) {
          iVar4 = FUN_00405a30((void *)(iVar3 + 0x68),param_1);
          if (iVar4 != 0) {
            return 1;
          }
          iVar3 = FUN_00405a10((void *)(iVar3 + 0x68),param_1);
          if (iVar3 != 0) {
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        if (iVar1 < iVar5) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


