/* Rebuilt from lomse.exe FUN_0044b490 @ 0x0044b490 (32 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define PTR_FUN_0054d5c0 (*(undefined * *)0x0054d5c0)

#define LOM_SELF_0044b490 1
undefined4 * __fastcall rb_0044b490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0054d5c0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  return param_1;
}
