
undefined4 __fastcall FUN_0040dfb0(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  
  iVar3 = FUN_004f6000(&DAT_005ae974,param_1[2]);
  if (iVar3 == 0) {
    return 0;
  }
  uVar6 = 0;
  bVar4 = 0;
  puVar7 = &DAT_005af194;
  iVar3 = 0;
  do {
    if (iVar3 != 0x1babc) {
      if ((iVar3 < 0) || (0x1d83f < iVar3)) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = puVar7;
      }
      if (puVar5 != (undefined *)0x0) {
        if ((puVar5[0x15d8] & 2) == 0) {
          bVar2 = (byte)param_1[1] & 4;
        }
        else {
          bVar2 = (byte)param_1[1] & 8;
        }
        if (bVar2 != 0) {
          uVar6 = uVar6 | 1 << (bVar4 & 0x1f);
        }
      }
    }
    iVar3 = iVar3 + 0x1d84;
    bVar4 = bVar4 + 1;
    puVar7 = puVar7 + 0x1d84;
  } while (iVar3 < 0x1d840);
  uVar1 = *param_1;
  *param_1 = uVar1 & uVar6;
  return (uint)((uVar1 & uVar6) != 0);
}


