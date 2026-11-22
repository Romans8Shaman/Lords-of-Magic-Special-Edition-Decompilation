/* Rebuilt from lomse.exe FUN_0047cb50 @ 0x0047cb50 (126 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583410 (*(int *)0x00583410)
#define FUN_0047cb00 ((undefined4 (__fastcall *)(int))0x0047cb00)
#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define PTR_FUN_0054d968 (*(undefined * *)0x0054d968)
#define thunk_FUN_0042d4f0 ((undefined4 (__fastcall *)(int))0x0042d4e0)
#define thunk_FUN_004b0260 ((undefined4 (__fastcall *)(int *))0x004b0250)

#define LOM_SELF_0047cb50 1
void __fastcall rb_0047cb50(undefined4 *param_1)

{

  *param_1 = &PTR_FUN_0054d968;
  DAT_00583410 = DAT_00583410 + -0xc4;
  FUN_0047cb00((int)param_1);
  thunk_FUN_0042d4f0((int)(param_1 + 0x25));
  thunk_FUN_004b0260(param_1 + 0x22);
  FUN_004f59f0(param_1);
  return;
}
