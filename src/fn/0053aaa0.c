/* Rebuilt from lomse.exe FUN_0053aaa0 @ 0x0053aaa0 (128 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateThread (*(__typeof__(HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, LPVOID, DWORD, LPDWORD)) *)0x0054d08c) /* KERNEL32.DLL!CreateThread via IAT */
#define FUN_0053ab20 ((undefined4 (__stdcall *)(LPVOID))0x0053ab20)
#define FUN_0053b440 ((undefined4 (__cdecl *)(uint))0x0053b440)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c4d0 ((int * (__cdecl *)(int, int))0x0053c4d0)
#define FUN_0053ef80 ((undefined4 (__cdecl *)(int))0x0053ef80)
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */
#define ResumeThread (*(__typeof__(DWORD (__stdcall *)(HANDLE)) *)0x0054d1dc) /* KERNEL32.DLL!ResumeThread via IAT */

#define LOM_SELF_0053aaa0 1
HANDLE __cdecl rb_0053aaa0(int param_1,SIZE_T param_2,int param_3)

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
