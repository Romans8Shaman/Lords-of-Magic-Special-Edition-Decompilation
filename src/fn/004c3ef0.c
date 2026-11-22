/* Rebuilt from lomse.exe FUN_004c3ef0 @ 0x004c3ef0 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c3bd0 ((undefined4 (__thiscall *)(void *, undefined1))0x004c3bd0)
#define FUN_004c3ed0 ((int (__thiscall *)(void *, int))0x004c3ed0)

#define LOM_SELF_004c3ef0 1
undefined4 __thiscall rb_004c3ef0(void *this,int param_1,undefined1 param_2)

{
  void *this_00;
  
  this_00 = (void *)FUN_004c3ed0(this,param_1);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  FUN_004c3bd0(this_00,param_2);
  return 1;
}
