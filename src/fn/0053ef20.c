/* Rebuilt from lomse.exe FUN_0053ef20 @ 0x0053ef20 (92 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574a50 (*(DWORD *)0x00574a50)
#define FUN_0053c4d0 ((int * (__cdecl *)(int, int))0x0053c4d0)
#define FUN_0053cb80 ((undefined4 (__stdcall *)(void))0x0053cb80)
#define FUN_0053ef80 ((undefined4 (__cdecl *)(int))0x0053ef80)
#define GetCurrentThreadId (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d1a0) /* KERNEL32.DLL!GetCurrentThreadId via IAT */
#define TlsAlloc (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d19c) /* KERNEL32.DLL!TlsAlloc via IAT */
#define TlsSetValue (*(__typeof__(BOOL (__stdcall *)(DWORD, LPVOID)) *)0x0054d1e4) /* KERNEL32.DLL!TlsSetValue via IAT */

#define LOM_SELF_0053ef20 1
undefined4 __stdcall rb_0053ef20(void)

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
