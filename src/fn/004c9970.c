/* Rebuilt from lomse.exe FUN_004c9970 @ 0x004c9970 (28 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define SendDlgItemMessageA (*(__typeof__(LRESULT (__stdcall *)(HWND, int, UINT, WPARAM, LPARAM)) *)0x0054d2b8) /* USER32.DLL!SendDlgItemMessageA via IAT */

#define LOM_SELF_004c9970 1
void __fastcall rb_004c9970(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    SendDlgItemMessageA((HWND)*param_1,0x3ea,0x184,0,0);
  }
  return;
}
