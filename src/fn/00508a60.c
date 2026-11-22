/* Rebuilt from lomse.exe FUN_00508a60 @ 0x00508a60 (77 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_005080d0 ((undefined4 (__thiscall *)(void *, int, int, int))0x005080d0)

#define LOM_SELF_00508a60 1
undefined4 __stdcall rb_00508a60(int *param_1)

{
  int iVar1;
  undefined *this;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (0xf < iVar1)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  FUN_005080d0(this,param_1[1],param_1[2],param_1[3]);
  return 1;
}
