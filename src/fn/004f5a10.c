/* Rebuilt from lomse.exe FUN_004f5a10 @ 0x004f5a10 (52 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049d7c0 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x0049d7c0)

#define LOM_SELF_004f5a10 1
undefined4 __thiscall rb_004f5a10(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x28) < 0) {
    return 0;
  }
  uVar1 = FUN_0049d7c0(*(void **)((int)this + 0x2c),param_1,param_2,*(int *)((int)this + 0x14),
                       *(int *)((int)this + 0x18));
  return uVar1;
}
