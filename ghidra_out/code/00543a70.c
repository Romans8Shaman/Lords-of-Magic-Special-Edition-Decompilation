
uint __cdecl FUN_00543a70(uint param_1)

{
  bool bVar1;
  
  if (DAT_005d5310 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_005d6b2c);
    bVar1 = DAT_005d6b28 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_005d6b2c);
      FUN_0053cbb0(0x13);
    }
    param_1 = FUN_00543b00(param_1);
    if (bVar1) {
      FUN_0053cc30(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_005d6b2c);
  }
  return param_1;
}


