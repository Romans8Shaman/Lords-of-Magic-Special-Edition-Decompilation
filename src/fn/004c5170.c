/* Rebuilt from lomse.exe FUN_004c5170 @ 0x004c5170 (37 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004c5170 1
void __fastcall rb_004c5170(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  param_1[1] = 0;
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}
