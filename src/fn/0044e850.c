/* Rebuilt from lomse.exe FUN_0044e850 @ 0x0044e850 (104 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792b0 (*(int *)0x005792b0)
#define FUN_0044e700 ((undefined4 (__fastcall *)(int))0x0044e700)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054d630 (*(undefined * *)0x0054d630)

#define LOM_SELF_0044e850 1
undefined4 * __fastcall rb_0044e850(undefined4 *param_1)

{

  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054d630;
  DAT_005792b0 = DAT_005792b0 + 0x34c;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0xd2] = 0;
  FUN_0044e700((int)param_1);
  return param_1;
}
