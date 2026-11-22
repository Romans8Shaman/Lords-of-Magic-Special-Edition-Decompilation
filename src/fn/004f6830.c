/* Rebuilt from lomse.exe FUN_004f6830 @ 0x004f6830 (91 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049d8f0 ((uint (__fastcall *)(int))0x0049d8f0)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define thunk_FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d880)

#define LOM_SELF_004f6830 1
bool __fastcall rb_004f6830(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0)

{
  uint uVar1;
  
  if (*(void **)((int)param_1 + 0x2c) == (void *)0x0) {
    return false;
  }
  thunk_FUN_0049d9a0(*(void **)((int)param_1 + 0x2c));
  if (0 < *(int *)((int)param_1 + 0x20)) {
    *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x20) + -1;
  }
  if (*(int *)((int)param_1 + 0x20) == 0) {
    FUN_004f5b30(param_1,*(uint *)((int)param_1 + 0x24));
    *(undefined4 *)((int)param_1 + 0x20) = 0xffffffff;
  }
  else {
    uVar1 = FUN_0049d8f0(*(int *)((int)param_1 + 0x2c));
    if ((int)uVar1 < 2) goto LAB_004f687c;
  }
  *(byte *)((int)param_1 + 0x34) = *(byte *)((int)param_1 + 0x34) | 2;
LAB_004f687c:
  return (*(byte *)((int)param_1 + 0x34) | 2) != 0;
}
