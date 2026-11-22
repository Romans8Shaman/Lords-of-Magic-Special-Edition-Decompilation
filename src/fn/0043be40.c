/* Rebuilt from lomse.exe FUN_0043be40 @ 0x0043be40 (54 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579088 (*(int *)0x00579088)

#define LOM_SELF_0043be40 1
void __fastcall rb_0043be40(undefined4 *param_1)

{
  DAT_00579088 = DAT_00579088 + 0x58;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[7] = 0;
  param_1[6] = 4;
  return;
}
