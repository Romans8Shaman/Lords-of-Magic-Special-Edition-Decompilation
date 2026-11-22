/* Rebuilt from lomse.exe FUN_0042d800 @ 0x0042d800 (68 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049db80 ((undefined4 (__thiscall *)(void *, int))0x0049db80)

#define LOM_SELF_0042d800 1
void __thiscall rb_0042d800(void *this,int param_1)

{
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    FUN_0049db80(*(void **)((int)this + 0x10),param_1);
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    FUN_0049db80(*(void **)((int)this + 0x14),param_1);
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    FUN_0049db80(*(void **)((int)this + 0x18),param_1);
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_0049db80(*(void **)((int)this + 0x14),param_1);
  }
  return;
}
