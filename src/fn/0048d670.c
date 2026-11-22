/* Rebuilt from lomse.exe FUN_0048d670 @ 0x0048d670 (87 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_0048d6d0 ((undefined4 (__fastcall *)(int))0x0048d6d0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_0048d670 1
void __fastcall rb_0048d670(int param_1)

{

  FUN_0048d6d0(param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x58));
  return;
}
