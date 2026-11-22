/* Rebuilt from lomse.exe FUN_004c4e60 @ 0x004c4e60 (76 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c4e60 1
void __fastcall rb_004c4e60(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (param_1[3] != 0) {
    Ordinal_403(param_1[3],s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}
