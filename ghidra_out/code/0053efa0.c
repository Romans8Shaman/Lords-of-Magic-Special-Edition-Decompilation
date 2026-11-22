
DWORD * FUN_0053efa0(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_00574a50);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_0053c4d0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00574a50,lpTlsValue);
      if (BVar1 != 0) {
        FUN_0053ef80((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        SetLastError(dwErrCode);
        return lpTlsValue;
      }
    }
    __amsg_exit(0x10);
  }
  SetLastError(dwErrCode);
  return lpTlsValue;
}


