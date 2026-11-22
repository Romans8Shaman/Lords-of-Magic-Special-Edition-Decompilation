/* Rebuilt from lomse.exe FUN_00474a90 @ 0x00474a90 (58 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00472740 ((undefined4 (__thiscall *)(void *, uint))0x00472740)
#define FUN_00474ad0 ((undefined4 (__fastcall *)(int))0x00474ad0)
#define SetCursor (*(__typeof__(HCURSOR (__stdcall *)(HCURSOR)) *)0x0054d2d4) /* USER32.DLL!SetCursor via IAT */

#define LOM_SELF_00474a90 1
void __thiscall rb_00474a90(void *this,uint *param_1)

{
  uint uVar1;
  
  SetCursor((HCURSOR)param_1[1]);
  uVar1 = param_1[2];
  *(uint *)((int)this + 0x178) = uVar1;
  if ((uVar1 & 2) == 0) {
    FUN_00472740(this,*param_1);
    return;
  }
  FUN_00474ad0((int)this);
  return;
}
