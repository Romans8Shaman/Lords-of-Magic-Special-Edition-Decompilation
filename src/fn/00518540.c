/* Rebuilt from lomse.exe FUN_00518540 @ 0x00518540 (30 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00518540 1
int __thiscall rb_00518540(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1ec) / *(int *)((int)this + 0x1dc);
  return (iVar1 + -2 + param_1) / (iVar1 + -1);
}
