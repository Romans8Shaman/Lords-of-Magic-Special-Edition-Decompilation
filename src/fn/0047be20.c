/* Rebuilt from lomse.exe FUN_0047be20 @ 0x0047be20 (86 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c4b10 ((undefined4 (__thiscall *)(void *, int, int))0x004c4b10)
#define InitializeCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0e4) /* KERNEL32.DLL!InitializeCriticalSection via IAT */

#define LOM_SELF_0047be20 1
void __thiscall rb_0047be20(void *this,undefined4 param_1,undefined4 param_2)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x6c));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x38));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  *(undefined4 *)((int)this + 0x84) = 1;
  FUN_004c4b10((void *)((int)this + 8),0x32,0xf8);
  FUN_004c4b10((void *)((int)this + 0x20),0x32,0xf8);
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}
