/* Rebuilt from lomse.exe FUN_004baa40 @ 0x004baa40 (37 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DeleteCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e0) /* KERNEL32.DLL!DeleteCriticalSection via IAT */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004baa40 1
void __fastcall rb_004baa40(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    Ordinal_403(param_1[2].DebugInfo,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return;
}
