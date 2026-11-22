/* Rebuilt from lomse.exe FUN_00543560 @ 0x00543560 (342 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5668 (*(int *)0x005d5668)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FreeEnvironmentStringsA (*(__typeof__(BOOL (__stdcall *)(LPCH)) *)0x0054d134) /* KERNEL32.DLL!FreeEnvironmentStringsA via IAT */
#define FreeEnvironmentStringsW (*(__typeof__(BOOL (__stdcall *)(LPWCH)) *)0x0054d130) /* KERNEL32.DLL!FreeEnvironmentStringsW via IAT */
#define GetEnvironmentStrings (*(__typeof__(LPCH (__stdcall *)(void)) *)0x0054d12c) /* KERNEL32.DLL!GetEnvironmentStrings via IAT */
#define GetEnvironmentStringsW (*(__typeof__(LPWCH (__stdcall *)(void)) *)0x0054d128) /* KERNEL32.DLL!GetEnvironmentStringsW via IAT */
#define WideCharToMultiByte (*(__typeof__(int (__stdcall *)(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, LPBOOL)) *)0x0054d170) /* KERNEL32.DLL!WideCharToMultiByte via IAT */

#define LOM_SELF_00543560 1
LPSTR __stdcall rb_00543560(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar4;
  WCHAR *pWVar3;
  int iVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPCH pCVar8;
  LPCH pCVar9;
  LPCH pCVar10;
  LPWCH lpWideCharStr;
  CHAR *pCVar11;
  LPSTR pCVar12;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar10 = (LPCH)0x0;
  if (DAT_005d5668 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_005d5668 = 2;
    }
    else {
      DAT_005d5668 = 1;
    }
  }
  if (DAT_005d5668 == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar4 = pWVar3;
          pWVar3 = pWVar4 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar4 + 2;
        WVar2 = *pWVar3;
      }
      iVar5 = ((int)pWVar3 - (int)lpWideCharStr >> 1) + 1;
      uVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uVar6 == 0) || (pCVar7 = (LPSTR)FUN_0053c1f0(uVar6), pCVar7 == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(lpWideCharStr);
        return (LPSTR)0x0;
      }
      iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar5 == 0) {
        FUN_0053bce0(pCVar7);
        pCVar7 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return pCVar7;
    }
  }
  else if ((DAT_005d5668 == 2) &&
          ((pCVar10 != (LPCH)0x0 || (pCVar10 = GetEnvironmentStrings(), pCVar10 != (LPCH)0x0)))) {
    cVar1 = *pCVar10;
    pCVar9 = pCVar10;
    while (cVar1 != '\0') {
      do {
        pCVar8 = pCVar9;
        pCVar9 = pCVar8 + 1;
      } while (pCVar8[1] != '\0');
      pCVar9 = pCVar8 + 2;
      cVar1 = pCVar8[2];
    }
    pCVar9 = pCVar9 + (1 - (int)pCVar10);
    pCVar7 = (LPSTR)FUN_0053c1f0((uint)pCVar9);
    if (pCVar7 == (LPSTR)0x0) {
      FreeEnvironmentStringsA(pCVar10);
      return (LPSTR)0x0;
    }
    pCVar11 = pCVar10;
    pCVar12 = pCVar7;
    for (uVar6 = (uint)pCVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pCVar12 = *(undefined4 *)pCVar11;
      pCVar11 = pCVar11 + 4;
      pCVar12 = pCVar12 + 4;
    }
    for (uVar6 = (uint)pCVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pCVar12 = *pCVar11;
      pCVar11 = pCVar11 + 1;
      pCVar12 = pCVar12 + 1;
    }
    FreeEnvironmentStringsA(pCVar10);
    return pCVar7;
  }
  return (LPSTR)0x0;
}
