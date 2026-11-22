
undefined4 FUN_0053ef20(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_0053cb80();
  DAT_00574a50 = TlsAlloc();
  if (DAT_00574a50 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_0053c4d0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00574a50,lpTlsValue);
      if (BVar1 != 0) {
        FUN_0053ef80((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}


