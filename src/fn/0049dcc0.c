/* Rebuilt from lomse.exe FUN_0049dcc0 @ 0x0049dcc0 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aec3c (*(int *)0x005aec3c)
#define FUN_0049dc60 ((undefined4 (__thiscall *)(void *, int, int))0x0049dc60)

#define LOM_SELF_0049dcc0 1
void __thiscall rb_0049dcc0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 + DAT_005aec3c >> 0x1f;
  iVar1 = ((param_1 + DAT_005aec3c ^ uVar2) - uVar2 & 7 ^ uVar2) - uVar2;
  *(int *)((int)this + 8) = iVar1;
  FUN_0049dc60(this,iVar1 + 1U & 7,8);
  return;
}
