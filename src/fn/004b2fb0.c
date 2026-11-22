/* Rebuilt from lomse.exe FUN_004b2fb0 @ 0x004b2fb0 (28 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b2820 ((undefined4 (__fastcall *)(undefined4 *))0x004b2820)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_004b2fb0 1
void __fastcall rb_004b2fb0(undefined4 *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  if (5000 < DVar1 - param_1[1]) {
    FUN_004b2820(param_1);
  }
  return;
}
