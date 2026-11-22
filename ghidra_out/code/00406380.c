
undefined4 FUN_00406380(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  iVar2 = DAT_005ae98c;
  if (uVar3 != 0) {
    bVar1 = *(byte *)(uVar3 + 0x78);
    if ((bVar1 & 4) != 0) {
      return 1;
    }
    if ((bVar1 & 1) != 0) {
      return 1;
    }
    if ((bVar1 & 2) != 0) {
      return 1;
    }
    iVar6 = DAT_005ae998;
    if (DAT_005ae998 <= DAT_005ae98c) {
      do {
        iVar4 = FUN_004f6000(&DAT_005ae974,iVar6);
        if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
            (*(int *)(iVar4 + 0x48) != *(int *)(uVar3 + 0x48))) &&
           (iVar5 = FUN_00407d50(iVar4), iVar5 == 0)) {
          iVar5 = FUN_00405a30((void *)(iVar4 + 0x68),param_1);
          if (iVar5 != 0) {
            return 1;
          }
          iVar4 = FUN_00405a10((void *)(iVar4 + 0x68),param_1);
          if (iVar4 != 0) {
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        if (iVar2 < iVar6) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


