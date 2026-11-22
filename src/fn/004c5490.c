/* Rebuilt from lomse.exe FUN_004c5490 @ 0x004c5490 (23 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c5490 1
void __thiscall rb_004c5490(void *this,int param_1)

{
  int *piVar1;
  
  if ((-1 < param_1) && (param_1 < 0x10)) {
    piVar1 = (int *)((int)this + param_1 * 4 + 0x158);
    *piVar1 = *piVar1 + 1;
  }
  return;
}
