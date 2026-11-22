/* Rebuilt from lomse.exe FUN_004b1b20 @ 0x004b1b20 (139 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_004b2770 ((undefined4 (__fastcall *)(undefined4 *))0x004b2770)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)

#define LOM_SELF_004b1b20 1
void __fastcall rb_004b1b20(int param_1)

{

  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x3b0));
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)(param_1 + 0x390));
  FUN_00539eb0(param_1 + 0x70,200,4,FUN_004b2770);
  return;
}
