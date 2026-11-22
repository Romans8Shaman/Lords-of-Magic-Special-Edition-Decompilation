/* Rebuilt from lomse.exe FUN_0047bf30 @ 0x0047bf30 (50 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c4d00 ((int (__fastcall *)(int *))0x004c4d00)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_0047bf30 1
undefined4 __fastcall rb_0047bf30(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = FUN_004c4d00(param_1 + 2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  return (uint)(0 < iVar1);
}
