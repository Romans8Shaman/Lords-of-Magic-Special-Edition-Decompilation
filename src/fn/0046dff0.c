/* Rebuilt from lomse.exe FUN_0046dff0 @ 0x0046dff0 (75 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0046dff0 1
void __thiscall rb_0046dff0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0xc);
  if (-1 < iVar4 + -1) {
    iVar3 = (iVar4 + -1) * 0x30;
    do {
      iVar1 = *(int *)((int)this + 4) + iVar3;
      if (-1 < *(int *)(iVar1 + 0x20)) {
        if ((param_1 & 1 << ((byte)*(int *)(iVar1 + 0x20) & 0x1f)) == 0) {
          uVar2 = *(uint *)(iVar1 + 0x14) & 0xfffffff7;
        }
        else {
          uVar2 = *(uint *)(iVar1 + 0x14) | 8;
        }
        *(uint *)(iVar1 + 0x14) = uVar2;
      }
      iVar3 = iVar3 + -0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}
