/* Rebuilt from lomse.exe FUN_004e9f30 @ 0x004e9f30 (85 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004e9f30 1
void __thiscall rb_004e9f30(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x20c)) {
    piVar1 = (int *)((int)this + 0x18);
    do {
      if ((param_1 & 1) == 0) {
        if (*piVar1 != 0) {
          *(undefined4 *)((int)this + 0x22c) = 1;
        }
        *piVar1 = 0;
      }
      else {
        if (*piVar1 == 0) {
          *(undefined4 *)((int)this + 0x22c) = 1;
        }
        *piVar1 = 1;
      }
      piVar1 = piVar1 + 4;
      param_1 = param_1 >> 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x20c));
  }
  return;
}
