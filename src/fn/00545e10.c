/* Rebuilt from lomse.exe FUN_00545e10 @ 0x00545e10 (254 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(uint *)0x00575094)
#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_005d5320 (*(UINT *)0x005d5320)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define MultiByteToWideChar (*(__typeof__(int (__stdcall *)(UINT, DWORD, LPCSTR, int, LPWSTR, int)) *)0x0054d174) /* KERNEL32.DLL!MultiByteToWideChar via IAT */
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_00545e10 1
uint __cdecl rb_00545e10(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_005d5310 == 0) {
        if (param_1 == (LPWSTR)0x0) {
          return 1;
        }
        *param_1 = (ushort)bVar1;
        return 1;
      }
      if ((PTR_DAT_00574e88[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_005d5320,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (((1 < (int)DAT_00575094) && ((int)DAT_00575094 <= (int)param_3)) &&
           (iVar2 = MultiByteToWideChar(DAT_005d5320,9,(LPCSTR)param_2,DAT_00575094,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
          return DAT_00575094;
        }
        if (DAT_00575094 <= param_3) {
          if (param_2[1] == 0) {
            pDVar3 = FUN_0053b4c0();
            *pDVar3 = 0x2a;
            return 0xffffffff;
          }
          return DAT_00575094;
        }
      }
      pDVar3 = FUN_0053b4c0();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
      return 0;
    }
  }
  return 0;
}
