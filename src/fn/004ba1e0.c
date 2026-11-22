/* Rebuilt from lomse.exe FUN_004ba1e0 @ 0x004ba1e0 (29 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5a10 ((undefined4 (__thiscall *)(void *, int, int))0x004f5a10)

#define LOM_SELF_004ba1e0 1
undefined4 __thiscall rb_004ba1e0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    uVar1 = FUN_004f5a10(this,param_1,param_2);
    return uVar1;
  }
  return 0;
}
