/* Rebuilt from lomse.exe FUN_005192b0 @ 0x005192b0 (32 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585170 (*(int * *)0x00585170)
#define DAT_00585174 (*(undefined4 *)0x00585174)

#define LOM_SELF_005192b0 1
void __stdcall rb_005192b0(undefined1 volatile param_1, undefined4 unused_stack_4, undefined4 unused_stack_8, undefined4 unused_stack_12)

{
  ((undefined4 (__stdcall *)(__typeof__(DAT_00585170), __typeof__(0), __typeof__(0), __typeof__(DAT_00585174), __typeof__(&param_1), __typeof__(0)))(**(code **)(*DAT_00585170 + 0x1c)))(DAT_00585170,0,0,DAT_00585174,&param_1,0);
  return;
}
