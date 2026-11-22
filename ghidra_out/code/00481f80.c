
undefined4 __fastcall FUN_00481f80(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  
  if (DAT_005d1e84 == (void *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = FUN_004b78c0(DAT_005d1e84);
  }
  if (1 < iVar2) {
    iVar2 = FUN_0048a400(0x584ae8);
    if (iVar2 == 1) {
      pcVar3 = FUN_004b1db0((void *)(param_1 + 0x520),2);
      cVar1 = *pcVar3;
      puVar4 = FUN_004b1db0((void *)(param_1 + 0x520),2);
      if ((int)(char)puVar4[4] * (int)cVar1 != 4) {
        if ((DAT_005cc9d4 < 0) || (0xf < DAT_005cc9d4)) {
          puVar4 = (undefined *)0x0;
        }
        else {
          puVar4 = &DAT_005af194 + DAT_005cc9d4 * 0x1d84;
        }
        if ((puVar4[0x15d8] & 2) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


