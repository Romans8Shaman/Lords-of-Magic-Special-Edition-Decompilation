/* Rebuilt from lomse.exe FUN_0051bd00 @ 0x0051bd00 (25 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_0051bd00 1
undefined4 __stdcall rb_0051bd00(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_004c6fc0();
  uVar2 = FUN_004fbe60(puVar1 + 0x1c,param_1,0);
  return uVar2;
}
