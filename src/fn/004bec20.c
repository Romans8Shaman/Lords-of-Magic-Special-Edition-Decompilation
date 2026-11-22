/* Rebuilt from lomse.exe FUN_004bec20 @ 0x004bec20 (95 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004869d0 ((undefined4 (__thiscall *)(void *, undefined4))0x004869d0)
#define FUN_004bde00 ((undefined4 (__thiscall *)(void *, int, int, undefined4))0x004bde00)

#define LOM_SELF_004bec20 1
undefined4 __thiscall rb_004bec20(void *this,int *param_1)

{
  int iVar1;
  undefined *this_00;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (0xf < iVar1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  FUN_004bde00(this_00,param_1[2],param_1[1],param_1[3]);
  FUN_004869d0(this,*param_1);
  return 1;
}
