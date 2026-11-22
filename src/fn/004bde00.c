/* Rebuilt from lomse.exe FUN_004bde00 @ 0x004bde00 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004bdca0 ((int (__thiscall *)(void *, int, int))0x004bdca0)

#define LOM_SELF_004bde00 1
undefined4 __thiscall rb_004bde00(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004bdca0(this,param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_3;
  return 1;
}
