/* Rebuilt from lomse.exe FUN_004b02c0 @ 0x004b02c0 (71 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)

#define LOM_SELF_004b02c0 1
void __thiscall rb_004b02c0(void *this,uint param_1)

{
  void *this_00;
  
  this_00 = *(void **)this;
  if (this_00 != (void *)0x0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      param_1 = 2;
    }
    if (this_00 != (void *)0x0) {
      FUN_0049da80(this_00,param_1);
    }
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    FUN_0049da80(*(void **)((int)this + 4),param_1);
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    FUN_0049da80(*(void **)((int)this + 8),param_1);
  }
  return;
}
