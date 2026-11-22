/* Rebuilt from lomse.exe FUN_00493f50 @ 0x00493f50 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)

#define LOM_SELF_00493f50 1
void __thiscall rb_00493f50(void *this,int *param_1,int param_2,int param_3)

{
  void *this_00;
  
  this_00 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 4));
  if (this_00 == (void *)0x0) {
    return;
  }
  FUN_00491910(this_00,param_1,param_2,param_3);
  return;
}
