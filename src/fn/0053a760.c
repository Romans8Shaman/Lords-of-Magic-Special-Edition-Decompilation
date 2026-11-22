/* Rebuilt from lomse.exe FUN_0053a760 @ 0x0053a760 (45 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DeleteFileA (*(__typeof__(BOOL (__stdcall *)(LPCSTR)) *)0x0054d0a4) /* KERNEL32.DLL!DeleteFileA via IAT */
#define FUN_0053b440 ((undefined4 (__cdecl *)(uint))0x0053b440)
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */

#define LOM_SELF_0053a760 1
undefined4 __cdecl rb_0053a760(LPCSTR param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    return 0;
  }
  FUN_0053b440(uVar2);
  return 0xffffffff;
}
