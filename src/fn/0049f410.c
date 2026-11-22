/* Rebuilt from lomse.exe FUN_0049f410 @ 0x0049f410 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049f410 1
void __thiscall rb_0049f410(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 5;
  piVar1 = this;
  do {
    if (*piVar1 < param_1) {
      *piVar1 = param_1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x5c) = 2;
  *(undefined4 *)((int)this + 0x60) = 0;
  return;
}
