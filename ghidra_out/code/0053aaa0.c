
HANDLE __cdecl FUN_0053aaa0(int param_1,SIZE_T param_2,int param_3)

{
  int *lpThreadId;
  HANDLE hThread;
  DWORD DVar1;
  
  DVar1 = 0;
  lpThreadId = FUN_0053c4d0(1,0x74);
  if (lpThreadId != (int *)0x0) {
    FUN_0053ef80((int)lpThreadId);
    lpThreadId[0x12] = param_1;
    lpThreadId[0x13] = param_3;
    hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_2,FUN_0053ab20,lpThreadId,4,
                           (LPDWORD)lpThreadId);
    lpThreadId[1] = (int)hThread;
    if (hThread != (HANDLE)0x0) {
      DVar1 = ResumeThread(hThread);
      if (DVar1 != 0xffffffff) {
        return hThread;
      }
    }
    DVar1 = GetLastError();
  }
  FUN_0053bce0((undefined *)lpThreadId);
  if (DVar1 != 0) {
    FUN_0053b440(DVar1);
  }
  return (HANDLE)0xffffffff;
}


