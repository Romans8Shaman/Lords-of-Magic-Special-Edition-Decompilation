/* Rebuilt from lomse.exe FUN_004eb2f0 @ 0x004eb2f0 (228 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define FormatMessageA (*(__typeof__(DWORD (__stdcall *)(DWORD, LPCVOID, DWORD, DWORD, LPSTR, DWORD, va_list *)) *)0x0054d078) /* KERNEL32.DLL!FormatMessageA via IAT */
#define GetExitCodeThread (*(__typeof__(BOOL (__stdcall *)(HANDLE, LPDWORD)) *)0x0054d0a0) /* KERNEL32.DLL!GetExitCodeThread via IAT */
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */
#define LocalFree (*(__typeof__(HLOCAL (__stdcall *)(HLOCAL)) *)0x0054d074) /* KERNEL32.DLL!LocalFree via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define TerminateThread (*(__typeof__(BOOL (__stdcall *)(HANDLE, DWORD)) *)0x0054d09c) /* KERNEL32.DLL!TerminateThread via IAT */
#define WaitForSingleObject (*(__typeof__(DWORD (__stdcall *)(HANDLE, DWORD)) *)0x0054d0c4) /* KERNEL32.DLL!WaitForSingleObject via IAT */
#define s_SIGSEndThread_Forced_thread_term_00572edc (*(char (*)[])0x00572edc)
#define s_SIGSEndThread_Free_Thread_Resour_00572f08 (*(char (*)[])0x00572f08)
#define s_SIGSEndThread_thread_ABANDONED_00572f50 (*(char (*)[])0x00572f50)
#define s_SIGSEndThread_thread_FAILED_Wait_00572f2c (*(char (*)[])0x00572f2c)
#define s_SIGSEndThread_thread_failed_to_t_00572f70 (*(char (*)[])0x00572f70)
#define s_SIGSEndThread_thread_terminated_A_00572f9c (*(char (*)[])0x00572f9c)

#define LOM_SELF_004eb2f0 1
undefined4 __stdcall rb_004eb2f0(LPCSTR volatile param_1)

{
  LPCSTR hThread;
  DWORD dwMessageId;
  BOOL BVar1;
  DWORD dwLanguageId;
  LPCSTR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  HANDLE hObject;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef DWORD _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
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
#undef local_4
}
