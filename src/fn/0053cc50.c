/* Rebuilt from lomse.exe FUN_0053cc50 @ 0x0053cc50 (54 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)

#define LOM_SELF_0053cc50 1
void __cdecl rb_0053cc50(uint param_1)

{
  if ((param_1 < 0x5771a0) || (0x577400 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  FUN_0053cbb0(((int)(param_1 - 0x5771a0) >> 5) + 0x1c);
  return;
}
