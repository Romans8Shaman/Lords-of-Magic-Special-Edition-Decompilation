/* Rebuilt from lomse.exe FUN_004c5aa0 @ 0x004c5aa0 (79 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579274 (*(undefined1 *)0x00579274)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c5230 ((undefined4 (__thiscall *)(void *, char *))0x004c5230)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004c5aa0 1
void __fastcall rb_004c5aa0(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_004c5230(param_1 + 4,&DAT_00579274);
  param_1[0x6e] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  return;
}
