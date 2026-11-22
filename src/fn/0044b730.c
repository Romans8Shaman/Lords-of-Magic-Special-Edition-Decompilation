/* Rebuilt from lomse.exe FUN_0044b730 @ 0x0044b730 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0044b490 ((undefined4 (__fastcall *)(undefined4 *))0x0044b490)
#define PTR_FUN_0054d5d0 (*(undefined * *)0x0054d5d0)

#define LOM_SELF_0044b730 1
undefined4 * __fastcall rb_0044b730(undefined4 *param_1)

{
  FUN_0044b490(param_1);
  *param_1 = &PTR_FUN_0054d5d0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[1] = 0;
  param_1[5] = 0xff;
  return param_1;
}
