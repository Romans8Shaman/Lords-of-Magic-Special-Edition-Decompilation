/* Rebuilt from lomse.exe FUN_00401760 @ 0x00401760 (67 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004a6e90 ((undefined4 (__thiscall *)(void *, int, int, undefined4, undefined *))0x004a6e90)
#define LAB_004017b0 (*(undefined *)0x004017b0) /* code label used as address */

#define LOM_SELF_00401760 1
undefined4 __stdcall rb_00401760(undefined4 param_1,int param_2,int param_3)

{
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_c = param_1;
  local_8 = 0;
  local_4 = 9999;
  FUN_004a6e90(&DAT_005ae958,param_2,param_3,&local_c,&LAB_004017b0);
  return local_8;
#undef local_c
#undef local_8
#undef local_4
}
