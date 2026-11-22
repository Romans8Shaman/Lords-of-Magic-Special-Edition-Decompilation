/* Rebuilt from lomse.exe FUN_004b0520 @ 0x004b0520 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cd50 ((undefined4 (__thiscall *)(void *, int, uint))0x0049cd50)

#define LOM_SELF_004b0520 1
void __thiscall rb_004b0520(void *this,int param_1,uint param_2)

{
  if (*(void **)this != (void *)0x0) {
    FUN_0049cd50(*(void **)this,param_1,param_2);
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    FUN_0049cd50(*(void **)((int)this + 4),param_1,param_2);
  }
  if (*(void **)((int)this + 8) != (void *)0x0) {
    FUN_0049cd50(*(void **)((int)this + 8),param_1,param_2);
  }
  return;
}
