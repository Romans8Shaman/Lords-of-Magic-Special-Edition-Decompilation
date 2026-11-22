/* Rebuilt from lomse.exe FUN_0053ccc0 @ 0x0053ccc0 (54 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_0053ccc0 1
void __cdecl rb_0053ccc0(uint param_1)

{
  if ((param_1 < 0x5771a0) || (0x577400 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    return;
  }
  FUN_0053cc30(((int)(param_1 - 0x5771a0) >> 5) + 0x1c);
  return;
}
