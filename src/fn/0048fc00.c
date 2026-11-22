/* Rebuilt from lomse.exe FUN_0048fc00 @ 0x0048fc00 (100 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)

#define LOM_SELF_0048fc00 1
undefined4 __thiscall rb_0048fc00(void *this,uint param_1)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*(int *)((int)this + 0x50) < 1) {
    return 0;
  }
  iVar4 = 0;
  while( true ) {
    uVar1 = *(uint *)(*(int *)((int)this + 0x4c) + 0xc + iVar4);
    if (uVar1 == param_1) {
      return 1;
    }
    this_00 = (void *)FUN_005005f0(&DAT_00584ae8,uVar1);
    if ((this_00 != (void *)0x0) && (iVar2 = rb_0048fc00(this_00,param_1), iVar2 != 0)) break;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2c;
    if (*(int *)((int)this + 0x50) <= iVar3) {
      return 0;
    }
  }
  return 1;
}
