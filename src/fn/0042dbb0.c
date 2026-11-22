/* Rebuilt from lomse.exe FUN_0042dbb0 @ 0x0042dbb0 (162 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d4f0 ((undefined4 (__fastcall *)(int))0x0042d4f0)
#define thunk_FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d880)

#define LOM_SELF_0042dbb0 1
undefined4 __fastcall rb_0042dbb0(int param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  if ((*(void **)(param_1 + 0x10) != (void *)0x0) && ((*(byte *)(param_1 + 0x20) & 0xc) != 0)) {
    thunk_FUN_0049d9a0(*(void **)(param_1 + 0x10));
    if ((*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 0) && ((*(uint *)(param_1 + 0x20) & 1) != 0)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      FUN_0042d4f0(param_1);
      return 1;
    }
  }
  if ((*(void **)(param_1 + 0x14) != (void *)0x0) && ((*(byte *)(param_1 + 0x20) & 0xc) != 0)) {
    thunk_FUN_0049d9a0(*(void **)(param_1 + 0x14));
  }
  if ((*(void **)(param_1 + 0x18) != (void *)0x0) && ((*(byte *)(param_1 + 0x20) & 0xc) != 0)) {
    thunk_FUN_0049d9a0(*(void **)(param_1 + 0x18));
    if ((*(int *)(*(int *)(param_1 + 0x18) + 0xc) == 0) && ((*(uint *)(param_1 + 0x20) & 1) != 0)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      FUN_0042d4f0(param_1);
      return 1;
    }
  }
  if ((*(void **)(param_1 + 0x1c) != (void *)0x0) && ((*(byte *)(param_1 + 0x20) & 0xc) != 0)) {
    thunk_FUN_0049d9a0(*(void **)(param_1 + 0x1c));
  }
  return 1;
}
