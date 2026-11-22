/* Rebuilt from lomse.exe FUN_00481a10 @ 0x00481a10 (29 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_00481a10 1
void __thiscall rb_00481a10(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 0x228ac) = param_1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x228b0) = DVar1;
  return;
}
