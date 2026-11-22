/* Rebuilt from lomse.exe FUN_004be0c0 @ 0x004be0c0 (115 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004bdf60 ((int (__thiscall *)(void *, int))0x004bdf60)
#define FUN_004fbf80 ((undefined4 (__thiscall *)(void *, int, int))0x004fbf80)

#define LOM_SELF_004be0c0 1
int __thiscall rb_004be0c0(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14[5];
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  iVar2 = 0;
  for (this_00 = (int *)FUN_004fbf80(&DAT_005ae974,*(int *)((int)this + 0x15a8),0);
      this_00 != (int *)0x0;
      this_00 = (int *)FUN_004fbf80(&DAT_005ae974,*(int *)((int)this + 0x15a8),(int)this_00)) {
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(local_14)))(**(code **)(*this_00 + 0x40)))(this_00,local_14);
    if (iVar1 != 0) {
      iVar2 = iVar2 + local_14[param_1];
    }
  }
  iVar1 = FUN_004bdf60(this,param_1);
  iVar2 = iVar2 + iVar1 * -0x100;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2 >> 8;
#undef local_14
}
