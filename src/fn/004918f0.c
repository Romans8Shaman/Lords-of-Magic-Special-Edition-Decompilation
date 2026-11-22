/* Rebuilt from lomse.exe FUN_004918f0 @ 0x004918f0 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)

#define LOM_SELF_004918f0 1
int __fastcall rb_004918f0(void *param_1)

{
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  FUN_00491910(param_1,&local_10,0,0);
  return local_4 - local_c;
#undef local_10
#undef local_c
#undef local_4
}
