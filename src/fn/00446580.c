/* Rebuilt from lomse.exe FUN_00446580 @ 0x00446580 (137 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00446580 1
void __thiscall rb_00446580(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  
  iVar1 = DAT_005ae98c;
  for (iVar2 = DAT_005ae998; iVar2 <= iVar1; iVar2 = iVar2 + 1) {
    this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar2);
    if ((((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) == 2)) &&
        (*(int *)((int)this_00 + 0x4c) != param_1)) &&
       (*(int *)((int)this_00 + 0x80) == *(int *)((int)this + 0x28))) {
      if (*(int **)((int)this_00 + 0x48) != (int *)0x0) {
        FUN_004245a0(*(int **)((int)this_00 + 0x48));
      }
      *(int *)((int)this_00 + 0x4c) = param_1;
      *(undefined4 *)((int)this_00 + 0x84) = 0xffffffff;
      *(undefined4 *)((int)this_00 + 0x88) = 0;
      rb_00446580(this_00,param_1);
    }
  }
  return;
}
