/* Rebuilt from lomse.exe FUN_00522a60 @ 0x00522a60 (254 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d3348 (*(int *)0x005d3348)

#define LOM_SELF_00522a60 1
int __fastcall rb_00522a60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  DAT_005d3348 = DAT_005d3348 + 1000;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x40000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x290);
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x2f8);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x324);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x350);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x84);
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1e8);
  iVar2 = 0x20;
  do {
    puVar1[-0x20] = 0;
    *puVar1 = 1;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  return param_1;
}
