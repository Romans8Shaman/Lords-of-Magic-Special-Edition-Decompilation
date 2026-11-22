/* Rebuilt from lomse.exe FUN_004b3580 @ 0x004b3580 (152 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055ce54 (*(undefined *)0x0055ce54)
#define DAT_0058662c (*(undefined *)0x0058662c)
#define DAT_00586770 (*(int *)0x00586770)
#define DAT_00586778 (*(int *)0x00586778)
#define DAT_005867bc (*(int *)0x005867bc)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004b32c0 ((undefined4 (__fastcall *)(int *))0x004b32c0)
#define FUN_004b3320 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004b3320)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_004b3580 1
undefined4 __thiscall rb_004b3580(void *this,LPCSTR param_1,int param_2)

{
  int iVar1;
  
  if (DAT_005867bc == 0) {
    return 0;
  }
  if (((param_2 != 0) || (-0x9c4 < DAT_00586770)) && ((param_2 != 1 || (-0x9c4 < DAT_00586778)))) {
    FUN_004b32c0(this);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
    *(undefined4 *)((int)this + 8) = 0;
    iVar1 = FUN_004b3320(this,param_1);
    if (iVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
      return 0;
    }
    FUN_0053a090((undefined1 *)((int)this + 0x2c),&DAT_0055ce54,(uint)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0058662c);
  }
  return 1;
}
