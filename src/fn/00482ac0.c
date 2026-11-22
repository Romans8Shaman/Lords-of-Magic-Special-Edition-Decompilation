/* Rebuilt from lomse.exe FUN_00482ac0 @ 0x00482ac0 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00482ac0 1
uint __thiscall rb_00482ac0(void *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004f6000((void *)((int)this + 0x4848),param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 & (*(int *)(uVar1 + 4) != param_2) - 1;
}
