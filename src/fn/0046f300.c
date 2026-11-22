/* Rebuilt from lomse.exe FUN_0046f300 @ 0x0046f300 (28 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b66c0 ((undefined4 * (__fastcall *)(undefined4 *))0x004b66c0)
#define PTR_FUN_0054d838 (*(undefined * *)0x0054d838)

#define LOM_SELF_0046f300 1
undefined4 * __fastcall rb_0046f300(undefined4 *param_1)

{
  FUN_004b66c0(param_1);
  *param_1 = &PTR_FUN_0054d838;
  param_1[0xe5] = 0;
  return param_1;
}
