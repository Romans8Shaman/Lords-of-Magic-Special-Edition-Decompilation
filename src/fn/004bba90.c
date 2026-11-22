/* Rebuilt from lomse.exe FUN_004bba90 @ 0x004bba90 (219 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042d4c0 ((undefined4 (__fastcall *)(undefined4 *))0x0042d4c0)
#define FUN_00462c90 ((undefined4 * (__fastcall *)(undefined4 *))0x00462c90)
#define FUN_004ef2c0 ((undefined4 (__fastcall *)(undefined4 *))0x004ef2c0)
#define FUN_00508090 ((undefined4 (__fastcall *)(int))0x00508090)
#define FUN_0050a120 ((undefined4 * (__fastcall *)(undefined4 *))0x0050a120)
#define FUN_0050a190 ((undefined4 (__fastcall *)(int))0x0050a190)
#define FUN_0051b790 ((undefined4 * (__fastcall *)(undefined4 *))0x0051b790)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)

#define LOM_SELF_004bba90 1
undefined4 * __fastcall rb_004bba90(undefined4 *param_1)

{

  FUN_0042d4c0(param_1);
  FUN_004ef2c0(param_1 + 0xd);
  FUN_00539ff0(param_1 + 0x34a,0x88,0x10,FUN_0050a120,FUN_0050a190);
  FUN_00462c90(param_1 + 0x578);
  FUN_0051b790(param_1 + 0x719);
  param_1[0x56a] = 0;
  param_1[0x577] = 1;
  param_1[10] = 0;
  param_1[0x574] = 0xffffffff;
  param_1[0x575] = 0xffffffff;
  param_1[0x570] = 0xffffffff;
  param_1[0x571] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0x56d] = 0xffffffff;
  param_1[0x56e] = 0xffffffff;
  param_1[0x56f] = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x19] = 0xffffffff;
  FUN_00508090((int)param_1);
  return param_1;
}
