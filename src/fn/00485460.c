/* Rebuilt from lomse.exe FUN_00485460 @ 0x00485460 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00485460 1
uint __thiscall rb_00485460(void *this,int param_1,byte param_2)

{
  uint uVar1;
  
  if (((param_2 & 1) != 0) && (uVar1 = FUN_00482ac0(this,param_1,3), uVar1 != 0)) {
    return uVar1;
  }
  if (((param_2 & 2) == 0) || (param_1 != -3)) {
    return 0;
  }
  return *(uint *)((int)this + 0x4820);
}
