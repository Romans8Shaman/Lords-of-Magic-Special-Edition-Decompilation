/* Rebuilt from lomse.exe FUN_004cea00 @ 0x004cea00 (500 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004cea00 1
void __fastcall rb_004cea00(void *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  byte *pbVar11;
  bool bVar12;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef byte * _t_local_c;
  typedef byte * _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar4 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar4;
    uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar4 * 8);
    local_c = *(byte **)(*(int *)((int)param_1 + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    uVar2 = 0;
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_c = local_4;
  }
  if ((char)uVar2 != '\b') {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  puVar9 = (undefined4 *)((int)param_1 + 0x74);
  puVar5 = *(undefined4 **)((int)param_1 + 0x74);
  while (puVar5 != (undefined4 *)0x0) {
    pbVar11 = (byte *)puVar5[1];
    pbVar3 = local_c;
    do {
      bVar1 = *pbVar3;
      bVar12 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_004ceac4:
        iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_004ceac9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar12 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_004ceac4;
      pbVar3 = pbVar3 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004ceac9:
    if (iVar4 == 0) {
      uVar10 = *puVar5;
      goto LAB_004ceba7;
    }
    puVar9 = puVar5 + 2;
    if (-1 < iVar4) {
      puVar9 = puVar5 + 3;
    }
    puVar5 = (undefined4 *)*puVar9;
  }
  puVar5 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar5 == (undefined4 *)0x0) {
    uVar10 = *(undefined4 *)((int)param_1 + 0x7c);
  }
  else {
    uVar7 = 0xffffffff;
    pbVar11 = local_c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
    iVar4 = Ordinal_401(~uVar7,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    puVar5[1] = iVar4;
    if (iVar4 == 0) {
      Ordinal_403(puVar5,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      uVar10 = 0;
    }
    else {
      *(uint *)((int)param_1 + 0xa90) = *(int *)((int)param_1 + 0xa90) + ~uVar7 + 0x18;
      *(undefined4 **)(*(int *)((int)param_1 + 0x80) + *(int *)((int)param_1 + 0x78) * 4) = puVar5;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = *(undefined4 *)((int)param_1 + 0x78);
      *(int *)((int)param_1 + 0x78) = *(int *)((int)param_1 + 0x78) + 1;
      puVar5[4] = 0;
      puVar5[5] = 0;
      uVar7 = 0xffffffff;
      do {
        pbVar11 = local_c;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar11 = local_c + 1;
        bVar1 = *local_c;
        local_c = pbVar11;
      } while (bVar1 != 0);
      uVar7 = ~uVar7;
      pbVar11 = pbVar11 + -uVar7;
      pbVar3 = (byte *)puVar5[1];
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar3 = pbVar3 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar3 = pbVar3 + 1;
      }
      *puVar9 = puVar5;
      uVar10 = *puVar5;
    }
  }
LAB_004ceba7:
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)param_1 + 0x50);
  iVar6 = *(int *)((int)param_1 + 0x54) + -1;
  *(int *)((int)param_1 + 0x54) = iVar6;
  *(uint *)(iVar4 + iVar6 * 8) = CONCAT31((uint)((uint)uVar2 >> 8) & 1,5);
  *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar10;
  return;
#undef local_c
#undef local_4
}
