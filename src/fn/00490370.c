/* Rebuilt from lomse.exe FUN_00490370 @ 0x00490370 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583610 (*(int *)0x00583610)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00493360 ((int (__thiscall *)(void *, int))0x00493360)
#define FUN_00497ac0 ((undefined4 (__thiscall *)(void *, int))0x00497ac0)

#define LOM_SELF_00490370 1
void __thiscall rb_00490370(void *this,int param_1)

{
  void *this_00;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x50) <= param_1)) {
    DAT_00583610 = 0;
  }
  else {
    DAT_00583610 = *(int *)((int)this + 0x4c) + param_1 * 0x2c;
    this_00 = (void *)FUN_00493360(&DAT_005a7b50,
                                   *(int *)(*(int *)((int)this + 0x4c) + 0xc + param_1 * 0x2c));
    if (this_00 != (void *)0x0) {
      FUN_00497ac0(this_00,1);
      return;
    }
  }
  return;
}
