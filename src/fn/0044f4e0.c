/* Rebuilt from lomse.exe FUN_0044f4e0 @ 0x0044f4e0 (44 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)

#define LOM_SELF_0044f4e0 1
undefined4 __thiscall rb_0044f4e0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00482ac0(this,*param_1,3);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_00483be0(this,piVar1);
  return 1;
}
