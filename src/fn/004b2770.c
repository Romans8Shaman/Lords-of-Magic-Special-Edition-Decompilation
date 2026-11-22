/* Rebuilt from lomse.exe FUN_004b2770 @ 0x004b2770 (175 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_004b2820 ((undefined4 (__fastcall *)(undefined4 *))0x004b2820)

#define LOM_SELF_004b2770 1
void __fastcall rb_004b2770(undefined4 *param_1)

{

  FUN_004b2820(param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(param_1 + 0x22);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(param_1 + 0x1a);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(param_1 + 10);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(param_1 + 2);
  return;
}
