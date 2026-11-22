/* Rebuilt from lomse.exe FUN_004f6000 @ 0x004f6000 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f6000 1
int __thiscall rb_004f6000(void *this,int param_1)

{
  int iVar1;
  
  if ((((*(int *)((int)this + 8) == 0) || (param_1 < 0)) || (*(int *)((int)this + 0x10) <= param_1))
     || ((iVar1 = *(int *)(*(int *)((int)this + 8) + param_1 * 4), iVar1 == 0 ||
         (*(int *)(iVar1 + 0x28) < 0)))) {
    iVar1 = 0;
  }
  return iVar1;
}
