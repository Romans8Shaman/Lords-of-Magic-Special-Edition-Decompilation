/* Rebuilt from lomse.exe FUN_0043d360 @ 0x0043d360 (116 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043d300 ((int * (__thiscall *)(void *, int, int, int))0x0043d300)

#define LOM_SELF_0043d360 1
undefined4 __thiscall rb_0043d360(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  piVar1 = FUN_0043d300(this,*param_1,param_1[2],param_1[1]);
  if (piVar1 != (int *)0x0) {
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *param_1;
      param_1 = param_1 + 1;
      piVar1 = piVar1 + 1;
    }
    return 1;
  }
  if (*(int *)this <= *(int *)((int)this + 4)) {
    return 0;
  }
  piVar1 = (int *)(*(int *)((int)this + 4) * 0x20 + *(int *)((int)this + 8));
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = *param_1;
    param_1 = param_1 + 1;
    piVar1 = piVar1 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 1;
}
