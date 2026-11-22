/* Rebuilt from lomse.exe FUN_00526bf0 @ 0x00526bf0 (29 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d3808 (*(int *)0x005d3808)

#define LOM_SELF_00526bf0 1
void __fastcall rb_00526bf0(int param_1)

{
  DAT_005d3808 = DAT_005d3808 + 0x20;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}
