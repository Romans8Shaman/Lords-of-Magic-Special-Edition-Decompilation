
uint __cdecl FUN_00547d70(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_005d6b2c);
  bVar2 = DAT_005d6b28 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_005d6b2c);
    FUN_0053cbb0(0x13);
  }
  uVar1 = FUN_00547df0(param_1,param_2,param_3);
  if (bVar2) {
    FUN_0053cc30(0x13);
    return uVar1;
  }
  InterlockedDecrement((LONG *)&DAT_005d6b2c);
  return uVar1;
}


