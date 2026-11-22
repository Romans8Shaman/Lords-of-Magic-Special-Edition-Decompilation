/* Rebuilt from lomse.exe FUN_00422df0 @ 0x00422df0 (145 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004fd4b0 ((undefined4 (__stdcall *)(undefined4 *))0x004fd4b0)
#define FUN_00522350 ((undefined4 (__stdcall *)(uint, undefined4, uint *))0x00522350)

#define LOM_SELF_00422df0 1
undefined4 __thiscall rb_00422df0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_auStack_14[5];
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0x4))
  
  FUN_004fd4b0(param_1);
  uVar4 = 0;
  iVar1 = FUN_004c1cf0((int)this);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    do {
      iVar2 = FUN_00522350(*(uint *)((int)this + 0x28),iVar1,auStack_14);
      if (iVar2 != 0) {
        iVar2 = 5;
        piVar3 = param_1;
        do {
          *piVar3 = *piVar3 + *(int *)(((int)auStack_14 - (int)param_1) + (int)piVar3);
          piVar3 = piVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar4 = 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x4c));
  }
  return uVar4;
#undef auStack_14
}
