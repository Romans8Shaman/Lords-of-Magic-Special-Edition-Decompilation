/* Rebuilt from lomse.exe FUN_004b32c0 @ 0x004b32c0 (85 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058662c (*(undefined *)0x0058662c)
#define DAT_005867bc (*(int *)0x005867bc)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004b32c0 1
void __fastcall rb_004b32c0(int *param_1)

{
  int *piVar1;
  
  if (DAT_005867bc != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      ((undefined4 (__stdcall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x48)))(piVar1);
      ((undefined4 (__stdcall *)(__typeof__((int *)*param_1)))(**(code **)(*(int *)*param_1 + 8)))((int *)*param_1);
      *param_1 = 0;
    }
    if ((int *)param_1[1] != (int *)0x0) {
      FUN_005394d0((int *)param_1[1]);
      param_1[1] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
  }
  return;
}
