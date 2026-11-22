/* Rebuilt from lomse.exe FUN_004acf00 @ 0x004acf00 (88 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583a00 (*(int *)0x00583a00)
#define FUN_004acfe0 ((undefined4 (__fastcall *)(int))0x004acfe0)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054daf8 (*(undefined * *)0x0054daf8)

#define LOM_SELF_004acf00 1
undefined4 * __fastcall rb_004acf00(undefined4 *param_1)

{

  FUN_004f59a0(param_1);
  *param_1 = &PTR_FUN_0054daf8;
  DAT_00583a00 = DAT_00583a00 + 0x148;
  FUN_004acfe0((int)param_1);
  return param_1;
}
