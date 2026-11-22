/* Rebuilt from lomse.exe FUN_00474af0 @ 0x00474af0 (42 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00472720 ((undefined4 (__fastcall *)(void *))0x00472720)
#define LoadCursorA (*(__typeof__(HCURSOR (__stdcall *)(HINSTANCE, LPCSTR)) *)0x0054d2d8) /* USER32.DLL!LoadCursorA via IAT */
#define SetCursor (*(__typeof__(HCURSOR (__stdcall *)(HCURSOR)) *)0x0054d2d4) /* USER32.DLL!SetCursor via IAT */

#define LOM_SELF_00474af0 1
void __fastcall rb_00474af0(void *param_1)

{
  HCURSOR hCursor;
  
  *(undefined4 *)((int)param_1 + 0x178) = 2;
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  SetCursor(hCursor);
  FUN_00472720(param_1);
  return;
}
