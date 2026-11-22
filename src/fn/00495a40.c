/* Rebuilt from lomse.exe FUN_00495a40 @ 0x00495a40 (76 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00495a40 1
undefined4 __fastcall rb_00495a40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (((((piVar1 == (int *)0x0) || (*piVar1 == 0)) || (param_1[1] < 0)) ||
      ((param_1[2] < 0 || (piVar1[1] < param_1[1] + param_1[3])))) ||
     ((piVar1[2] < param_1[4] + param_1[2] || ((param_1[3] < 0 || (param_1[4] < 0)))))) {
    return 0;
  }
  return 1;
}
