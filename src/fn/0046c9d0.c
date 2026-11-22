/* Rebuilt from lomse.exe FUN_0046c9d0 @ 0x0046c9d0 (71 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0046c9d0 1
undefined4 __thiscall rb_0046c9d0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1 + -1;
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  piVar2 = (int *)(iVar1 * 0x30 + 0x20 + *(int *)((int)this + 4));
  while (((*(byte *)(piVar2 + -4) & 1) == 0 || (*piVar2 < 0))) {
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + -0xc;
    if (iVar1 < 0) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(*(int *)((int)this + 4) + 0x20 + iVar1 * 0x30);
}
