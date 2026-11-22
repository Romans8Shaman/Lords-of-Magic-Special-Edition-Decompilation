/* Rebuilt from lomse.exe FUN_004562f0 @ 0x004562f0 (54 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004562f0 1
void __thiscall rb_004562f0(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = (*(int *)((int)this + 0x6c) * param_2 + param_1) * 8;
  *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) =
       *(uint *)(*(int *)((int)this + 100) + 4 + iVar2) & 0xffe3ffff;
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + iVar2);
  *puVar1 = *puVar1 | 0x100000;
  return;
}
