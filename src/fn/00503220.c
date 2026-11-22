/* Rebuilt from lomse.exe FUN_00503220 @ 0x00503220 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_00503220 1
void __thiscall rb_00503220(void *this,int param_1)

{
  if ((param_1 != 0) && (*(char *)((int)this + 0x1b0) != '\0')) {
    FUN_004d05e0(*(void **)((int)this + 0x23090),*(uint *)((int)this + 0x1b0),
                 *(int **)((int)this + 0x1b4));
  }
  return;
}
