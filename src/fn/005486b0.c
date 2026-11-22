/* Rebuilt from lomse.exe FUN_005486b0 @ 0x005486b0 (122 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d52d8 (*(int * *)0x005d52d8)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_00548a30 ((undefined4 (__cdecl *)(uint *, int))0x00548a30)
#define WideCharToMultiByte (*(__typeof__(int (__stdcall *)(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, LPBOOL)) *)0x0054d170) /* KERNEL32.DLL!WideCharToMultiByte via IAT */

#define LOM_SELF_005486b0 1
undefined4 __stdcall rb_005486b0(void)

{
  LPCWSTR lpWideCharStr;
  uint cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_005d52d8;
  piVar2 = DAT_005d52d8;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  while (((cbMultiByte = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                             (LPBOOL)0x0), cbMultiByte != 0 &&
          (lpMultiByteStr = (uint *)FUN_0053c1f0(cbMultiByte), lpMultiByteStr != (uint *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_00548a30(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}
