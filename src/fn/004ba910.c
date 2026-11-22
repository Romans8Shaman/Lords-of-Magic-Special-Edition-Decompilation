/* Rebuilt from lomse.exe FUN_004ba910 @ 0x004ba910 (38 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004fbc50 ((undefined4 (__thiscall *)(void *, int))0x004fbc50)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_004ba910 1
void __thiscall rb_004ba910(void *this,int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x1c) = DVar1;
  FUN_004fbc50(&DAT_005ae974,param_1);
  *(undefined4 *)((int)this + 0x20) = 1;
  return;
}
