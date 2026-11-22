
undefined4 FUN_004eb2f0(LPCSTR param_1)

{
  LPCSTR hThread;
  DWORD dwMessageId;
  BOOL BVar1;
  DWORD dwLanguageId;
  LPCSTR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  HANDLE hObject;
  DWORD local_4;
  
  hThread = param_1;
  local_4 = WaitForSingleObject(*(HANDLE *)param_1,8000);
  if (local_4 == 0) {
    OutputDebugStringA(s_SIGSEndThread_thread_terminated_A_00572f9c);
  }
  else if (local_4 == 0x102) {
    OutputDebugStringA(s_SIGSEndThread_thread_failed_to_t_00572f70);
  }
  else if (local_4 == 0x80) {
    OutputDebugStringA(s_SIGSEndThread_thread_ABANDONED_00572f50);
  }
  else if (local_4 == 0xffffffff) {
    OutputDebugStringA(s_SIGSEndThread_thread_FAILED_Wait_00572f2c);
    Arguments = (va_list *)0x0;
    lpBuffer = &param_1;
    nSize = 0;
    dwLanguageId = 0x400;
    param_1 = (LPCSTR)0x0;
    dwMessageId = GetLastError();
    FormatMessageA(0x1100,(LPCVOID)0x0,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
    OutputDebugStringA(param_1);
    LocalFree(param_1);
  }
  BVar1 = GetExitCodeThread(*(HANDLE *)hThread,&local_4);
  if (BVar1 != 0) {
    if (local_4 == 0) {
      OutputDebugStringA(s_SIGSEndThread_Free_Thread_Resour_00572f08);
      hObject = *(HANDLE *)hThread;
    }
    else {
      OutputDebugStringA(s_SIGSEndThread_Forced_thread_term_00572edc);
      TerminateThread(hThread,0xfffffffe);
      hObject = *(HANDLE *)hThread;
    }
    CloseHandle(hObject);
  }
  hThread[0] = '\0';
  hThread[1] = '\0';
  hThread[2] = '\0';
  hThread[3] = '\0';
  return 1;
}


