
void FUN_004b7a20(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  
  if (DAT_005d1e84 == 0) {
    bVar6 = true;
  }
  else {
    iVar5 = *(int *)(DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
    bVar6 = iVar5 == iVar1;
  }
  if (bVar6) {
    iVar1 = 0;
    puVar4 = &DAT_005af194;
    iVar5 = 0;
    do {
      iVar2 = FUN_004b6030(iVar1);
      if (-1 < iVar2) {
        FUN_004b7b50(iVar1,iVar2);
      }
      if ((iVar5 < 0) || (0x1d83f < iVar5)) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar4;
      }
      if (puVar3[0x44] != '\0') {
        if ((iVar5 < 0) || (0x1d83f < iVar5)) {
          puVar3 = (undefined *)0x0;
        }
        else {
          puVar3 = puVar4;
        }
        FUN_004c03b0(iVar1,puVar3 + 0x44);
      }
      iVar5 = iVar5 + 0x1d84;
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x1d84;
    } while (iVar5 < 0x1d840);
    FUN_004b2310(0x5aa12c);
    FUN_004b8f40(&DAT_005cd358,0,DAT_005aa134,DAT_005aa138,DAT_005aa13c,DAT_005aa140);
    FUN_004b9470();
  }
  return;
}


