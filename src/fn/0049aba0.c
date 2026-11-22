/* Rebuilt from lomse.exe FUN_0049aba0 @ 0x0049aba0 (51 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583718 (*(int *)0x00583718)
#define FUN_0049ab00 ((undefined4 (__fastcall *)(undefined4 *))0x0049ab00)

#define LOM_SELF_0049aba0 1
undefined4 * __fastcall rb_0049aba0(undefined4 *param_1)

{
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 1;
  DAT_00583718 = DAT_00583718 + 0x124;
  FUN_0049ab00(param_1);
  return param_1;
}
