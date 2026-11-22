/* Rebuilt from lomse.exe FUN_0053cc90 @ 0x0053cc90 (40 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)

#define LOM_SELF_0053cc90 1
void __cdecl rb_0053cc90(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_0053cbb0(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}
