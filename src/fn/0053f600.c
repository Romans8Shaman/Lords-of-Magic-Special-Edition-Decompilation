/* Rebuilt from lomse.exe FUN_0053f600 @ 0x0053f600 (128 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define FUN_0053b440 ((undefined4 (__cdecl *)(uint))0x0053b440)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_00542f00 ((undefined4 (__cdecl *)(uint))0x00542f00)
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */
#define SetFilePointer (*(__typeof__(DWORD (__stdcall *)(HANDLE, LONG, PLONG, DWORD)) *)0x0054d178) /* KERNEL32.DLL!SetFilePointer via IAT */

#define LOM_SELF_0053f600 1
DWORD __cdecl rb_0053f600(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_00542f00(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_0053b4c0();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 == 0) {
    *(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    return DVar2;
  }
  FUN_0053b440(uVar3);
  return 0xffffffff;
}
