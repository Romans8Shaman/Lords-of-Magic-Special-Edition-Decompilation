/* Rebuilt from lomse.exe FUN_00500bb0 @ 0x00500bb0 (52 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define IsWindow (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d2c4) /* USER32.DLL!IsWindow via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define PostMessageA (*(__typeof__(BOOL (__stdcall *)(HWND, UINT, WPARAM, LPARAM)) *)0x0054d2b0) /* USER32.DLL!PostMessageA via IAT */
#define s_App__Exit_00573614 (*(char (*)[])0x00573614)

#define LOM_SELF_00500bb0 1
void __fastcall rb_00500bb0(int param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x26c));
  if (BVar1 != 0) {
    OutputDebugStringA(s_App__Exit_00573614);
    PostMessageA(*(HWND *)(param_1 + 0x26c),0x10,0,0);
  }
  return;
}
