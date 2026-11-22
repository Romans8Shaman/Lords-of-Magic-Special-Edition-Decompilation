/* Rebuilt from lomse.exe FUN_004ba150 @ 0x004ba150 (69 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584484 (*(int *)0x00584484)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_LAB_0054dc68 (*(undefined * *)0x0054dc68)

#define LOM_SELF_004ba150 1
undefined4 * __fastcall rb_004ba150(undefined4 *param_1)

{
  FUN_004f59a0(param_1);
  *param_1 = &PTR_LAB_0054dc68;
  DAT_00584484 = DAT_00584484 + 0x58;
  param_1[0x11] = 0xffffffff;
  param_1[0xc] = param_1[0xc] | 2;
  param_1[0x13] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[1] = 8;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  return param_1;
}
