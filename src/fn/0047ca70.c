/* Rebuilt from lomse.exe FUN_0047ca70 @ 0x0047ca70 (142 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583410 (*(int *)0x00583410)
#define FUN_0042d4c0 ((undefined4 (__fastcall *)(undefined4 *))0x0042d4c0)
#define FUN_0047ca20 ((undefined4 (__fastcall *)(int))0x0047ca20)
#define FUN_004c3990 ((undefined4 (__fastcall *)(undefined4 *))0x004c3990)
#define FUN_004f59a0 ((undefined4 * (__fastcall *)(undefined4 *))0x004f59a0)
#define PTR_FUN_0054d968 (*(undefined * *)0x0054d968)

#define LOM_SELF_0047ca70 1
undefined4 * __fastcall rb_0047ca70(undefined4 *param_1)

{

  FUN_004f59a0(param_1);
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 100;
  param_1[0x18] = 0xffffffff;
  FUN_004c3990(param_1 + 0x22);
  FUN_0042d4c0(param_1 + 0x25);
  *param_1 = &PTR_FUN_0054d968;
  DAT_00583410 = DAT_00583410 + 0xc4;
  FUN_0047ca20((int)param_1);
  return param_1;
}
