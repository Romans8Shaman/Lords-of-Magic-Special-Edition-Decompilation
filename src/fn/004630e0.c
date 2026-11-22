/* Rebuilt from lomse.exe FUN_004630e0 @ 0x004630e0 (84 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004630e0 1
undefined4 __thiscall rb_004630e0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = 0xffffffff;
  iVar1 = *(int *)((int)this + 0x494);
  if ((iVar1 == 0) || (iVar2 = 0, iVar1 < 1)) {
    return 0;
  }
  piVar3 = (int *)((int)this + 0x14);
  do {
    if (*piVar3 == param_2) {
      *param_1 = *(undefined4 *)((int)this + iVar2 * 4 + 0x254);
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < iVar1);
  return 0;
}
