/* Rebuilt from lomse.exe FUN_0053c5f0 @ 0x0053c5f0 (41 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053c5a0 ((undefined4 (__stdcall *)(void))0x0053c5a0)
#define GetModuleHandleA (*(__typeof__(HMODULE (__stdcall *)(LPCSTR)) *)0x0054d098) /* KERNEL32.DLL!GetModuleHandleA via IAT */
#define GetProcAddress (*(__typeof__(FARPROC (__stdcall *)(HMODULE, LPCSTR)) *)0x0054d094) /* KERNEL32.DLL!GetProcAddress via IAT */

#define LOM_SELF_0053c5f0 1
int __stdcall rb_0053c5f0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  
  hModule = GetModuleHandleA(((char *)0x0054ef0c));
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,((char *)0x0054eef0));
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = ((undefined4 (__stdcall *)(__typeof__(0)))(*pFVar1))(0);
      return iVar2;
    }
  }
  uVar3 = FUN_0053c5a0();
  return uVar3;
}
