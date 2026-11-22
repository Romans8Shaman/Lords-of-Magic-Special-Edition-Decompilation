/* Rebuilt from lomse.exe op_break @ 0x004d9e20 (66 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584d54 (*(HWND *)0x00584d54)
#define DebugBreak (*(__typeof__(void (__stdcall *)(void)) *)0x0054d0c0) /* KERNEL32.DLL!DebugBreak via IAT */
#define GetFocus (*(__typeof__(HWND (__stdcall *)(void)) *)0x0054d32c) /* USER32.DLL!GetFocus via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define SetActiveWindow (*(__typeof__(HWND (__stdcall *)(HWND)) *)0x0054d328) /* USER32.DLL!SetActiveWindow via IAT */
#define SetFocus (*(__typeof__(HWND (__stdcall *)(HWND)) *)0x0054d334) /* USER32.DLL!SetFocus via IAT */
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */
#define s_Minimized_window__00572670 (*(char (*)[])0x00572670)

#define LOM_SELF_004d9e20 1
void __cdecl rb_004d9e20(void)

{
  HWND hWnd;
  
  hWnd = GetFocus();
  ShowWindow(DAT_00584d54,6);
  OutputDebugStringA(s_Minimized_window__00572670);
  DebugBreak();
  SetActiveWindow(DAT_00584d54);
  if (hWnd != (HWND)0x0) {
    SetFocus(hWnd);
  }
  return;
}
