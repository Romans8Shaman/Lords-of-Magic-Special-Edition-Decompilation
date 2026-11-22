/* Rebuilt from lomse.exe FUN_0046c6e0 @ 0x0046c6e0 (26 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583120 (*(undefined4 *)0x00583120)
#define FUN_0046d210 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x0046d210)

#define LOM_SELF_0046c6e0 1
void __fastcall
rb_0046c6e0(void *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,
            undefined4 unused_stack_4)

{
  DAT_00583120 = 2;
  FUN_0046d210(param_1,(undefined4 *)((int)param_1 + 0x28),*(int *)((int)param_1 + 0x38));
  return;
}
