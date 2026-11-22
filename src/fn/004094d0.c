/* Rebuilt from lomse.exe FUN_004094d0 @ 0x004094d0 (125 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_004094d0 1
undefined4 __thiscall rb_004094d0(void *this, void *volatile param_1, int volatile param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pvVar1 = param_1;
  local_4 = this;
  uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48));
  if ((uVar2 != 0) && (*(int *)this != 0x12)) {
    iVar3 = FUN_00527e90((void *)((int)pvVar1 + 0xc4),1,(int *)&local_4);
    if (iVar3 != 0) {
      iVar3 = FUN_00527e90((void *)(param_2 + 0xc4),2,(int *)&param_1);
      if ((iVar3 != 0) && ((int)local_4 <= (int)param_1)) {
        FUN_00401730(pvVar1);
        *(undefined4 *)this = 0x12;
        return 1;
      }
    }
  }
  return 0;
#undef local_4
}
