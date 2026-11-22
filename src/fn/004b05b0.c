/* Rebuilt from lomse.exe FUN_004b05b0 @ 0x004b05b0 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049cd80 ((undefined4 (__thiscall *)(void *, uint, uint, int, int, int))0x0049cd80)

#define LOM_SELF_004b05b0 1
void __thiscall rb_004b05b0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  if (*(void **)((int)this + 8) != (void *)0x0) {
    FUN_0049cd80(*(void **)((int)this + 8),param_1,param_2,param_3,1,param_4);
  }
  return;
}
