/* Rebuilt from lomse.exe FUN_00544880 @ 0x00544880 (114 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_005d5320 (*(UINT *)0x005d5320)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define WideCharToMultiByte (*(__typeof__(int (__stdcall *)(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, LPBOOL)) *)0x0054d170) /* KERNEL32.DLL!WideCharToMultiByte via IAT */

#define LOM_SELF_00544880 1
int __cdecl rb_00544880(LPSTR volatile param_1, WCHAR volatile param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_005d5310 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_005d5320,0x220,&param_2,1,lpMultiByteStr,DAT_00575094,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_0053b4c0();
  *pDVar2 = 0x2a;
  return -1;
}
