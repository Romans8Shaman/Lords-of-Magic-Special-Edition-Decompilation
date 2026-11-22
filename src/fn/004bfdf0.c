/* Rebuilt from lomse.exe FUN_004bfdf0 @ 0x004bfdf0 (72 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_004bfdf0 1
int __fastcall rb_004bfdf0(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (this = (int *)FUN_004fbe60(&DAT_005ae974,0,3); this != (int *)0x0;
      this = (int *)FUN_004fbe60(&DAT_005ae974,(int)this,3)) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
    if (iVar1 == *(int *)(param_1 + 0x15a8)) {
      iVar2 = iVar2 + this[0x38];
    }
  }
  return iVar2;
}
