/* Rebuilt from lomse.exe FUN_00539100 @ 0x00539100 (818 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574770 (*(undefined *)0x00574770)
#define s_invalid_distance_code_00574738 (*(char (*)[])0x00574738)
#define s_invalid_literal_length_code_00574750 (*(char (*)[])0x00574750)

#define LOM_SELF_00539100 1
undefined4 __cdecl
rb_00539100(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14;
  typedef undefined1 * _t_local_10;
  typedef byte * _t_local_c;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
  
  puVar9 = *(undefined1 **)(param_5 + 0x30);
  uVar7 = *(uint *)(param_5 + 0x20);
  pbVar13 = (byte *)*param_6;
  local_14 = param_6[1];
  uVar4 = *(uint *)(param_5 + 0x1c);
  if (puVar9 < *(undefined1 **)(param_5 + 0x2c)) {
    local_10 = *(undefined1 **)(param_5 + 0x2c) + (-1 - (int)puVar9);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_5 + 0x28) - (int)puVar9);
  }
  uVar2 = *(uint *)(&DAT_00574770 + param_1 * 4);
  uVar3 = *(uint *)(&DAT_00574770 + param_2 * 4);
  local_c = pbVar13;
  do {
    if (uVar4 < 0x14) {
      do {
        local_14 = local_14 - 1;
        bVar5 = (byte)uVar4;
        uVar4 = uVar4 + 8;
        uVar7 = uVar7 | (uint)*pbVar13 << (bVar5 & 0x1f);
        pbVar13 = pbVar13 + 1;
      } while (uVar4 < 0x14);
      local_c = pbVar13;
    }
    bVar5 = *(byte *)(param_3 + (uVar2 & uVar7) * 8);
    uVar8 = (uint)bVar5;
    iVar12 = param_3 + (uVar2 & uVar7) * 8;
    if (uVar8 == 0) {
LAB_00539327:
      uVar7 = uVar7 >> (*(byte *)(iVar12 + 1) & 0x1f);
      uVar4 = uVar4 - *(byte *)(iVar12 + 1);
      *puVar9 = *(undefined1 *)(iVar12 + 4);
      puVar9 = puVar9 + 1;
      local_10 = local_10 + -1;
    }
    else {
      uVar7 = uVar7 >> (*(byte *)(iVar12 + 1) & 0x1f);
      uVar4 = uVar4 - *(byte *)(iVar12 + 1);
      while ((bVar5 & 0x10) == 0) {
        if ((uVar8 & 0x40) != 0) {
          if ((uVar8 & 0x20) != 0) {
            *(uint *)(param_5 + 0x20) = uVar7;
            *(uint *)(param_5 + 0x1c) = uVar4 & 7;
            iVar15 = (int)pbVar13 - (uVar4 >> 3);
            iVar12 = *param_6;
            param_6[1] = (uVar4 >> 3) + local_14;
            *param_6 = iVar15;
            param_6[2] = param_6[2] + (iVar15 - iVar12);
            *(undefined1 **)(param_5 + 0x30) = puVar9;
            return 1;
          }
          param_6[6] = (int)s_invalid_literal_length_code_00574750;
          goto LAB_005393f5;
        }
        iVar15 = uVar8 * 4;
        bVar5 = *(byte *)(*(int *)(iVar12 + 4) + (*(uint *)(&DAT_00574770 + iVar15) & uVar7) * 8);
        uVar8 = (uint)bVar5;
        iVar12 = *(int *)(iVar12 + 4) + (*(uint *)(&DAT_00574770 + iVar15) & uVar7) * 8;
        if (uVar8 == 0) goto LAB_00539327;
        uVar7 = uVar7 >> (*(byte *)(iVar12 + 1) & 0x1f);
        uVar4 = uVar4 - *(byte *)(iVar12 + 1);
      }
      uVar8 = uVar8 & 0xf;
      uVar4 = uVar4 - uVar8;
      uVar6 = (*(uint *)(&DAT_00574770 + uVar8 * 4) & uVar7) + *(int *)(iVar12 + 4);
      uVar8 = uVar7 >> (sbyte)uVar8;
      if (uVar4 < 0xf) {
        do {
          local_14 = local_14 - 1;
          bVar5 = (byte)uVar4;
          uVar4 = uVar4 + 8;
          uVar8 = uVar8 | (uint)*pbVar13 << (bVar5 & 0x1f);
          pbVar13 = pbVar13 + 1;
        } while (uVar4 < 0xf);
        local_c = pbVar13;
      }
      iVar12 = param_4 + (uVar3 & uVar8) * 8;
      uVar7 = uVar8 >> (*(byte *)(iVar12 + 1) & 0x1f);
      uVar4 = uVar4 - *(byte *)(iVar12 + 1);
      bVar5 = *(byte *)(param_4 + (uVar3 & uVar8) * 8);
      while ((bVar5 & 0x10) == 0) {
        if ((bVar5 & 0x40) != 0) {
          param_6[6] = (int)s_invalid_distance_code_00574738;
LAB_005393f5:
          *(uint *)(param_5 + 0x20) = uVar7;
          iVar15 = (int)pbVar13 - (uVar4 >> 3);
          *(uint *)(param_5 + 0x1c) = uVar4 & 7;
          param_6[1] = (uVar4 >> 3) + local_14;
          iVar12 = *param_6;
          *param_6 = iVar15;
          param_6[2] = param_6[2] + (iVar15 - iVar12);
          *(undefined1 **)(param_5 + 0x30) = puVar9;
          return 0xfffffffd;
        }
        piVar1 = (int *)(iVar12 + 4);
        uVar8 = *(uint *)(&DAT_00574770 + (uint)bVar5 * 4) & uVar7;
        iVar12 = *piVar1 + uVar8 * 8;
        uVar7 = uVar7 >> (*(byte *)(iVar12 + 1) & 0x1f);
        uVar4 = uVar4 - *(byte *)(iVar12 + 1);
        bVar5 = *(byte *)(*piVar1 + uVar8 * 8);
      }
      uVar8 = bVar5 & 0xf;
      if (uVar4 < uVar8) {
        do {
          local_14 = local_14 - 1;
          bVar5 = (byte)uVar4;
          uVar4 = uVar4 + 8;
          uVar7 = uVar7 | (uint)*pbVar13 << (bVar5 & 0x1f);
          pbVar13 = local_c + 1;
          local_c = pbVar13;
        } while (uVar4 < uVar8);
      }
      uVar4 = uVar4 - uVar8;
      uVar14 = (*(uint *)(&DAT_00574770 + uVar8 * 4) & uVar7) + *(int *)(iVar12 + 4);
      uVar7 = uVar7 >> (sbyte)uVar8;
      local_10 = local_10 + -uVar6;
      if ((uint)((int)puVar9 - *(int *)(param_5 + 0x24)) < uVar14) {
        uVar8 = (uVar14 + *(int *)(param_5 + 0x24)) - (int)puVar9;
        puVar11 = (undefined1 *)(*(int *)(param_5 + 0x28) - uVar8);
        if (uVar8 < uVar6) {
          uVar6 = uVar6 - uVar8;
          do {
            *puVar9 = *puVar11;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          puVar11 = *(undefined1 **)(param_5 + 0x24);
        }
      }
      else {
        puVar10 = puVar9 + -uVar14;
        *puVar9 = *puVar10;
        puVar11 = puVar10 + 2;
        puVar9[1] = puVar10[1];
        uVar6 = uVar6 - 2;
        puVar9 = puVar9 + 2;
      }
      do {
        *puVar9 = *puVar11;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      pbVar13 = local_c;
    }
    if ((local_10 < (undefined1 *)0x102) || (local_14 < 10)) {
      *(uint *)(param_5 + 0x20) = uVar7;
      *(uint *)(param_5 + 0x1c) = uVar4 & 7;
      iVar15 = (int)pbVar13 - (uVar4 >> 3);
      iVar12 = *param_6;
      param_6[1] = (uVar4 >> 3) + local_14;
      *param_6 = iVar15;
      param_6[2] = param_6[2] + (iVar15 - iVar12);
      *(undefined1 **)(param_5 + 0x30) = puVar9;
      return 0;
    }
  } while( true );
#undef local_14
#undef local_10
#undef local_c
}
