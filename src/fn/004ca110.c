/* Rebuilt from lomse.exe op_end @ 0x004ca110 (74 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_dictionary_stack_protection_erro_0055e1b0 (*(char (*)[])0x0055e1b0)

#define LOM_SELF_004ca110 1
void __cdecl rb_004ca110(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x60);
  if (*(int *)((int)param_1 + 100) + -1 <= iVar1) {
    *(undefined4 *)((int)param_1 + 0x90) = 7;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  if (iVar1 < *(int *)((int)param_1 + 0x68)) {
    *(int *)((int)param_1 + 0x60) = iVar1 + 1;
    return;
  }
  FUN_004d41c0(param_1,s_dictionary_stack_protection_erro_0055e1b0);
  return;
}
