/* Rebuilt from lomse.exe FUN_004bddd0 @ 0x004bddd0 (38 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bdca0 ((int (__thiscall *)(void *, int, int))0x004bdca0)

#define LOM_SELF_004bddd0 1
undefined4 __thiscall rb_004bddd0(void *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004bdca0(this,param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_3 = *puVar1;
  return 1;
}
