/* Rebuilt from lomse.exe FUN_00427b50 @ 0x00427b50 (39 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005788c8 (*(int *)0x005788c8)

#define LOM_SELF_00427b50 1
int __fastcall rb_00427b50(int param_1)

{
  DAT_005788c8 = DAT_005788c8 + 0x18;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return param_1;
}
