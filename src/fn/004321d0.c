/* Rebuilt from lomse.exe FUN_004321d0 @ 0x004321d0 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004321d0 1
undefined4 __thiscall rb_004321d0(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x18) == 7) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 0x10) = param_1;
  if (iVar1 == param_1) {
    iVar1 = *(int *)((int)this + 0xc);
  }
  *(int *)((int)this + 0x14) = iVar1;
  *(undefined4 *)((int)this + 0x18) = 1;
  return 1;
}
