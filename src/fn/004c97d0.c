/* Rebuilt from lomse.exe FUN_004c97d0 @ 0x004c97d0 (53 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define SendDlgItemMessageA (*(__typeof__(LRESULT (__stdcall *)(HWND, int, UINT, WPARAM, LPARAM)) *)0x0054d2b8) /* USER32.DLL!SendDlgItemMessageA via IAT */
#define SendMessageA (*(__typeof__(LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM)) *)0x0054d2c8) /* USER32.DLL!SendMessageA via IAT */

#define LOM_SELF_004c97d0 1
void __fastcall rb_004c97d0(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    SendDlgItemMessageA((HWND)*param_1,1000,0xc,0,0x55dae0);
    SendMessageA((HWND)*param_1,0x111,0x3ed,0);
  }
  return;
}
