/* Rebuilt from lomse.exe FUN_00463010 @ 0x00463010 (112 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00463010 1
undefined4 __thiscall rb_00463010(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x494);
  if ((iVar1 == 0) || (iVar4 = 0, iVar1 < 1)) {
    return 0;
  }
  piVar2 = (int *)((int)this + 0x14);
  do {
    if (*piVar2 == param_2) {
      iVar3 = 0;
      if (0 < iVar1) {
        piVar2 = (int *)((int)this + 0x254);
        do {
          if (*piVar2 == param_1) {
            *piVar2 = -1;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < *(int *)((int)this + 0x494));
      }
      *(int *)((int)this + iVar4 * 4 + 0x254) = param_1;
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < iVar1);
  return 0;
}
