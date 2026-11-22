/* Rebuilt from lomse.exe FUN_0043d300 @ 0x0043d300 (82 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0043d300 1
int * __thiscall rb_0043d300(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*(int *)((int)this + 4) < 1) {
    return (int *)0x0;
  }
  piVar2 = *(int **)((int)this + 8);
  while (((*piVar2 != param_1 || (piVar2[1] != param_3)) || (piVar2[2] != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 8;
    if (*(int *)((int)this + 4) <= iVar1) {
      return (int *)0x0;
    }
  }
  return *(int **)((int)this + 8) + iVar1 * 8;
}
