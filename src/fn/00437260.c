/* Rebuilt from lomse.exe FUN_00437260 @ 0x00437260 (119 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DeleteCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e0) /* KERNEL32.DLL!DeleteCriticalSection via IAT */
#define FUN_004380a0 ((undefined4 (__fastcall *)(undefined4 *))0x004380a0)
#define FUN_004c4e40 ((undefined4 (__fastcall *)(undefined4 *))0x004c4e40)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00437260 1
void __fastcall rb_00437260(undefined4 *param_1)

{

  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (param_1[0x43] != 0) {
    Ordinal_403(param_1[0x43],s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  FUN_004380a0(param_1 + 0x1b);
  FUN_004c4e40(param_1);
  return;
}
