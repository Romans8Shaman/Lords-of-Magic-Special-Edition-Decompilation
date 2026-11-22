/* Rebuilt from lomse.exe FUN_0045d090 @ 0x0045d090 (579 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)

#define LOM_SELF_0045d090 1
void __thiscall rb_0045d090(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = param_1;
  if (-1 < (int)param_1[10]) {
    puVar2 = FUN_00485080(this,param_1[10],0x2f);
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = puVar2;
      puVar6 = param_1;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_1[0xb] = 0;
      param_1[0x11] = puVar2[0x11];
      param_1[0x12] = puVar2[0x12];
      param_1[0x13] = puVar2[0x13];
      param_1[0x14] = puVar2[0x14];
      param_1[0x15] = puVar2[0x15];
      param_1[0x16] = puVar2[0x16];
      param_1[0x17] = puVar2[0x17];
      param_1[0x18] = puVar2[0x18];
      param_1[0x19] = puVar2[0x19];
      puVar5 = puVar2 + 0x1a;
      puVar6 = param_1 + 0x1a;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      param_1[0x30] = puVar2[0x30];
      puVar5 = param_1 + 0x31;
      iVar3 = (int)puVar2 - (int)param_1;
      param_1 = (undefined4 *)0xf;
      do {
        puVar6 = (undefined4 *)(iVar3 + (int)puVar5);
        puVar7 = puVar5;
        for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar5 = puVar5 + 0x13;
      } while (param_1 != (undefined4 *)0x0);
      puVar1[0x14e] = puVar2[0x14e];
      puVar1[0x14f] = puVar2[0x14f];
      puVar1[0x150] = puVar2[0x150];
      puVar1[0x151] = puVar2[0x151];
      puVar1[0x152] = puVar2[0x152];
      puVar1[0x153] = puVar2[0x153];
      puVar1[0x154] = puVar2[0x154];
      puVar1[0x155] = puVar2[0x155];
      puVar1[0x156] = puVar2[0x156];
      puVar1[0x157] = puVar2[0x157];
      puVar1[0x158] = puVar2[0x158];
      puVar1[0x159] = puVar2[0x159];
      puVar5 = puVar2 + 0x15a;
      puVar6 = puVar1 + 0x15a;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar1[0x163] = puVar2[0x163];
      puVar1[0x164] = puVar2[0x164];
      puVar1[0x165] = puVar2[0x165];
      puVar1[0x166] = puVar2[0x166];
      puVar1[0x167] = puVar2[0x167];
      puVar1[0x168] = puVar2[0x168];
      puVar1[0x169] = puVar2[0x169];
      puVar1[0x16a] = puVar2[0x16a];
      *(undefined1 *)(puVar1 + 0x16b) = *(undefined1 *)(puVar2 + 0x16b);
      puVar1[0x16c] = puVar2[0x16c];
      puVar1[0x16d] = puVar2[0x16d];
      puVar1[0x16e] = puVar2[0x16e];
      puVar1[0x16f] = puVar2[0x16f];
      puVar1[0x170] = puVar2[0x170];
      puVar1[0x171] = puVar2[0x171];
      *(undefined1 *)(puVar1 + 0x172) = *(undefined1 *)(puVar2 + 0x172);
      puVar1[0x173] = puVar2[0x173];
      *(undefined1 *)(puVar1 + 0x174) = *(undefined1 *)(puVar2 + 0x174);
      puVar1[0x175] = puVar2[0x175];
      *(undefined1 *)(puVar1 + 0x176) = *(undefined1 *)(puVar2 + 0x176);
    }
  }
  return;
}
