/* Rebuilt from lomse.exe FUN_004fbff0 @ 0x004fbff0 (118 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a9220 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a9220)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_004fbff0 1
void __thiscall rb_004fbff0(void *this, int volatile param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  undefined *this_01;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((*(int *)((int)this + 8) != 0) && (param_1 < 8)) &&
     (iVar3 = *(int *)((int)this + 0x24), iVar3 <= *(int *)((int)this + 0x18))) {
    do {
      this_00 = *(int **)(*(int *)((int)this + 8) + iVar3 * 4);
      if (((this_00 != (int *)0x0) && (iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x38)))(this_00), 0 < iVar1))
         && ((iVar2 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00), iVar2 == param_1 ||
             (((param_1 < 0 && (-1 < iVar2)) && (iVar2 < 8)))))) {
        iVar4 = this_00[7];
        iVar5 = 0;
        this_01 = FUN_004c6fc0();
        FUN_004a9220(this_01,iVar4,iVar1,iVar5,iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x18));
  }
  return;
}
