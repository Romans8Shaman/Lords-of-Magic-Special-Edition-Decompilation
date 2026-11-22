/* Rebuilt from lomse.exe FUN_004a1950 @ 0x004a1950 (66 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a1950 1
void __thiscall rb_004a1950(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + param_1 * 200);
  while( true ) {
    if (*piVar2 == param_2) {
      return;
    }
    if (*piVar2 == -1) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x31 < iVar1) {
      return;
    }
  }
  *(int *)((int)this + (iVar1 + param_1 * 0x32) * 4) = param_2;
  return;
}
