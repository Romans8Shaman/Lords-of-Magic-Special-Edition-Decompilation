/* Rebuilt from lomse.exe FUN_004b0260 @ 0x004b0260 (63 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b0260 1
void __fastcall rb_004b0260(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
    *param_1 = 0;
  }
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
    param_1[1] = 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar1), __typeof__(1)))(**(code **)*puVar1))(puVar1,1);
    param_1[2] = 0;
  }
  return;
}
