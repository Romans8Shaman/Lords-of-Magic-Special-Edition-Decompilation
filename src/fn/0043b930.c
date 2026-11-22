/* Rebuilt from lomse.exe FUN_0043b930 @ 0x0043b930 (88 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579080 (*(int *)0x00579080)
#define FUN_0043b8d0 ((undefined4 (__fastcall *)(int))0x0043b8d0)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054d4d8 (*(undefined * *)0x0054d4d8)

#define LOM_SELF_0043b930 1
undefined4 * __fastcall rb_0043b930(undefined4 *param_1)

{

  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054d4d8;
  DAT_00579080 = DAT_00579080 + 0x94;
  FUN_0043b8d0((int)param_1);
  return param_1;
}
