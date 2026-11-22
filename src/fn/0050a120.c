/* Rebuilt from lomse.exe FUN_0050a120 @ 0x0050a120 (97 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049f230 ((undefined4 * (__fastcall *)(undefined4 *))0x0049f230)
#define FUN_004ef2c0 ((undefined4 (__fastcall *)(undefined4 *))0x004ef2c0)

#define LOM_SELF_0050a120 1
undefined4 * __fastcall rb_0050a120(undefined4 *param_1)

{

  FUN_0049f230(param_1 + 6);
  FUN_004ef2c0(param_1 + 0x1f);
  param_1[0x21] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  return param_1;
}
