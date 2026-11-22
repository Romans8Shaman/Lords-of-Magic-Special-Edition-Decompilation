/* Rebuilt from lomse.exe FUN_0050cdf0 @ 0x0050cdf0 (68 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)

#define LOM_SELF_0050cdf0 1
void __fastcall rb_0050cdf0(undefined4 *param_1)

{
  DAT_00583650 = DAT_00583650 + 0x10;
  param_1[2] = 1;
  param_1[3] = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0x100000;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[5] = 0;
  param_1[7] = 3;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  return;
}
