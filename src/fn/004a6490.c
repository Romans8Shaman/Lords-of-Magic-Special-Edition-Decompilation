/* Rebuilt from lomse.exe FUN_004a6490 @ 0x004a6490 (56 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a5cb0 ((undefined4 (__thiscall *)(void *, int, int, int))0x004a5cb0)

#define LOM_SELF_004a6490 1
undefined4 __thiscall rb_004a6490(void *this,int param_1,int param_2)

{
  if ((param_1 < 0) || (param_2 < 0)) {
    return 0;
  }
  FUN_004a5cb0(this,param_1 % *(int *)((int)this + 0x5c),param_1 / *(int *)((int)this + 0x5c),
               param_2);
  return 1;
}
