/* Rebuilt from lomse.exe FUN_004f5b70 @ 0x004f5b70 (25 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)

#define LOM_SELF_004f5b70 1
undefined4 __thiscall rb_004f5b70(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_0049dcc0(*(void **)((int)this + 0x2c),param_1);
  return uVar1;
}
