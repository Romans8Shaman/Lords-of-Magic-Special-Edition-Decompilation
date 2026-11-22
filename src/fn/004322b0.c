/* Rebuilt from lomse.exe FUN_004322b0 @ 0x004322b0 (84 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005789e0 (*(undefined4 *)0x005789e0)
#define DAT_005789f8 (*(int *)0x005789f8)

#define LOM_SELF_004322b0 1
undefined4 __thiscall rb_004322b0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x18) == 7) {
    return 0;
  }
  if (*(int *)((int)this + 0x14) != param_1) {
    return 0;
  }
  if (DAT_005789f8 != 7) {
    puVar2 = &DAT_005789e0;
    puVar3 = this;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    DAT_005789f8 = 7;
  }
  *(undefined4 *)((int)this + 0x18) = 3;
  return 1;
}
