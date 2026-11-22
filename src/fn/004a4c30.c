/* Rebuilt from lomse.exe FUN_004a4c30 @ 0x004a4c30 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00508f10 ((undefined4 (__thiscall *)(void *, int))0x00508f10)

#define LOM_SELF_004a4c30 1
undefined4 __thiscall rb_004a4c30(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00508f10((void *)((int)this + 0xd8),
                       (int)*(short *)(*(int *)((int)this + 0x54) + param_1 * 8));
  return uVar1;
}
