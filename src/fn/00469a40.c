/* Rebuilt from lomse.exe FUN_00469a40 @ 0x00469a40 (149 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577e0 (*(undefined4 *)0x005577e0)
#define DAT_005578a0 (*(undefined4 *)0x005578a0)
#define PTR_LAB_0054d778 (*(undefined * *)0x0054d778)

#define LOM_SELF_00469a40 1
void __fastcall rb_00469a40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_LAB_0054d778;
  puVar2 = &DAT_005577e0;
  puVar3 = param_1 + 0x19;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_005578a0;
  puVar3 = param_1 + 0x29;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_005578a0;
  puVar3 = param_1 + 0x39;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_005578a0;
  puVar3 = param_1 + 0x49;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[2] = 0x40000000;
  param_1[3] = 0x40000000;
  param_1[4] = 0x40000000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0xffffffff;
  return;
}
