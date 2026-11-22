
SIZE_T __cdecl FUN_0053f510(undefined *param_1)

{
  byte bVar1;
  byte *pbVar2;
  SIZE_T SVar3;
  uint local_8;
  undefined4 local_4;
  
  FUN_0053cbb0(9);
  pbVar2 = (byte *)FUN_005426f0(param_1,&local_4,&local_8);
  if (pbVar2 == (byte *)0x0) {
    FUN_0053cc30(9);
    SVar3 = HeapSize(DAT_005d6a04,0,param_1);
    return SVar3;
  }
  bVar1 = *pbVar2;
  FUN_0053cc30(9);
  return (uint)bVar1 << 4;
}


