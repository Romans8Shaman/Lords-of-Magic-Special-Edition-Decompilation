/* Rebuilt from lomse.exe FUN_004c5af0 @ 0x004c5af0 (75 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c5340 ((undefined4 (__fastcall *)(int))0x004c5340)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004c5af0 1
void __fastcall rb_004c5af0(int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1bc));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    iVar1 = 0;
    do {
      FUN_004c5340(*(int *)(param_1 + 0x1ac) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x19c;
    } while (iVar2 < *(int *)(param_1 + 0x1b0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1bc));
  return;
}
