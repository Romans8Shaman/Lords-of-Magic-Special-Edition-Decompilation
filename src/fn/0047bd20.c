/* Rebuilt from lomse.exe FUN_0047bd20 @ 0x0047bd20 (85 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c4af0 ((undefined4 (__fastcall *)(undefined4 *))0x004c4af0)

#define LOM_SELF_0047bd20 1
undefined4 * __fastcall rb_0047bd20(undefined4 *param_1)

{

  FUN_004c4af0(param_1 + 2);
  FUN_004c4af0(param_1 + 8);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x1a] = 0;
  param_1[0x21] = 0;
  return param_1;
}
