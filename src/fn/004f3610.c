/* Rebuilt from lomse.exe FUN_004f3610 @ 0x004f3610 (41 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f3110 ((undefined4 (__thiscall *)(void *, ushort))0x004f3110)
#define FUN_004f32d0 ((undefined4 (__fastcall *)(void *))0x004f32d0)

#define LOM_SELF_004f3610 1
uint __fastcall rb_004f3610(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004f32d0(param_1);
  if (iVar1 != 0) {
    FUN_004f3110(param_1,(ushort)*(byte *)(*(int *)((int)param_1 + 0x40) + 4));
  }
  return (uint)(iVar1 != 0);
}
