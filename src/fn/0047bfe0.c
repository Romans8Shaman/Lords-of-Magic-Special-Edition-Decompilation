/* Rebuilt from lomse.exe FUN_0047bfe0 @ 0x0047bfe0 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_004c4c10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c10)
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_0047bfe0 1
undefined4 __thiscall rb_0047bfe0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  uVar1 = FUN_004c4c10((void *)((int)this + 0x20),param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  return uVar1;
}
