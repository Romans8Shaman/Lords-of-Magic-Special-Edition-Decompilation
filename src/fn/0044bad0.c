/* Rebuilt from lomse.exe FUN_0044bad0 @ 0x0044bad0 (236 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0044b610 ((undefined4 (__thiscall *)(void *, int *))0x0044b610)
#define FUN_00526d10 ((undefined4 (__thiscall *)(void *, int *))0x00526d10)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)

#define LOM_SELF_0044bad0 1
undefined4 __thiscall rb_0044bad0(void *this, int *volatile param_1)

{
  int *piVar1;
  void *this_00;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_8;
#define iStack_8 (*(_t_iStack_8 *)(_fr + 0x0))
  
  piVar2 = param_1;
  FUN_0044b610(this,param_1);
  piVar1 = (int *)((int)this + 0x44);
  uVar3 = FUN_00539660((char *)piVar1,4,1,piVar2);
  if (uVar3 != 1) {
    return 0;
  }
  iStack_8 = 0;
  if (*piVar1 < 1) {
    return 1;
  }
  piVar5 = (int *)((int)this + 0x2c);
  do {
    param_1 = (int *)0x0;
    uVar3 = FUN_00539660((char *)(piVar5 + -6),4,1,piVar2);
    if (uVar3 != 1) {
      return 0;
    }
    for (iVar4 = *piVar5; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c)) {
      param_1 = (int *)((int)param_1 + 1);
    }
    uVar3 = FUN_00539660((char *)&param_1,4,1,piVar2);
    if (uVar3 != 1) {
      return 0;
    }
    for (this_00 = (void *)*piVar5; this_00 != (void *)0x0;
        this_00 = *(void **)((int)this_00 + 0x1c)) {
      iVar4 = FUN_00526d10(this_00,piVar2);
      if (iVar4 == 0) {
        return 0;
      }
    }
    iStack_8 = iStack_8 + 1;
    piVar5 = piVar5 + 1;
  } while (iStack_8 < *piVar1);
  return 1;
#undef iStack_8
}
