/* Rebuilt from lomse.exe FUN_004baa20 @ 0x004baa20 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */

#define LOM_SELF_004baa20 1
LPCRITICAL_SECTION __fastcall rb_004baa20(LPCRITICAL_SECTION param_1)

{
  param_1[1].LockCount = 0;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[2].LockCount = 0;
  param_1[2].RecursionCount = 0;
  param_1[2].OwningThread = (HANDLE)0x0;
  InitializeCriticalSection(param_1);
  return param_1;
}
