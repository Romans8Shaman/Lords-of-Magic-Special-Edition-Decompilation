/* Rebuilt from lomse.exe FUN_004baa70 @ 0x004baa70 (26 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004baa70 1
void __fastcall rb_004baa70(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  LeaveCriticalSection(param_1);
  return;
}
