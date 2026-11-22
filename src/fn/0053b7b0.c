/* Rebuilt from lomse.exe FUN_0053b7b0 @ 0x0053b7b0 (153 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053b440 ((undefined4 (__cdecl *)(uint))0x0053b440)
#define FUN_00541ec0 ((uint (__cdecl *)(uint))0x00541ec0)
#define GetCurrentDirectoryA (*(__typeof__(DWORD (__stdcall *)(DWORD, LPSTR)) *)0x0054d1f4) /* KERNEL32.DLL!GetCurrentDirectoryA via IAT */
#define GetLastError (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d044) /* KERNEL32.DLL!GetLastError via IAT */
#define SetCurrentDirectoryA (*(__typeof__(BOOL (__stdcall *)(LPCSTR)) *)0x0054d1f8) /* KERNEL32.DLL!SetCurrentDirectoryA via IAT */
#define SetEnvironmentVariableA (*(__typeof__(BOOL (__stdcall *)(LPCSTR, LPCSTR)) *)0x0054d1ec) /* KERNEL32.DLL!SetEnvironmentVariableA via IAT */

#define LOM_SELF_0053b7b0 1
undefined4 __cdecl rb_0053b7b0(LPCSTR param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  uchar _fr[0x118] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef CHAR _t_local_10c;
  typedef undefined1 _t_local_10b;
  typedef undefined1 _t_local_10a;
  typedef undefined1 _t_local_109;
  typedef uint _t_local_108[66];
#define local_10c (*(_t_local_10c *)(_fr + 0x4))
#define local_10b (*(_t_local_10b *)(_fr + 0x5))
#define local_10a (*(_t_local_10a *)(_fr + 0x6))
#define local_109 (*(_t_local_109 *)(_fr + 0x7))
#define local_108 (*(_t_local_108 *)(_fr + 0x8))
  
  BVar2 = SetCurrentDirectoryA(param_1);
  if (BVar2 != 0) {
    DVar3 = GetCurrentDirectoryA(0x105,(LPSTR)local_108);
    if (DVar3 != 0) {
      cVar1 = (char)local_108[0];
      if (((cVar1 == '\\') || (cVar1 == '/')) && (cVar1 == (char)(local_108[0] >> 8))) {
        return 0;
      }
      local_10c = '=';
      uVar4 = FUN_00541ec0(local_108[0] & 0xff);
      local_10b = (undefined1)uVar4;
      local_10a = 0x3a;
      local_109 = 0;
      BVar2 = SetEnvironmentVariableA(&local_10c,(LPCSTR)local_108);
      if (BVar2 != 0) {
        return 0;
      }
    }
  }
  DVar3 = GetLastError();
  FUN_0053b440(DVar3);
  return 0xffffffff;
#undef local_10c
#undef local_10b
#undef local_10a
#undef local_109
#undef local_108
}
