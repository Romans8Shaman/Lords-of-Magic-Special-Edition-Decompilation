/* Rebuilt from lomse.exe FUN_004b6030 @ 0x004b6030 (18 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00483c50 ((undefined4 (__thiscall *)(void *, int))0x00483c50)

#define LOM_SELF_004b6030 1
undefined4 __stdcall rb_004b6030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00483c50(&DAT_005aa12c,param_1);
  return uVar1;
}
