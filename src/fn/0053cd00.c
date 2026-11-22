/* Rebuilt from lomse.exe FUN_0053cd00 @ 0x0053cd00 (40 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_0053cd00 1
void __cdecl rb_0053cd00(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_0053cc30(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}
