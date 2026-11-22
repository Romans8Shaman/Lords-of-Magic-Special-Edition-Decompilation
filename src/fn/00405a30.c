/* Rebuilt from lomse.exe FUN_00405a30 @ 0x00405a30 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00405a30 1
undefined4 __thiscall rb_00405a30(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)((int)this + 0xc) != param_1) || (uVar1 = 1, (*(byte *)((int)this + 0x10) & 1) == 0))
  {
    uVar1 = 0;
  }
  return uVar1;
}
