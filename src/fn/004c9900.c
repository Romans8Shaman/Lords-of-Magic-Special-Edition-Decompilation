/* Rebuilt from lomse.exe FUN_004c9900 @ 0x004c9900 (24 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DestroyWindow (*(__typeof__(BOOL (__stdcall *)(HWND)) *)0x0054d280) /* USER32.DLL!DestroyWindow via IAT */

#define LOM_SELF_004c9900 1
void __fastcall rb_004c9900(undefined4 *param_1)

{
  if ((HWND)*param_1 != (HWND)0x0) {
    DestroyWindow((HWND)*param_1);
    *param_1 = 0;
  }
  return;
}
