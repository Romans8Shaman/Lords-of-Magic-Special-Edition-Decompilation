/* Rebuilt from lomse.exe FUN_005387f0 @ 0x005387f0 (1914 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574770 (*(undefined *)0x00574770)
#define FUN_00538fc0 ((int (__cdecl *)(int, int, int))0x00538fc0)
#define FUN_00539100 ((undefined4 (__cdecl *)(int, int, int, int, int, int *))0x00539100)
#define s_invalid_distance_code_00574738 (*(char (*)[])0x00574738)
#define s_invalid_literal_length_code_00574750 (*(char (*)[])0x00574750)

#define LOM_SELF_005387f0 1
int __cdecl rb_005387f0(uint param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14;
  typedef undefined1 * _t_local_10;
  typedef undefined1 * _t_local_8;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
  
  pbVar5 = param_2;
  uVar6 = param_1;
  local_14 = *(uint *)(param_2 + 4);
  piVar2 = *(int **)(param_1 + 0xc);
  puVar11 = *(undefined1 **)(param_1 + 0x30);
  uVar12 = *(uint *)(param_1 + 0x1c);
  if (puVar11 < *(undefined1 **)(param_1 + 0x2c)) {
    local_10 = *(undefined1 **)(param_1 + 0x2c) + (-1 - (int)puVar11);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_1 + 0x28) - (int)puVar11);
  }
  param_1 = *(uint *)(param_1 + 0x20);
  param_2 = *(byte **)param_2;
  do {
    switch(*piVar2) {
    case 0:
      if (((undefined1 *)0x101 < local_10) && (9 < local_14)) {
        *(uint *)(uVar6 + 0x20) = param_1;
        *(uint *)(uVar6 + 0x1c) = uVar12;
        iVar8 = *(int *)pbVar5;
        *(uint *)(pbVar5 + 4) = local_14;
        *(byte **)pbVar5 = param_2;
        *(byte **)(pbVar5 + 8) = param_2 + (*(int *)(pbVar5 + 8) - iVar8);
        *(undefined1 **)(uVar6 + 0x30) = puVar11;
        param_3 = FUN_00539100((uint)*(byte *)(piVar2 + 4),(uint)*(byte *)((int)piVar2 + 0x11),
                               piVar2[5],piVar2[6],uVar6,(int *)pbVar5);
        local_14 = *(uint *)(pbVar5 + 4);
        param_2 = *(byte **)pbVar5;
        uVar12 = *(uint *)(uVar6 + 0x1c);
        param_1 = *(uint *)(uVar6 + 0x20);
        puVar11 = *(undefined1 **)(uVar6 + 0x30);
        if (puVar11 < *(undefined1 **)(uVar6 + 0x2c)) {
          local_10 = *(undefined1 **)(uVar6 + 0x2c) + (-1 - (int)puVar11);
        }
        else {
          local_10 = (undefined1 *)(*(int *)(uVar6 + 0x28) - (int)puVar11);
        }
        if (param_3 != 0) {
          *piVar2 = (-(uint)(param_3 != 1) & 2) + 7;
          break;
        }
      }
      piVar2[2] = piVar2[5];
      piVar2[3] = (uint)*(byte *)(piVar2 + 4);
      *piVar2 = 1;
    case 1:
      uVar7 = piVar2[3];
      if (uVar12 < uVar7) {
        do {
          if (local_14 == 0) {
            *(uint *)(uVar6 + 0x1c) = uVar12;
            *(uint *)(uVar6 + 0x20) = param_1;
            iVar8 = *(int *)pbVar5;
            iVar4 = *(int *)(pbVar5 + 8);
            pbVar5[4] = 0;
            pbVar5[5] = 0;
            pbVar5[6] = 0;
            pbVar5[7] = 0;
            *(byte **)pbVar5 = param_2;
            *(byte **)(pbVar5 + 8) = param_2 + (iVar4 - iVar8);
            *(undefined1 **)(uVar6 + 0x30) = puVar11;
            iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,param_3);
            return iVar8;
          }
          local_14 = local_14 - 1;
          param_3 = 0;
          bVar9 = (byte)uVar12;
          uVar12 = uVar12 + 8;
          param_1 = param_1 | (uint)*param_2 << (bVar9 & 0x1f);
          uVar7 = piVar2[3];
          param_2 = param_2 + 1;
        } while (uVar12 < uVar7);
      }
      pbVar1 = (byte *)(piVar2[2] + (*(uint *)(&DAT_00574770 + uVar7 * 4) & param_1) * 8);
      param_1 = param_1 >> (pbVar1[1] & 0x1f);
      uVar12 = uVar12 - pbVar1[1];
      bVar9 = *pbVar1;
      uVar7 = (uint)bVar9;
      if (uVar7 == 0) {
        piVar2[2] = *(int *)(pbVar1 + 4);
        *piVar2 = 6;
      }
      else if ((bVar9 & 0x10) == 0) {
        if ((bVar9 & 0x40) == 0) {
          piVar2[3] = uVar7;
          piVar2[2] = *(int *)(pbVar1 + 4);
        }
        else {
          if ((bVar9 & 0x20) == 0) {
            *piVar2 = 9;
            *(char **)(pbVar5 + 0x18) = s_invalid_literal_length_code_00574750;
switchD_0053883d_caseD_9:
            *(uint *)(uVar6 + 0x20) = param_1;
            *(uint *)(uVar6 + 0x1c) = uVar12;
            iVar8 = *(int *)pbVar5;
            *(uint *)(pbVar5 + 4) = local_14;
            *(byte **)pbVar5 = param_2;
            *(byte **)(pbVar5 + 8) = param_2 + (*(int *)(pbVar5 + 8) - iVar8);
            *(undefined1 **)(uVar6 + 0x30) = puVar11;
            iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,-3);
            return iVar8;
          }
          *piVar2 = 7;
        }
      }
      else {
        piVar2[2] = uVar7 & 0xf;
        piVar2[1] = *(int *)(pbVar1 + 4);
        *piVar2 = 2;
      }
      break;
    case 2:
      uVar7 = piVar2[2];
      if (uVar12 < uVar7) {
        do {
          if (local_14 == 0) goto LAB_00538e16;
          local_14 = local_14 - 1;
          bVar9 = (byte)uVar12;
          uVar12 = uVar12 + 8;
          param_3 = 0;
          param_1 = param_1 | (uint)*param_2 << (bVar9 & 0x1f);
          uVar7 = piVar2[2];
          param_2 = param_2 + 1;
        } while (uVar12 < uVar7);
      }
      piVar2[1] = piVar2[1] + (*(uint *)(&DAT_00574770 + uVar7 * 4) & param_1);
      param_1 = param_1 >> ((byte)piVar2[2] & 0x1f);
      *piVar2 = 3;
      uVar12 = uVar12 - piVar2[2];
      piVar2[2] = piVar2[6];
      piVar2[3] = (uint)*(byte *)((int)piVar2 + 0x11);
    case 3:
      uVar7 = piVar2[3];
      if (uVar12 < uVar7) {
        do {
          if (local_14 == 0) {
LAB_00538e16:
            *(uint *)(uVar6 + 0x1c) = uVar12;
            *(uint *)(uVar6 + 0x20) = param_1;
            iVar8 = *(int *)pbVar5;
            iVar4 = *(int *)(pbVar5 + 8);
            pbVar5[4] = 0;
            pbVar5[5] = 0;
            pbVar5[6] = 0;
            pbVar5[7] = 0;
            *(byte **)pbVar5 = param_2;
            *(byte **)(pbVar5 + 8) = param_2 + (iVar4 - iVar8);
            *(undefined1 **)(uVar6 + 0x30) = puVar11;
            iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,param_3);
            return iVar8;
          }
          local_14 = local_14 - 1;
          param_3 = 0;
          bVar9 = (byte)uVar12;
          uVar12 = uVar12 + 8;
          param_1 = param_1 | (uint)*param_2 << (bVar9 & 0x1f);
          uVar7 = piVar2[3];
          param_2 = param_2 + 1;
        } while (uVar12 < uVar7);
      }
      pbVar1 = (byte *)(piVar2[2] + (*(uint *)(&DAT_00574770 + uVar7 * 4) & param_1) * 8);
      param_1 = param_1 >> (pbVar1[1] & 0x1f);
      uVar12 = uVar12 - pbVar1[1];
      bVar9 = *pbVar1;
      if ((bVar9 & 0x10) == 0) {
        if ((bVar9 & 0x40) != 0) {
          *piVar2 = 9;
          *(char **)(pbVar5 + 0x18) = s_invalid_distance_code_00574738;
          goto switchD_0053883d_caseD_9;
        }
        piVar2[3] = (uint)bVar9;
        piVar2[2] = *(int *)(pbVar1 + 4);
      }
      else {
        piVar2[2] = bVar9 & 0xf;
        piVar2[3] = *(int *)(pbVar1 + 4);
        *piVar2 = 4;
      }
      break;
    case 4:
      uVar7 = piVar2[2];
      if (uVar12 < uVar7) {
        do {
          if (local_14 == 0) goto LAB_00538e16;
          local_14 = local_14 - 1;
          param_3 = 0;
          bVar9 = (byte)uVar12;
          uVar12 = uVar12 + 8;
          param_1 = param_1 | (uint)*param_2 << (bVar9 & 0x1f);
          uVar7 = piVar2[2];
          param_2 = param_2 + 1;
        } while (uVar12 < uVar7);
      }
      piVar2[3] = piVar2[3] + (*(uint *)(&DAT_00574770 + uVar7 * 4) & param_1);
      param_1 = param_1 >> ((byte)piVar2[2] & 0x1f);
      *piVar2 = 5;
      uVar12 = uVar12 - piVar2[2];
    case 5:
      if ((uint)((int)puVar11 - *(int *)(uVar6 + 0x24)) < (uint)piVar2[3]) {
        iVar8 = (*(int *)(uVar6 + 0x28) - *(int *)(uVar6 + 0x24)) - piVar2[3];
      }
      else {
        iVar8 = -piVar2[3];
      }
      local_8 = puVar11 + iVar8;
      if (piVar2[1] == 0) {
LAB_00538d71:
        *piVar2 = 0;
      }
      else {
        do {
          if (local_10 == (undefined1 *)0x0) {
            if (puVar11 == *(undefined1 **)(uVar6 + 0x28)) {
              puVar10 = *(undefined1 **)(uVar6 + 0x2c);
              puVar3 = *(undefined1 **)(uVar6 + 0x24);
              if (puVar10 != puVar3) {
                puVar11 = puVar3;
                if (puVar3 < puVar10) {
                  local_10 = puVar10 + (-1 - (int)puVar3);
                }
                else {
                  local_10 = *(undefined1 **)(uVar6 + 0x28) + -(int)puVar3;
                }
              }
            }
            if (local_10 == (undefined1 *)0x0) {
              *(undefined1 **)(uVar6 + 0x30) = puVar11;
              param_3 = FUN_00538fc0(uVar6,(int)pbVar5,param_3);
              puVar11 = *(undefined1 **)(uVar6 + 0x30);
              puVar10 = *(undefined1 **)(uVar6 + 0x2c);
              if (puVar11 < puVar10) {
                local_10 = puVar10 + (-1 - (int)puVar11);
              }
              else {
                local_10 = (undefined1 *)(*(int *)(uVar6 + 0x28) - (int)puVar11);
              }
              if ((puVar11 == *(undefined1 **)(uVar6 + 0x28)) &&
                 (puVar3 = *(undefined1 **)(uVar6 + 0x24), puVar10 != puVar3)) {
                puVar11 = puVar3;
                if (puVar3 < puVar10) {
                  local_10 = puVar10 + (-1 - (int)puVar3);
                }
                else {
                  local_10 = *(undefined1 **)(uVar6 + 0x28) + -(int)puVar3;
                }
              }
              if (local_10 == (undefined1 *)0x0) goto LAB_00538e55;
            }
          }
          puVar10 = puVar11 + 1;
          param_3 = 0;
          *puVar11 = *local_8;
          local_8 = local_8 + 1;
          local_10 = local_10 + -1;
          if (local_8 == *(undefined1 **)(uVar6 + 0x28)) {
            local_8 = *(undefined1 **)(uVar6 + 0x24);
          }
          iVar8 = piVar2[1];
          piVar2[1] = iVar8 + -1;
          puVar11 = puVar10;
        } while (iVar8 + -1 != 0);
        *piVar2 = 0;
      }
      break;
    case 6:
      if (local_10 == (undefined1 *)0x0) {
        if (puVar11 == *(undefined1 **)(uVar6 + 0x28)) {
          puVar10 = *(undefined1 **)(uVar6 + 0x2c);
          puVar3 = *(undefined1 **)(uVar6 + 0x24);
          if (puVar10 != puVar3) {
            puVar11 = puVar3;
            if (puVar3 < puVar10) {
              local_10 = puVar10 + (-1 - (int)puVar3);
            }
            else {
              local_10 = *(undefined1 **)(uVar6 + 0x28) + -(int)puVar3;
            }
          }
        }
        if (local_10 == (undefined1 *)0x0) {
          *(undefined1 **)(uVar6 + 0x30) = puVar11;
          param_3 = FUN_00538fc0(uVar6,(int)pbVar5,param_3);
          puVar11 = *(undefined1 **)(uVar6 + 0x30);
          puVar10 = *(undefined1 **)(uVar6 + 0x2c);
          if (puVar11 < puVar10) {
            local_10 = puVar10 + (-1 - (int)puVar11);
          }
          else {
            local_10 = (undefined1 *)(*(int *)(uVar6 + 0x28) - (int)puVar11);
          }
          if ((puVar11 == *(undefined1 **)(uVar6 + 0x28)) &&
             (puVar3 = *(undefined1 **)(uVar6 + 0x24), puVar10 != puVar3)) {
            puVar11 = puVar3;
            if (puVar3 < puVar10) {
              local_10 = puVar10 + (-1 - (int)puVar3);
            }
            else {
              local_10 = *(undefined1 **)(uVar6 + 0x28) + -(int)puVar3;
            }
          }
          if (local_10 == (undefined1 *)0x0) {
LAB_00538e55:
            *(uint *)(uVar6 + 0x20) = param_1;
            *(uint *)(uVar6 + 0x1c) = uVar12;
            iVar8 = *(int *)pbVar5;
            *(uint *)(pbVar5 + 4) = local_14;
            *(byte **)pbVar5 = param_2;
            *(byte **)(pbVar5 + 8) = param_2 + (*(int *)(pbVar5 + 8) - iVar8);
            *(undefined1 **)(uVar6 + 0x30) = puVar11;
            iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,param_3);
            return iVar8;
          }
        }
      }
      param_3 = 0;
      *puVar11 = (char)piVar2[2];
      puVar11 = puVar11 + 1;
      local_10 = local_10 + -1;
      goto LAB_00538d71;
    case 7:
      *(undefined1 **)(uVar6 + 0x30) = puVar11;
      iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,param_3);
      puVar11 = *(undefined1 **)(uVar6 + 0x30);
      if (*(undefined1 **)(uVar6 + 0x2c) != puVar11) {
        *(uint *)(uVar6 + 0x1c) = uVar12;
        *(uint *)(uVar6 + 0x20) = param_1;
        iVar4 = *(int *)pbVar5;
        *(uint *)(pbVar5 + 4) = local_14;
        *(byte **)pbVar5 = param_2;
        *(byte **)(pbVar5 + 8) = param_2 + (*(int *)(pbVar5 + 8) - iVar4);
        *(undefined1 **)(uVar6 + 0x30) = puVar11;
        iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,iVar8);
        return iVar8;
      }
      *piVar2 = 8;
    case 8:
      goto switchD_0053883d_caseD_8;
    case 9:
      goto switchD_0053883d_caseD_9;
    default:
      *(uint *)(uVar6 + 0x20) = param_1;
      *(uint *)(uVar6 + 0x1c) = uVar12;
      iVar8 = *(int *)pbVar5;
      *(uint *)(pbVar5 + 4) = local_14;
      *(byte **)pbVar5 = param_2;
      *(byte **)(pbVar5 + 8) = param_2 + (*(int *)(pbVar5 + 8) - iVar8);
      *(undefined1 **)(uVar6 + 0x30) = puVar11;
      iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,-2);
      return iVar8;
    }
  } while( true );
switchD_0053883d_caseD_8:
  *(uint *)(uVar6 + 0x20) = param_1;
  *(uint *)(uVar6 + 0x1c) = uVar12;
  iVar8 = *(int *)pbVar5;
  *(uint *)(pbVar5 + 4) = local_14;
  *(byte **)pbVar5 = param_2;
  *(byte **)(pbVar5 + 8) = param_2 + (*(int *)(pbVar5 + 8) - iVar8);
  *(undefined1 **)(uVar6 + 0x30) = puVar11;
  iVar8 = FUN_00538fc0(uVar6,(int)pbVar5,1);
  return iVar8;
#undef local_14
#undef local_10
#undef local_8
}
