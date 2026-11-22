/* Rebuilt from lomse.exe FUN_0050ecc0 @ 0x0050ecc0 (62 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)

#define LOM_SELF_0050ecc0 1
int __fastcall rb_0050ecc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *this;
  
  iVar1 = FUN_004b0ee0(&DAT_005cd304,*(int *)(param_1 + 0x48));
  this = *(int **)(param_1 + 0x58);
  if (this == (int *)0x0) {
    return 0;
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x38)))(this);
    if (iVar2 < iVar1) {
      return iVar1;
    }
    this = *(int **)(param_1 + 0x58);
  }
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x38)))(this);
  return iVar1;
}
