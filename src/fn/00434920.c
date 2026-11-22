/* Rebuilt from lomse.exe FUN_00434920 @ 0x00434920 (102 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004344a0 ((undefined4 (__thiscall *)(void *, int, int, int))0x004344a0)

#define LOM_SELF_00434920 1
int __thiscall rb_00434920(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *this_00;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0;
  if (param_1 != *(int *)((int)this + 8)) {
    param_2 = 1 - param_2;
  }
  iVar2 = 7;
  this_00 = (void *)((int)this + param_2 * 0x2a + 0x28);
  do {
    iVar1 = FUN_004344a0(this_00,(int)this,param_1,param_2);
    this_00 = (void *)((int)this_00 + 6);
    local_4 = local_4 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return local_4;
#undef local_4
}
