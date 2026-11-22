/* Rebuilt from lomse.exe FUN_004bdf60 @ 0x004bdf60 (158 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00522350 ((undefined4 (__stdcall *)(uint, undefined4, uint *))0x00522350)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)

#define LOM_SELF_004bdf60 1
int __thiscall rb_004bdf60(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_auStack_14[5];
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0x4))
  
  iVar5 = 0;
  for (this_00 = FUN_004fbed0(&DAT_005ae974,0); this_00 != (int *)0x0;
      this_00 = FUN_004fbed0(&DAT_005ae974,(int)this_00)) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
    if (((iVar1 == *(int *)((int)this + 0x15a8)) && (iVar1 = FUN_004c1cf0((int)this_00), iVar1 == 0)
        ) && (iVar1 = 0, 0 < this_00[0x13])) {
      piVar4 = this_00 + 0x31;
      do {
        uVar2 = FUN_00525f10((int)piVar4);
        if ((uVar2 == 0) && (iVar3 = FUN_00522350(this_00[10],iVar1,auStack_14), iVar3 != 0)) {
          iVar5 = iVar5 + auStack_14[param_1];
        }
        iVar1 = iVar1 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar1 < this_00[0x13]);
    }
  }
  return iVar5 >> 8;
#undef auStack_14
}
