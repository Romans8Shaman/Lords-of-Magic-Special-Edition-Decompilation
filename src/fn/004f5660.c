/* Rebuilt from lomse.exe FUN_004f5660 @ 0x004f5660 (36 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f5660 1
undefined4 __thiscall rb_004f5660(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined4 *)(**(int **)((int)this + 0x118) + -4);
  **(int **)((int)this + 0x118) = (int)puVar2;
  *puVar2 = uVar1;
  *param_1 = 0;
  return 0;
}
