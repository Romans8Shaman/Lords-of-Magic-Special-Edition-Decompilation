/* Rebuilt from lomse.exe op_minimize @ 0x004e54e0 (15 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584d54 (*(HWND *)0x00584d54)
#define ShowWindow (*(__typeof__(BOOL (__stdcall *)(HWND, int)) *)0x0054d2c0) /* USER32.DLL!ShowWindow via IAT */

#define LOM_SELF_004e54e0 1
void __cdecl rb_004e54e0(void)

{
  ShowWindow(DAT_00584d54,6);
  return;
}
