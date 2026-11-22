/* Rebuilt from lomse.exe FUN_00470bc0 @ 0x00470bc0 (28 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int * *)0x005d1e84)
#define s_Callback_00557f80 (*(char (*)[])0x00557f80)

#define LOM_SELF_00470bc0 1
undefined4 __stdcall rb_00470bc0(undefined4 unused_stack_0, undefined4 unused_stack_4, undefined4 unused_stack_8, undefined4 unused_stack_12, undefined4 unused_stack_16, undefined4 unused_stack_20)

{
  undefined4 uVar1;
  
  if (DAT_005d1e84 == (int *)0x0) {
    return 0;
  }
  uVar1 = ((undefined4 (__thiscall *)(__typeof__((void *)(DAT_005d1e84)), __typeof__(s_Callback_00557f80)))(**(code **)(*DAT_005d1e84 + 8)))((void *)(DAT_005d1e84),s_Callback_00557f80);
  return uVar1;
}
