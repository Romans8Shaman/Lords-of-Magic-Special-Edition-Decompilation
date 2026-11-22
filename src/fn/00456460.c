/* Rebuilt from lomse.exe FUN_00456460 @ 0x00456460 (44 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00456460 1
void __thiscall rb_00456460(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 8;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) & 0xffe3ffff;
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + iVar2);
  *puVar1 = *puVar1 | 0x100000;
  return;
}
