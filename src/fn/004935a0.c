/* Rebuilt from lomse.exe FUN_004935a0 @ 0x004935a0 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define thunk_FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d880)

#define LOM_SELF_004935a0 1
void __fastcall rb_004935a0(int *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  if ((*param_1 != 7) && (*param_1 == 0xe)) {
    thunk_FUN_0049d9a0((void *)param_1[1]);
  }
  return;
}
