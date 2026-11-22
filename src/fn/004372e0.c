/* Rebuilt from lomse.exe FUN_004372e0 @ 0x004372e0 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c5170 ((undefined4 (__fastcall *)(undefined4 *))0x004c5170)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004372e0 1
void __fastcall rb_004372e0(undefined4 *param_1)

{
  FUN_004c5170(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  param_1[0x10] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return;
}
