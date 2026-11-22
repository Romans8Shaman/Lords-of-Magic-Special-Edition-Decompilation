/* Rebuilt from lomse.exe FUN_0053c260 @ 0x0053c260 (85 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005770d4 (*(uint *)0x005770d4)
#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_005427b0 ((int * (__cdecl *)(uint))0x005427b0)
#define HeapAlloc (*(__typeof__(LPVOID (__stdcall *)(HANDLE, DWORD, SIZE_T)) *)0x0054d1c0) /* KERNEL32.DLL!HeapAlloc via IAT */

#define LOM_SELF_0053c260 1
int * __cdecl rb_0053c260(int param_1)

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
