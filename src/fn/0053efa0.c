/* Rebuilt from lomse.exe FUN_0053efa0 @ 0x0053efa0 (122 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574a50 (*(DWORD *)0x00574a50)
#define FUN_0053c4d0 ((int * (__cdecl *)(int, int))0x0053c4d0)
#define FUN_0053ef80 ((undefined4 (__cdecl *)(int))0x0053ef80)
#define GetCurrentThreadId (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d1a0) /* KERNEL32.DLL!GetCurrentThreadId via IAT */
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */
#define SetLastError (*(__typeof__(void (__stdcall *)(DWORD)) *)0x0054d198) /* KERNEL32.DLL!SetLastError via IAT */
#define TlsGetValue (*(__typeof__(LPVOID (__stdcall *)(DWORD)) *)0x0054d194) /* KERNEL32.DLL!TlsGetValue via IAT */
#define TlsSetValue (*(__typeof__(BOOL (__stdcall *)(DWORD, LPVOID)) *)0x0054d1e4) /* KERNEL32.DLL!TlsSetValue via IAT */
#define __amsg_exit ((void (__cdecl *)(int))0x0053c470)

#define LOM_SELF_0053efa0 1
DWORD * __stdcall rb_0053efa0(void)

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
