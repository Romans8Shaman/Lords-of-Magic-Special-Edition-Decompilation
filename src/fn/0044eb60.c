/* Rebuilt from lomse.exe FUN_0044eb60 @ 0x0044eb60 (46 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0044eb60 1
int __fastcall rb_0044eb60(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  this = *(int **)(param_1 + 0x44);
  if (this == (int *)0x0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x340);
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x38)))(this);
  if (iVar1 < iVar2) {
    return iVar2;
  }
  iVar2 = ((undefined4 (__thiscall *)(__typeof__(*(int **)(param_1 + 0x44))))(**(code **)(**(int **)(param_1 + 0x44) + 0x38)))(*(int **)(param_1 + 0x44));
  return iVar2;
}
