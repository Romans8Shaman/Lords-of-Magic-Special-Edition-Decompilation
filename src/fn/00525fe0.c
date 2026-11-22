/* Rebuilt from lomse.exe FUN_00525fe0 @ 0x00525fe0 (27 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)

#define LOM_SELF_00525fe0 1
int __fastcall rb_00525fe0(void *param_1)

{
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 5;
  FUN_00527e90(param_1,0x31,&local_4);
  return local_4;
#undef local_4
}
