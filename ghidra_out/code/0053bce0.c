
undefined4 __cdecl FUN_0053bce0(undefined *param_1)

{
  undefined *lpMem;
  BOOL in_EAX;
  byte *pbVar1;
  undefined4 uVar2;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_0053cbb0(9);
    pbVar1 = (byte *)FUN_005426f0(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_00542750(local_4,(int)param_1,pbVar1);
      uVar2 = FUN_0053cc30(9);
      return uVar2;
    }
    FUN_0053cc30(9);
    in_EAX = HeapFree(DAT_005d6a04,0,lpMem);
  }
  return in_EAX;
}


