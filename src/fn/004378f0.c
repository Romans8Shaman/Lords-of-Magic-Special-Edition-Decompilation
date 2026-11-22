/* Rebuilt from lomse.exe FUN_004378f0 @ 0x004378f0 (58 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c5140 ((undefined4 (__fastcall *)(int *))0x004c5140)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004378f0 1
undefined4 __fastcall rb_004378f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c5140(param_1);
  if (iVar1 == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  iVar1 = param_1[0x10];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return (uint)(iVar1 != 0);
}
