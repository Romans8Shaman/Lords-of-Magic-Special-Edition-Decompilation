/* Rebuilt from lomse.exe FUN_004c4e20 @ 0x004c4e20 (30 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */

#define LOM_SELF_004c4e20 1
undefined4 * __fastcall rb_004c4e20(undefined4 *param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}
