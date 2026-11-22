
undefined4 FUN_0048c150(void)

{
  DWORD DVar1;
  
  if ((((DAT_00583574 == 0) && (DAT_005d1f24 == 0)) && (DAT_005aa118 < 1)) && (DAT_005af12c == 0)) {
    DAT_00583564 = DAT_00583564 + 1;
    FUN_0048a590();
    if (DAT_0058357c != 0) {
      DAT_0058357c = DAT_0058357c + -1;
      DAT_005835e8 = (uint)(DAT_005835e8 == 0);
      if (DAT_005835e8 != 0) {
        DAT_00583564 = DAT_00583564 + -1;
        return 0;
      }
    }
    if (DAT_00583560 < DAT_0055b574) {
      DAT_00583568 = DAT_00583568 + 1;
      DAT_00583560 = DAT_00583560 + 1;
      DAT_00583554 = 0;
      return 1;
    }
    if (DAT_00583554 == 0) {
      DAT_00583554 = timeGetTime();
    }
    else {
      DVar1 = timeGetTime();
      if (30000 < DVar1 - DAT_00583554) {
        FUN_0048c4a0();
        DAT_00583554 = 0;
        DAT_00583550 = DAT_00583550 + 1;
        return 0;
      }
    }
    DAT_00583550 = DAT_00583550 + 1;
  }
  return 0;
}


