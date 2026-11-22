/* Rebuilt from lomse.exe FUN_004eb080 @ 0x004eb080 (143 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584d54 (*(HWND *)0x00584d54)
#define FUN_004eb2f0 ((undefined4 (__stdcall *)(LPCSTR))0x004eb2f0)
#define FreeLibrary (*(__typeof__(BOOL (__stdcall *)(HMODULE)) *)0x0054d090) /* KERNEL32.DLL!FreeLibrary via IAT */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define SetFocus (*(__typeof__(HWND (__stdcall *)(HWND)) *)0x0054d334) /* USER32.DLL!SetFocus via IAT */
#define SetForegroundWindow (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d310) /* USER32.DLL!SetForegroundWindow via IAT */
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */
#define s_ASIGSSession__Close_00572ec4 (*(char (*)[])0x00572ec4)
#define s_Unloading_SIGS_DLL_00572eb0 (*(char (*)[])0x00572eb0)

#define LOM_SELF_004eb080 1
undefined4 __fastcall rb_004eb080(undefined4 *param_1)

{
  OutputDebugStringA(s_ASIGSSession__Close_00572ec4);
  param_1[1] = 0;
  *param_1 = 0;
  if (param_1[4] != 0) {
    param_1[2] = 1;
    FUN_004eb2f0((LPCSTR)(param_1 + 4));
  }
  if ((param_1[9] != 0) && ((code *)param_1[0xc] != (code *)0x0)) {
    ((undefined4 (__stdcall *)(void))(*(code *)param_1[0xc]))();
    OutputDebugStringA(s_Unloading_SIGS_DLL_00572eb0);
    FreeLibrary((HMODULE)param_1[9]);
    param_1[9] = 0;
    ShowWindow(DAT_00584d54,9);
    SetForegroundWindow(DAT_00584d54);
    SetFocus(DAT_00584d54);
  }
  return 1;
}
