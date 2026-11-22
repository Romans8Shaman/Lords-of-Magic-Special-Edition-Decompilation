/* Rebuilt from lomse.exe FUN_004918d0 @ 0x004918d0 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)

#define LOM_SELF_004918d0 1
int __fastcall rb_004918d0(void *param_1)

{
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10[2];
  typedef int _t_local_8;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
  
  FUN_00491910(param_1,local_10,0,0);
  return local_8 - local_10[0];
#undef local_10
#undef local_8
}
