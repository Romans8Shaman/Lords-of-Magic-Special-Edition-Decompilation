/* Rebuilt from lomse.exe FUN_004ff890 @ 0x004ff890 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584d54 (*(HWND *)0x00584d54)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */
#define s_entered_minimize_and_continue_00573520 (*(char (*)[])0x00573520)

#define LOM_SELF_004ff890 1
undefined4 __cdecl rb_004ff890(void)

{
  OutputDebugStringA(s_entered_minimize_and_continue_00573520);
  if (DAT_00584d54 != (HWND)0x0) {
    ShowWindow(DAT_00584d54,6);
  }
  return 0;
}
