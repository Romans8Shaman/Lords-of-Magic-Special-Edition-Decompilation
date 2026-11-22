/* Rebuilt from lomse.exe FUN_0042d9f0 @ 0x0042d9f0 (99 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d980 ((undefined4 (__thiscall *)(void *, uint, uint, int))0x0042d980)
#define FUN_0049cb20 ((undefined4 (__thiscall *)(void *, int *, int *, int, uint))0x0049cb20)

#define LOM_SELF_0042d9f0 1
void __thiscall rb_0042d9f0(void *this, void *volatile param_1, int volatile param_2, int volatile param_3, int volatile param_4)

{
  void *this_00;
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  this_00 = param_1;
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffffb;
  if (param_1 != (void *)0x0) {
    local_4 = 0;
    param_1 = (void *)0x0;
    if ((*(int *)((int)this + 4) != 0) &&
       (iVar1 = FUN_0049cb20(this_00,&local_4,(int *)&param_1,*(int *)((int)this + 4),0xffffffff),
       iVar1 == 0)) {
      return;
    }
    FUN_0042d980(this,local_4 + param_2,(int)param_1 + param_3,param_4);
  }
  return;
#undef local_4
}
