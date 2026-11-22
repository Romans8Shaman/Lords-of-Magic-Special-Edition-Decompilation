/* Rebuilt from lomse.exe FUN_0050cc70 @ 0x0050cc70 (162 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0041b6d0 ((undefined4 (__fastcall *)(int *))0x0041b6d0)
#define FUN_004bfd40 ((undefined4 (__thiscall *)(void *, int *))0x004bfd40)
#define _DAT_005cd1f4 (*(undefined4 *)0x005cd1f4)

#define LOM_SELF_0050cc70 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_0050cc70(int *param_1)

{
  int iVar1;
  undefined *this;
  int iVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_14[5];
#define aiStack_14 (*(_t_aiStack_14 *)(_fr + 0x4))
  
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    this = (undefined *)0x0;
  }
  else {
    this = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (this != (undefined *)0x0) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1), __typeof__(aiStack_14)))(**(code **)(*param_1 + 0x40)))(param_1,aiStack_14);
    if (iVar1 != 0) {
      FUN_004bfd40(this,aiStack_14);
    }
  }
  if ((int *)param_1[0x16] != (int *)0x0) {
    FUN_0041b6d0((int *)param_1[0x16]);
  }
  iVar1 = 0;
  if (0 < *(short *)((int)param_1 + 0x4e)) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[0x14] + 8 + iVar2) != 0) {
        _DAT_005cd1f4 = iVar1;
        FUN_0041b6d0(*(int **)(param_1[0x14] + 8 + iVar2));
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(short *)((int)param_1 + 0x4e));
  }
  _DAT_005cd1f4 = 0xffffffff;
  return;
#undef aiStack_14
}
