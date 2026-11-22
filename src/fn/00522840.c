/* Rebuilt from lomse.exe FUN_00522840 @ 0x00522840 (35 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_00522840 1
int __thiscall rb_00522840(void *this,undefined4 param_1,int param_2)

{
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0;
  FUN_00527e90(this,param_2 + 0x4c,&local_4);
  return local_4;
#undef local_4
}
