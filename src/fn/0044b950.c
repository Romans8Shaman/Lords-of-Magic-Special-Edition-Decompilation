/* Rebuilt from lomse.exe FUN_0044b950 @ 0x0044b950 (25 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0044b490 ((undefined4 (__fastcall *)(undefined4 *))0x0044b490)
#define PTR_FUN_0054d5f0 (*(undefined * *)0x0054d5f0)

#define LOM_SELF_0044b950 1
undefined4 * __fastcall rb_0044b950(undefined4 *param_1)

{
  FUN_0044b490(param_1);
  *param_1 = &PTR_FUN_0054d5f0;
  param_1[1] = 2;
  return param_1;
}
