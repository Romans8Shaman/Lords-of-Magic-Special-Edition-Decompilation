/* Rebuilt from lomse.exe FUN_00505a70 @ 0x00505a70 (23 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define GetAsyncKeyState (*(__typeof__(SHORT (__stdcall *)(int)) *)0x0054d2f0) /* USER32.DLL!GetAsyncKeyState via IAT */

#define LOM_SELF_00505a70 1
uint __stdcall rb_00505a70(void)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(0x11);
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)(uVar1 >> 0xf);
}
