/* Rebuilt from lomse.exe FUN_004b26b0 @ 0x004b26b0 (184 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)

#define LOM_SELF_004b26b0 1
undefined4 * __fastcall rb_004b26b0(undefined4 *param_1)

{

  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 2);
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 10);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0x1a);
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0x22);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}
