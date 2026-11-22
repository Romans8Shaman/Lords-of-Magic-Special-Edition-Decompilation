/* Rebuilt from lomse.exe FUN_004b0310 @ 0x004b0310 (51 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)

#define LOM_SELF_004b0310 1
void __thiscall rb_004b0310(void *this,int param_1)

{
  if (*(void **)this != (void *)0x0) {
    FUN_0049dcc0(*(void **)this,param_1);
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 4),param_1);
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 8),param_1);
  }
  return;
}
