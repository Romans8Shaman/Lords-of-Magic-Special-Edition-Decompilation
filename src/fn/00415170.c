/* Rebuilt from lomse.exe FUN_00415170 @ 0x00415170 (690 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)

#define LOM_SELF_00415170 1
void __thiscall rb_00415170(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  puVar1 = param_1;
  puVar5 = this;
  puVar6 = param_1;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xb] = 0;
  param_1[0x11] = *(undefined4 *)((int)this + 0x44);
  param_1[0x12] = *(undefined4 *)((int)this + 0x48);
  param_1[0x13] = *(undefined4 *)((int)this + 0x4c);
  param_1[0x14] = *(undefined4 *)((int)this + 0x50);
  param_1[0x15] = *(undefined4 *)((int)this + 0x54);
  param_1[0x16] = *(undefined4 *)((int)this + 0x58);
  param_1[0x17] = *(undefined4 *)((int)this + 0x5c);
  param_1[0x18] = *(undefined4 *)((int)this + 0x60);
  param_1[0x19] = *(undefined4 *)((int)this + 100);
  puVar5 = (undefined4 *)((int)this + 0x68);
  puVar6 = param_1 + 0x1a;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_4 = 0;
  param_1[0x30] = *(undefined4 *)((int)this + 0xc0);
  puVar5 = param_1 + 0x31;
  iVar2 = (int)this - (int)param_1;
  param_1 = (undefined4 *)0xf;
  do {
    puVar6 = (undefined4 *)(iVar2 + (int)puVar5);
    puVar7 = puVar5;
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    param_1 = (undefined4 *)((int)param_1 + -1);
    puVar5 = puVar5 + 0x13;
  } while (param_1 != (undefined4 *)0x0);
  puVar1[0x14e] = *(undefined4 *)((int)this + 0x538);
  puVar1[0x14f] = *(undefined4 *)((int)this + 0x53c);
  puVar1[0x150] = *(undefined4 *)((int)this + 0x540);
  puVar1[0x151] = *(undefined4 *)((int)this + 0x544);
  puVar1[0x152] = *(undefined4 *)((int)this + 0x548);
  puVar1[0x153] = *(undefined4 *)((int)this + 0x54c);
  puVar1[0x154] = *(undefined4 *)((int)this + 0x550);
  puVar1[0x155] = *(undefined4 *)((int)this + 0x554);
  puVar1[0x156] = *(undefined4 *)((int)this + 0x558);
  iVar3 = 0;
  puVar1[0x157] = *(undefined4 *)((int)this + 0x55c);
  puVar1[0x158] = *(undefined4 *)((int)this + 0x560);
  puVar1[0x159] = *(undefined4 *)((int)this + 0x564);
  puVar5 = (undefined4 *)((int)this + 0x568);
  puVar6 = puVar1 + 0x15a;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar1[0x163] = *(undefined4 *)((int)this + 0x58c);
  puVar1[0x164] = *(undefined4 *)((int)this + 0x590);
  puVar1[0x165] = *(undefined4 *)((int)this + 0x594);
  puVar1[0x166] = *(undefined4 *)((int)this + 0x598);
  puVar1[0x167] = *(undefined4 *)((int)this + 0x59c);
  puVar1[0x168] = *(undefined4 *)((int)this + 0x5a0);
  puVar1[0x169] = *(undefined4 *)((int)this + 0x5a4);
  puVar1[0x16a] = *(undefined4 *)((int)this + 0x5a8);
  *(undefined1 *)(puVar1 + 0x16b) = *(undefined1 *)((int)this + 0x5ac);
  puVar1[0x16c] = *(undefined4 *)((int)this + 0x5b0);
  puVar1[0x16d] = *(undefined4 *)((int)this + 0x5b4);
  puVar1[0x16e] = *(undefined4 *)((int)this + 0x5b8);
  puVar1[0x16f] = *(undefined4 *)((int)this + 0x5bc);
  puVar1[0x170] = *(undefined4 *)((int)this + 0x5c0);
  puVar1[0x171] = *(undefined4 *)((int)this + 0x5c4);
  *(undefined1 *)(puVar1 + 0x172) = *(undefined1 *)((int)this + 0x5c8);
  puVar1[0x173] = *(undefined4 *)((int)this + 0x5cc);
  *(undefined1 *)(puVar1 + 0x174) = *(undefined1 *)((int)this + 0x5d0);
  puVar1[0x175] = *(undefined4 *)((int)this + 0x5d4);
  *(undefined1 *)(puVar1 + 0x176) = *(undefined1 *)((int)this + 0x5d8);
  iVar2 = *(int *)((int)this + 0x4c);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if ((1 << ((byte)iVar4 & 0x1f) & param_2) != 0) {
        local_4 = local_4 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  if (local_4 != iVar2) {
    puVar1[0x13] = 0;
    if (local_4 == 0) {
      puVar1[0x15] = 0;
      return;
    }
    if (0 < *(int *)((int)this + 0x4c)) {
      puVar5 = (undefined4 *)((int)this + 0xc4);
      do {
        if ((param_2 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
          puVar6 = puVar5;
          puVar7 = puVar1 + puVar1[0x13] * 0x13 + 0x31;
          for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar1[0x13] = puVar1[0x13] + 1;
        }
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 0x13;
      } while (iVar3 < *(int *)((int)this + 0x4c));
    }
    FUN_00420630((int)puVar1);
  }
  return;
#undef local_4
}
