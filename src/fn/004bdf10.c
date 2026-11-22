/* Rebuilt from lomse.exe FUN_004bdf10 @ 0x004bdf10 (65 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)

#define LOM_SELF_004bdf10 1
int __fastcall rb_004bdf10(int param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (this = FUN_004fbed0(&DAT_005ae974,0); this != (int *)0x0;
      this = FUN_004fbed0(&DAT_005ae974,(int)this)) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
    if (iVar1 == *(int *)(param_1 + 0x15a8)) {
      iVar2 = iVar2 + this[0x13];
    }
  }
  return iVar2;
}
