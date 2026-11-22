/* Rebuilt from lomse.exe FUN_004c9810 @ 0x004c9810 (26 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define IsWindowVisible (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d2cc) /* USER32.DLL!IsWindowVisible via IAT */

#define LOM_SELF_004c9810 1
undefined4 __fastcall rb_004c9810(undefined4 *param_1)

{
  BOOL BVar1;
  
  if ((HWND)*param_1 != (HWND)0x0) {
    BVar1 = IsWindowVisible((HWND)*param_1);
    if (BVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
