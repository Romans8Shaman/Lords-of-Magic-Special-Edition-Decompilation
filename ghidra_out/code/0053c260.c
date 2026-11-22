
int * __cdecl FUN_0053c260(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_005770d4) {
    FUN_0053cbb0(9);
    piVar1 = FUN_005427b0(param_1 + 0xfU >> 4);
    FUN_0053cc30(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = HeapAlloc(DAT_005d6a04,0,dwBytes);
  return piVar1;
}


