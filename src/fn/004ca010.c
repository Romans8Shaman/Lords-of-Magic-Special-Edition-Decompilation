/* Rebuilt from lomse.exe op_pop @ 0x004ca010 (81 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004ca010 1
void __cdecl rb_004ca010(void *param_1)

{
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(int *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + 1;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 6;
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
}
