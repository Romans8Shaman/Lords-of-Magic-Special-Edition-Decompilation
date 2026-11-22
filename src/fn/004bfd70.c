/* Rebuilt from lomse.exe FUN_004bfd70 @ 0x004bfd70 (119 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_004bfd70 1
void __thiscall rb_004bfd70(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  
  this_00 = (int *)FUN_004fbe60(&DAT_005ae974,0,3);
  if (this_00 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
    if (iVar1 == *(int *)((int)this + 0x15a8)) {
      if (*param_1 <= this_00[0x38]) {
        this_00[0x38] = this_00[0x38] - *param_1;
        *param_1 = 0;
        return;
      }
      *param_1 = *param_1 - this_00[0x38];
      this_00[0x38] = 0;
    }
    this_00 = (int *)FUN_004fbe60(&DAT_005ae974,(int)this_00,3);
  } while (this_00 != (int *)0x0);
  return;
}
