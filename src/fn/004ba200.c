/* Rebuilt from lomse.exe FUN_004ba200 @ 0x004ba200 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5c00 ((undefined4 (__thiscall *)(void *, int *))0x004f5c00)

#define LOM_SELF_004ba200 1
undefined4 __thiscall rb_004ba200(void *this,int *param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    uVar1 = FUN_004f5c00(this,param_1);
    return uVar1;
  }
  return 0;
}
