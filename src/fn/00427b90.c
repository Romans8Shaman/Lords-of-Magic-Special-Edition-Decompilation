/* Rebuilt from lomse.exe FUN_00427b90 @ 0x00427b90 (138 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005788cc (*(int *)0x005788cc)

#define LOM_SELF_00427b90 1
void __fastcall rb_00427b90(undefined4 *param_1)

{
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  DAT_005788cc = DAT_005788cc + 0x80;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[10] = local_4;
  param_1[0xc] = local_4;
  param_1[0xe] = local_4;
  param_1[0x10] = local_4;
  param_1[0x12] = local_4;
  param_1[0x14] = local_4;
  param_1[0x16] = local_4;
  param_1[0x18] = local_4;
  param_1[0x1a] = local_4;
  param_1[0x1c] = local_4;
  param_1[0x1e] = local_4;
  param_1[0x1f] = 0xffffffff;
  return;
#undef local_4
}
