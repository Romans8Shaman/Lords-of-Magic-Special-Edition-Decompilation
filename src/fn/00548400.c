/* Rebuilt from lomse.exe FUN_00548400 @ 0x00548400 (304 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5320 (*(UINT *)0x005d5320)
#define DAT_005d57dc (*(int *)0x005d57dc)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define GetLocaleInfoA (*(__typeof__(int (__stdcall *)(LCID, LCTYPE, LPSTR, int)) *)0x0054d110) /* KERNEL32.DLL!GetLocaleInfoA via IAT */
#define GetLocaleInfoW (*(__typeof__(int (__stdcall *)(LCID, LCTYPE, LPWSTR, int)) *)0x0054d104) /* KERNEL32.DLL!GetLocaleInfoW via IAT */
#define MultiByteToWideChar (*(__typeof__(int (__stdcall *)(UINT, DWORD, LPCSTR, int, LPWSTR, int)) *)0x0054d174) /* KERNEL32.DLL!MultiByteToWideChar via IAT */

#define LOM_SELF_00548400 1
int __cdecl rb_00548400(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_005d57dc == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_005d57dc = 2;
    }
    else {
      DAT_005d57dc = 1;
    }
  }
  if (DAT_005d57dc == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_005d57dc != 2) {
    return DAT_005d57dc;
  }
  if (param_5 == 0) {
    param_5 = DAT_005d5320;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData == 0) {
    return 0;
  }
  lpLCData = (LPSTR)FUN_0053c1f0(cchData);
  if (lpLCData == (LPSTR)0x0) {
    return 0;
  }
  iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
  if (iVar1 != 0) {
    if (param_4 == 0) {
      iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        FUN_0053bce0(lpLCData);
        return iVar1;
      }
    }
    else {
      iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
      if (iVar1 != 0) {
        FUN_0053bce0(lpLCData);
        return iVar1;
      }
    }
  }
  FUN_0053bce0(lpLCData);
  return 0;
}
