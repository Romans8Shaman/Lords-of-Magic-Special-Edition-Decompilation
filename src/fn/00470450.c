/* Rebuilt from lomse.exe FUN_00470450 @ 0x00470450 (38 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int * *)0x005d1e84)

#define LOM_SELF_00470450 1
undefined4 __stdcall rb_00470450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_005d1e84 == (int *)0x0) {
    return 0;
  }
  uVar1 = ((undefined4 (__thiscall *)(__typeof__((void *)(DAT_005d1e84)), __typeof__(param_2), __typeof__(param_1), __typeof__(param_3)))(**(code **)(*DAT_005d1e84 + 0x2c)))((void *)(DAT_005d1e84),param_2,param_1,param_3);
  return uVar1;
}
