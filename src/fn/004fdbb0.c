/* Rebuilt from lomse.exe FUN_004fdbb0 @ 0x004fdbb0 (116 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00519980 ((undefined4 (__fastcall *)(int))0x00519980)
#define PTR_FUN_0054e860 (*(undefined * *)0x0054e860)

#define LOM_SELF_004fdbb0 1
void __fastcall rb_004fdbb0(undefined4 *param_1)

{

  *param_1 = &PTR_FUN_0054e860;
  param_1[0x6b] = param_1[0x6b] + -0x202cc;
  FUN_00519980((int)param_1);
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(param_1 + 0xa1);
  return;
}
