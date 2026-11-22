/* Rebuilt from lomse.exe FUN_004c9930 @ 0x004c9930 (50 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584d58 (*(undefined4 *)0x00584d58)
#define FUN_004753d0 ((undefined4 (__fastcall *)(int))0x004753d0)
#define PostMessageA (*(__typeof__(BOOL (__stdcall *)(HWND, UINT, WPARAM, LPARAM)) *)0x0054d2b0) /* USER32.DLL!PostMessageA via IAT */
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */

#define LOM_SELF_004c9930 1
void __fastcall rb_004c9930(undefined4 *param_1)

{
  if ((HWND)*param_1 == (HWND)0x0) {
    return;
  }
  ShowWindow((HWND)*param_1,0);
  DAT_00584d58 = 0;
  PostMessageA((HWND)0x0,0x1c,1,0);
  FUN_004753d0(0x584ae8);
  return;
}
