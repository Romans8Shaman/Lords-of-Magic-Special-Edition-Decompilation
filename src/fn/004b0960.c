/* Rebuilt from lomse.exe FUN_004b0960 @ 0x004b0960 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define thunk_FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d880)

#define LOM_SELF_004b0960 1
undefined4 __fastcall
rb_004b0960(undefined4 *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  if ((void *)*param_1 != (void *)0x0) {
    thunk_FUN_0049d9a0((void *)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    thunk_FUN_0049d9a0((void *)param_1[1]);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    thunk_FUN_0049d9a0((void *)param_1[2]);
  }
  return 1;
}
