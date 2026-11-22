/* Rebuilt from lomse.exe FUN_004c9830 @ 0x004c9830 (131 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateDialogParamA (*(__typeof__(HWND (__stdcall *)(HINSTANCE, LPCSTR, HWND, DLGPROC, LPARAM)) *)0x0054d2d0) /* USER32.DLL!CreateDialogParamA via IAT */
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004c97d0 ((undefined4 (__fastcall *)(undefined4 *))0x004c97d0)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define IsWindow (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d2c4) /* USER32.DLL!IsWindow via IAT */
#define LAB_004c9320 (*(undefined *)0x004c9320) /* code label used as address */
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */

#define LOM_SELF_004c9830 1
undefined4 __thiscall rb_004c9830(void *this,HINSTANCE param_1,HWND param_2)

{
  BOOL BVar1;
  HWND hWnd;
  
  if (*(HWND *)this != (HWND)0x0) {
    BVar1 = IsWindow(*(HWND *)this);
    if (BVar1 != 0) {
      ShowWindow(*(HWND *)this,0);
      ShowWindow(*(HWND *)this,5);
      FUN_004c97d0(this);
      FUN_00504ce0(&DAT_00584ae8,1,0);
      return 0;
    }
  }
  hWnd = CreateDialogParamA(param_1,(LPCSTR)0x66,param_2,(DLGPROC)&LAB_004c9320,0);
  *(HWND *)this = hWnd;
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  ShowWindow(hWnd,5);
  FUN_004c97d0(this);
  return 1;
}
