/* Rebuilt from lomse.exe FUN_00482800 @ 0x00482800 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd358 (*(undefined *)0x005cd358)
#define FUN_004b9610 ((undefined4 (__thiscall *)(void *, char *))0x004b9610)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */

#define LOM_SELF_00482800 1
undefined4 __thiscall rb_00482800(void *this,char *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x228b0) = DVar1 + 1000;
  uVar2 = FUN_004b9610(&DAT_005cd358,param_1);
  return uVar2;
}
