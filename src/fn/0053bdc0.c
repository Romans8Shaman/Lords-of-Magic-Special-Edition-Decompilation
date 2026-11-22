/* Rebuilt from lomse.exe FUN_0053bdc0 @ 0x0053bdc0 (144 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CloseHandle (*(__typeof__(BOOL (__stdcall *)(HANDLE)) *)0x0054d054) /* KERNEL32.DLL!CloseHandle via IAT */
#define DAT_005d6a20 (*(undefined4 *)0x005d6a20)
#define FUN_0053b440 ((undefined4 (__cdecl *)(uint))0x0053b440)
#define FUN_00542e60 ((undefined4 (__cdecl *)(uint))0x00542e60)
#define FUN_00542f00 ((undefined4 (__cdecl *)(uint))0x00542f00)
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */

#define LOM_SELF_0053bdc0 1
undefined4 __cdecl rb_0053bdc0(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_00542f00(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00542f00(1);
      iVar2 = FUN_00542f00(2);
      if (iVar1 == iVar2) goto LAB_0053be16;
    }
    hObject = (HANDLE)FUN_00542f00(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0053be18;
    }
  }
LAB_0053be16:
  DVar4 = 0;
LAB_0053be18:
  FUN_00542e60(param_1);
  *(undefined1 *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0053b440(DVar4);
  return 0xffffffff;
}
