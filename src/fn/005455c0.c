/* Rebuilt from lomse.exe FUN_005455c0 @ 0x005455c0 (331 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d56ac (*(ushort *)0x005d56ac)
#define FUN_00545710 ((undefined4 (__cdecl *)(char *))0x00545710)
#define FUN_005479e0 ((undefined4 (__cdecl *)(int, LCID, LCTYPE, char *))0x005479e0)

#define LOM_SELF_005455c0 1
uint __cdecl rb_005455c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = (uint)DAT_005d56ac;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_005479e0(1,uVar15,0x15,(char *)(param_1 + 0xc));
  uVar2 = FUN_005479e0(1,uVar15,0x14,(char *)(param_1 + 0x10));
  uVar3 = FUN_005479e0(1,uVar15,0x16,(char *)(param_1 + 0x14));
  uVar4 = FUN_005479e0(1,uVar15,0x17,(char *)(param_1 + 0x18));
  uVar5 = FUN_005479e0(1,uVar15,0x18,(char *)(param_1 + 0x1c));
  FUN_00545710(*(char **)(param_1 + 0x1c));
  uVar6 = FUN_005479e0(1,uVar15,0x50,(char *)(param_1 + 0x20));
  uVar7 = FUN_005479e0(1,uVar15,0x51,(char *)(param_1 + 0x24));
  uVar8 = FUN_005479e0(0,uVar15,0x1a,(char *)(param_1 + 0x28));
  uVar9 = FUN_005479e0(0,uVar15,0x19,(char *)(param_1 + 0x29));
  uVar10 = FUN_005479e0(0,uVar15,0x54,(char *)(param_1 + 0x2a));
  uVar11 = FUN_005479e0(0,uVar15,0x55,(char *)(param_1 + 0x2b));
  uVar12 = FUN_005479e0(0,uVar15,0x56,(char *)(param_1 + 0x2c));
  uVar13 = FUN_005479e0(0,uVar15,0x57,(char *)(param_1 + 0x2d));
  uVar14 = FUN_005479e0(0,uVar15,0x52,(char *)(param_1 + 0x2e));
  uVar15 = FUN_005479e0(0,uVar15,0x53,(char *)(param_1 + 0x2f));
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}
