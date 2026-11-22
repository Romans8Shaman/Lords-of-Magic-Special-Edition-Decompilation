/* Rebuilt from lomse.exe FUN_00450490 @ 0x00450490 (145 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d34 (*(uint *)0x005a7d34)
#define DAT_005a7d38 (*(int * *)0x005a7d38)
#define DAT_005ae94c (*(int * *)0x005ae94c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0041b6d0 ((undefined4 (__fastcall *)(int *))0x0041b6d0)
#define FUN_00453120 ((undefined4 (__cdecl *)(int))0x00453120)
#define FUN_004bfd40 ((undefined4 (__thiscall *)(void *, int *))0x004bfd40)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_00450490 1
undefined4 __fastcall rb_00450490(int *param_1)

{
  int iVar1;
  undefined *this;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_14[5];
#define aiStack_14 (*(_t_aiStack_14 *)(_fr + 0x4))
  
  DAT_005ae94c = param_1;
  FUN_004d05e0(DAT_005a7b78,DAT_005a7d34,DAT_005a7d38);
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
  if ((int *)param_1[0x11] != (int *)0x0) {
    FUN_0041b6d0((int *)param_1[0x11]);
  }
  FUN_00453120((int)param_1);
  return 1;
#undef aiStack_14
}
