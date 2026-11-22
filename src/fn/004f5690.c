/* Rebuilt from lomse.exe FUN_004f5690 @ 0x004f5690 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f5690 1
undefined4 __thiscall rb_004f5690(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < param_1) {
    iVar1 = *(int *)((int)this + 0x114);
    piVar2 = (int *)(**(int **)((int)this + 0x118) + -4);
    **(int **)((int)this + 0x118) = (int)piVar2;
    *piVar2 = iVar1 + param_1 * 0x20;
  }
  return 0;
}
