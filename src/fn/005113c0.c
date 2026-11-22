/* Rebuilt from lomse.exe FUN_005113c0 @ 0x005113c0 (324 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00469a40 ((undefined4 (__fastcall *)(undefined4 *))0x00469a40)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_005185a0 ((undefined4 (__fastcall *)(int))0x005185a0)
#define PTR_FUN_0054e860 (*(undefined * *)0x0054e860)

#define LOM_SELF_005113c0 1
undefined4 * __fastcall rb_005113c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  FUN_00469a40(param_1);
  DAT_00583648 = DAT_00583648 + 0x20;
  FUN_00494610(param_1 + 0xa1);
  param_1[0x6b] = param_1[0x6b] + 0x202cc;
  param_1[0x7b] = 0x3c;
  param_1[0x7c] = 0x3c;
  param_1[0x7f] = 0x3c;
  param_1[0x80] = 0x3c;
  param_1[0x77] = 6;
  param_1[0x78] = 6;
  param_1[0x6c] = 0x3c;
  param_1[0x6d] = 0x3c;
  *param_1 = &PTR_FUN_0054e860;
  param_1[0x80a9] = 0x96;
  param_1[0x80aa] = 30000;
  param_1[0x80ab] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0x1f7;
  param_1[0x9f] = 0x2f7;
  param_1[0x85] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  puVar2 = param_1 + 0x8b;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x94;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x80b2] = 0;
  param_1[0x86] = 1;
  param_1[0x87] = 0;
  FUN_005185a0((int)param_1);
  return param_1;
}
