/* Rebuilt from lomse.exe FUN_004c5140 @ 0x004c5140 (40 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004c5140 1
uint __fastcall rb_004c5140(int *param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = *param_1;
  iVar2 = param_1[1];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return (uint)(iVar1 == iVar2);
}
