/* Rebuilt from lomse.exe FUN_004551a0 @ 0x004551a0 (72 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aec3c (*(int *)0x005aec3c)

#define LOM_SELF_004551a0 1
int __thiscall rb_004551a0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = (int)*(char *)((int)this + 0x34);
  }
  else if (param_1 == 1) {
    iVar1 = (int)*(char *)((int)this + 0x35);
  }
  else if (param_1 == 2) {
    iVar1 = (int)*(char *)((int)this + 0x36);
  }
  uVar2 = iVar1 + DAT_005aec3c >> 0x1f;
  uVar2 = (((iVar1 + DAT_005aec3c ^ uVar2) - uVar2 & 7 ^ uVar2) - uVar2) + 1;
  uVar3 = (int)uVar2 >> 0x1f;
  return ((uVar2 ^ uVar3) - uVar3 & 7 ^ uVar3) - uVar3;
}
