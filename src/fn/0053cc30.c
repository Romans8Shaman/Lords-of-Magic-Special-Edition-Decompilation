/* Rebuilt from lomse.exe FUN_0053cc30 @ 0x0053cc30. HAND (2026-11-12): converted from the asm fallback.
 * CRT _unlock(n): LeaveCriticalSection(lock table 0x574980[n]). */
#include "lom.h"

#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_0053cc30 1
void __cdecl rb_0053cc30(int param_1)
{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(0x574980 + param_1 * 4));
}
