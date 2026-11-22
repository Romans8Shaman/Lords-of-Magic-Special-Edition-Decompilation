/* Rebuilt from lomse.exe FUN_00485400 @ 0x00485400 (81 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583440 (*(undefined *)0x00583440)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00485400 1
undefined * __thiscall rb_00485400(void *this,int param_1,byte param_2)

{
  undefined *puVar1;
  
  if (((param_2 & 1) != 0) &&
     (puVar1 = (undefined *)FUN_00482ac0(this,param_1,2), puVar1 != (undefined *)0x0)) {
    return puVar1;
  }
  if (((param_2 & 2) != 0) && (param_1 == -3)) {
    return *(undefined **)((int)this + 0x4828);
  }
  if (((param_2 & 4) == 0) || (param_1 != -2)) {
    return (undefined *)0x0;
  }
  return &DAT_00583440;
}
