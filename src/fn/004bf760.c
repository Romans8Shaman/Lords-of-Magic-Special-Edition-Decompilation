/* Rebuilt from lomse.exe FUN_004bf760 @ 0x004bf760 (147 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004bcb60 ((undefined4 (__thiscall *)(void *, int))0x004bcb60)
#define FUN_004bf800 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x004bf800)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004bf760 1
void __thiscall rb_004bf760(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *this_00;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = FUN_004bf800(this,&local_8,2);
  if (iVar1 != 0) {
    iVar1 = 0;
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = param_1;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = 0xffffffff;
    if ((param_1 < 0) || (0xf < param_1)) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = &DAT_005af194 + param_1 * 0x1d84;
    }
    do {
      if (iVar1 != param_1) {
        *(int *)((int)this + 0x10) = iVar1;
        uVar2 = FUN_004bcb60(this_00,iVar1);
        *(undefined4 *)((int)this + 0x28) = uVar2;
        FUN_004d05e0(DAT_005a7b78,local_8,local_4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
  }
  return;
#undef local_8
#undef local_4
}
