/* Rebuilt from lomse.exe FUN_00471590 @ 0x00471590 (526 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00474e40 ((undefined4 (__thiscall *)(void *))0x00474e40)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define thunk_FUN_00495590 ((undefined4 (__fastcall *)(int *))0x004717a0)

#define LOM_SELF_00471590 1
undefined4 * __fastcall rb_00471590(undefined4 *param_1)

{
  int iVar1;

  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0x14);
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0x1c);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0x3d);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0x4b);
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  FUN_00539ff0(param_1 + 0x67,0x38,4,FUN_00474e40,thunk_FUN_00495590);
  *param_1 = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0xffffffff;
  param_1[0x62] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0xffff;
  param_1[0x3b] = 0xfffffc18;
  param_1[0x3c] = 0;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  if (param_1[7] != 0) {
    Ordinal_403(param_1[7],s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0x27f;
  param_1[6] = 0;
  param_1[0xb] = 0x1df;
  iVar1 = Ordinal_401(0x180,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  param_1[7] = iVar1;
  if (iVar1 != 0) {
    param_1[4] = 0x18;
  }
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x34] = 0xff;
  param_1[0x35] = 0xff;
  param_1[0x36] = 0xff;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x33] = 0;
  param_1[0x2c] = 1000;
  param_1[0x2d] = 5000;
  return param_1;
}
