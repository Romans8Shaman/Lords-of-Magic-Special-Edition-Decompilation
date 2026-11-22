
int __cdecl FUN_00544810(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_005d6b2c);
  bVar2 = DAT_005d6b28 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_005d6b2c);
    FUN_0053cbb0(0x13);
  }
  iVar1 = FUN_00544880(param_1,param_2);
  if (bVar2) {
    FUN_0053cc30(0x13);
    return iVar1;
  }
  InterlockedDecrement((LONG *)&DAT_005d6b2c);
  return iVar1;
}


