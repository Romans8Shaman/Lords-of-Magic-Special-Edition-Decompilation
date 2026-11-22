/* Rebuilt from lomse.exe FUN_00512710 @ 0x00512710 (21207 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00512710 1
void __thiscall
rb_00512710(void *this,int *param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  undefined2 *puVar27;
  int iVar28;
  int *piVar29;
  uchar _fr[0xb8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_ac;
  typedef int _t_local_a8;
  typedef int _t_local_a4;
  typedef int _t_local_a0;
  typedef undefined2 * _t_local_98;
  typedef undefined2 * _t_local_94;
  typedef int _t_local_90;
  typedef undefined2 * _t_local_8c;
  typedef int _t_local_88;
  typedef int _t_local_84;
  typedef int _t_local_80;
  typedef undefined2 * _t_local_7c;
  typedef int _t_local_78;
  typedef int _t_local_74;
  typedef int _t_local_70;
  typedef int _t_local_48[4];
  typedef int _t_local_38;
  typedef int _t_local_2c;
  typedef int _t_local_28[4];
  typedef int _t_local_18;
  typedef int _t_local_14[4];
  typedef int _t_local_4;
#define local_ac (*(_t_local_ac *)(_fr + 0x4))
#define local_a8 (*(_t_local_a8 *)(_fr + 0x8))
#define local_a4 (*(_t_local_a4 *)(_fr + 0xc))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x10))
#define local_98 (*(_t_local_98 *)(_fr + 0x18))
#define local_94 (*(_t_local_94 *)(_fr + 0x1c))
#define local_90 (*(_t_local_90 *)(_fr + 0x20))
#define local_8c (*(_t_local_8c *)(_fr + 0x24))
#define local_88 (*(_t_local_88 *)(_fr + 0x28))
#define local_84 (*(_t_local_84 *)(_fr + 0x2c))
#define local_80 (*(_t_local_80 *)(_fr + 0x30))
#define local_7c (*(_t_local_7c *)(_fr + 0x34))
#define local_78 (*(_t_local_78 *)(_fr + 0x38))
#define local_74 (*(_t_local_74 *)(_fr + 0x3c))
#define local_70 (*(_t_local_70 *)(_fr + 0x40))
#define local_48 (*(_t_local_48 *)(_fr + 0x68))
#define local_38 (*(_t_local_38 *)(_fr + 0x78))
#define local_2c (*(_t_local_2c *)(_fr + 0x84))
#define local_28 (*(_t_local_28 *)(_fr + 0x88))
#define local_18 (*(_t_local_18 *)(_fr + 0x98))
#define local_14 (*(_t_local_14 *)(_fr + 0x9c))
#define local_4 (*(_t_local_4 *)(_fr + 0xac))
  
  iVar1 = param_2[1];
  iVar2 = param_3[1];
  local_2c = param_1[3] >> 1;
  iVar3 = param_4[1];
  iVar9 = iVar2 >> 0x10;
  iVar13 = iVar3 >> 0x10;
  iVar4 = iVar1 >> 0x10;
  if (iVar1 == iVar2) {
    iVar2 = *param_2;
    if (iVar3 < iVar1) {
      if ((((*param_3 <= iVar2) && (iVar2 = *(int *)((int)this + 0x278), iVar2 <= iVar9)) &&
          (iVar9 = *(int *)((int)this + 0x280), iVar13 <= iVar9)) &&
         (local_ac = (iVar1 - iVar3 >> 0x10) + 1, 0 < local_ac)) {
        iVar1 = (*param_3 - *param_4) / local_ac;
        iVar3 = (param_3[2] - param_4[2]) / local_ac;
        iVar13 = (param_3[3] - param_4[3]) / local_ac;
        iVar4 = (param_3[4] - param_4[4]) / local_ac;
        iVar5 = (*param_2 - *param_4) / local_ac;
        iVar6 = (param_2[2] - param_4[2]) / local_ac;
        iVar7 = (param_2[3] - param_4[3]) / local_ac;
        iVar8 = (param_2[4] - param_4[4]) / local_ac;
        piVar25 = param_4;
        piVar29 = local_14;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar29 = *piVar25;
          piVar25 = piVar25 + 1;
          piVar29 = piVar29 + 1;
        }
        piVar25 = local_48;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar25 = *param_4;
          param_4 = param_4 + 1;
          piVar25 = piVar25 + 1;
        }
        if (local_14[1] >> 0x10 < iVar2) {
          iVar2 = iVar2 - (local_14[1] >> 0x10);
          local_14[0] = local_14[0] + iVar2 * iVar1;
          local_14[1] = local_14[1] + iVar2 * 0x10000;
          local_14[2] = local_14[2] + iVar2 * iVar3;
          local_14[3] = local_14[3] + iVar2 * iVar13;
          local_4 = local_4 + iVar2 * iVar4;
          local_48[0] = local_48[0] + iVar2 * iVar5;
          local_48[2] = local_48[2] + iVar2 * iVar6;
          local_48[3] = local_48[3] + iVar2 * iVar7;
          local_38 = local_38 + iVar2 * iVar8;
          local_ac = local_ac - iVar2;
        }
        iVar2 = local_14[1] >> 0x10;
        if (iVar9 < local_ac + iVar2) {
          local_ac = iVar9 - iVar2;
        }
        local_90 = local_38;
        local_70 = local_48[3];
        local_74 = local_48[2];
        local_78 = local_48[0];
        local_a4 = local_4;
        local_a8 = local_14[3];
        local_a0 = local_14[2];
        local_88 = local_14[0];
        local_84 = *param_1 + local_2c * iVar2 * 2;
        local_94 = (undefined2 *)local_ac;
        if (0 < local_ac) {
          do {
            iVar2 = local_88 >> 0x10;
            local_8c = (undefined2 *)(((local_78 >> 0x10) - iVar2) + 1);
            if (((0 < (int)local_8c) && (iVar2 <= *(int *)((int)this + 0x27c))) &&
               (iVar9 = *(int *)((int)this + 0x274), iVar9 <= local_78 >> 0x10)) {
              iVar10 = (local_74 - local_a0) / (int)local_8c;
              iVar11 = (local_70 - local_a8) / (int)local_8c;
              iVar12 = (local_90 - local_a4) / (int)local_8c;
              iVar19 = local_a0;
              iVar23 = local_a8;
              iVar26 = local_a4;
              if (iVar2 < iVar9) {
                iVar2 = iVar9 - iVar2;
                iVar23 = iVar2 * iVar11 + local_a8;
                iVar19 = iVar2 * iVar10 + local_a0;
                iVar26 = iVar2 * iVar12 + local_a4;
                local_8c = (undefined2 *)((int)local_8c - iVar2);
                iVar2 = iVar9;
              }
              if ((0 < (int)local_8c) && (iVar2 < *(int *)((int)this + 0x27c))) {
                local_7c = (undefined2 *)(local_84 + iVar2 * 2);
                do {
                  *local_7c = *(undefined2 *)
                               ((int)this +
                               ((uint)*(byte *)((iVar23 >> 7 & 0xfffffe00U) +
                                               param_5 + (iVar19 >> 0x10)) +
                               (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                  local_8c = (undefined2 *)((int)local_8c + -1);
                  if (local_8c == (undefined2 *)0x0) break;
                  iVar19 = iVar19 + iVar10;
                  iVar26 = iVar26 + iVar12;
                  iVar23 = iVar23 + iVar11;
                  iVar2 = iVar2 + 1;
                  local_7c = local_7c + 1;
                } while (iVar2 < *(int *)((int)this + 0x27c));
              }
            }
            local_94 = (undefined2 *)((int)local_94 + -1);
            if (local_94 == (undefined2 *)0x0) {
              return;
            }
            local_84 = local_84 + local_2c * 2;
            local_88 = local_88 + iVar1;
            local_a0 = local_a0 + iVar3;
            local_a4 = local_a4 + iVar4;
            local_78 = local_78 + iVar5;
            local_a8 = local_a8 + iVar13;
            local_70 = local_70 + iVar7;
            local_74 = local_74 + iVar6;
            local_90 = local_90 + iVar8;
            if ((int)local_94 < 1) {
              return;
            }
          } while( true );
        }
      }
    }
    else if ((((iVar2 <= *param_3) && (iVar9 = *(int *)((int)this + 0x278), iVar9 <= iVar13)) &&
             (iVar13 = *(int *)((int)this + 0x280), iVar4 <= iVar13)) &&
            (local_ac = (iVar3 - iVar1 >> 0x10) + 1, 0 < local_ac)) {
      iVar1 = (*param_4 - iVar2) / local_ac;
      iVar2 = (param_4[2] - param_2[2]) / local_ac;
      iVar3 = (param_4[3] - param_2[3]) / local_ac;
      iVar4 = (param_4[4] - param_2[4]) / local_ac;
      iVar5 = (*param_4 - *param_3) / local_ac;
      iVar6 = (param_4[2] - param_3[2]) / local_ac;
      iVar7 = (param_4[3] - param_3[3]) / local_ac;
      iVar8 = (param_4[4] - param_3[4]) / local_ac;
      piVar25 = local_14;
      for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
        *piVar25 = *param_2;
        param_2 = param_2 + 1;
        piVar25 = piVar25 + 1;
      }
      piVar25 = local_48;
      for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
        *piVar25 = *param_3;
        param_3 = param_3 + 1;
        piVar25 = piVar25 + 1;
      }
      if (local_14[1] >> 0x10 < iVar9) {
        iVar9 = iVar9 - (local_14[1] >> 0x10);
        local_14[0] = local_14[0] + iVar9 * iVar1;
        local_14[1] = local_14[1] + iVar9 * 0x10000;
        local_14[2] = local_14[2] + iVar9 * iVar2;
        local_14[3] = local_14[3] + iVar9 * iVar3;
        local_4 = local_4 + iVar9 * iVar4;
        local_48[0] = local_48[0] + iVar9 * iVar5;
        local_48[2] = local_48[2] + iVar9 * iVar6;
        local_48[3] = local_48[3] + iVar9 * iVar7;
        local_38 = local_38 + iVar9 * iVar8;
        local_ac = local_ac - iVar9;
      }
      iVar9 = local_14[1] >> 0x10;
      if (iVar13 < local_ac + iVar9) {
        local_ac = iVar13 - iVar9;
      }
      local_7c = (undefined2 *)local_38;
      local_84 = local_48[3];
      local_88 = local_48[2];
      local_78 = local_48[0];
      local_a4 = local_4;
      local_a8 = local_14[3];
      local_a0 = local_14[2];
      local_74 = local_14[0];
      local_70 = *param_1 + local_2c * iVar9 * 2;
      local_8c = (undefined2 *)local_ac;
      if (0 < local_ac) {
        do {
          iVar9 = local_74 >> 0x10;
          local_90 = ((local_78 >> 0x10) - iVar9) + 1;
          if (((0 < local_90) && (iVar9 <= *(int *)((int)this + 0x27c))) &&
             (iVar13 = *(int *)((int)this + 0x274), iVar13 <= local_78 >> 0x10)) {
            iVar10 = (local_88 - local_a0) / local_90;
            iVar11 = (local_84 - local_a8) / local_90;
            iVar12 = ((int)local_7c - local_a4) / local_90;
            iVar19 = local_a0;
            iVar23 = local_a8;
            iVar26 = local_a4;
            if (iVar9 < iVar13) {
              iVar9 = iVar13 - iVar9;
              iVar23 = iVar9 * iVar11 + local_a8;
              iVar19 = iVar9 * iVar10 + local_a0;
              iVar26 = iVar9 * iVar12 + local_a4;
              local_90 = local_90 - iVar9;
              iVar9 = iVar13;
            }
            if ((0 < local_90) && (iVar9 < *(int *)((int)this + 0x27c))) {
              local_98 = (undefined2 *)(local_70 + iVar9 * 2);
              do {
                *local_98 = *(undefined2 *)
                             ((int)this +
                             ((uint)*(byte *)((iVar23 >> 7 & 0xfffffe00U) +
                                             param_5 + (iVar19 >> 0x10)) + (iVar26 >> 0x10) * 0x100)
                             * 2 + 0x2a4);
                local_90 = local_90 + -1;
                if (local_90 == 0) break;
                iVar19 = iVar19 + iVar10;
                iVar26 = iVar26 + iVar12;
                iVar23 = iVar23 + iVar11;
                iVar9 = iVar9 + 1;
                local_98 = local_98 + 1;
              } while (iVar9 < *(int *)((int)this + 0x27c));
            }
          }
          local_8c = (undefined2 *)((int)local_8c + -1);
          if (local_8c == (undefined2 *)0x0) {
            return;
          }
          local_70 = local_70 + local_2c * 2;
          local_74 = local_74 + iVar1;
          local_a0 = local_a0 + iVar2;
          local_a4 = local_a4 + iVar4;
          local_78 = local_78 + iVar5;
          local_a8 = local_a8 + iVar3;
          local_84 = local_84 + iVar7;
          local_88 = local_88 + iVar6;
          local_7c = (undefined2 *)((int)local_7c + iVar8);
          if ((int)local_8c < 1) {
            return;
          }
        } while( true );
      }
    }
  }
  else if (iVar1 < iVar2) {
    if (iVar1 == iVar3) {
      if ((((*param_4 <= *param_2) && (iVar1 = *(int *)((int)this + 0x278), iVar1 <= iVar9)) &&
          (iVar9 = *(int *)((int)this + 0x280), iVar13 <= iVar9)) &&
         (local_ac = (iVar2 - iVar3 >> 0x10) + 1, 0 < local_ac)) {
        iVar2 = (*param_3 - *param_4) / local_ac;
        iVar3 = (param_3[2] - param_4[2]) / local_ac;
        iVar13 = (param_3[3] - param_4[3]) / local_ac;
        iVar4 = (param_3[4] - param_4[4]) / local_ac;
        iVar5 = (*param_3 - *param_2) / local_ac;
        iVar6 = (param_3[2] - param_2[2]) / local_ac;
        iVar7 = (param_3[3] - param_2[3]) / local_ac;
        iVar8 = (param_3[4] - param_2[4]) / local_ac;
        piVar25 = local_14;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar25 = *param_4;
          param_4 = param_4 + 1;
          piVar25 = piVar25 + 1;
        }
        piVar25 = local_48;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar25 = *param_2;
          param_2 = param_2 + 1;
          piVar25 = piVar25 + 1;
        }
        if (local_14[1] >> 0x10 < iVar1) {
          iVar1 = iVar1 - (local_14[1] >> 0x10);
          local_14[0] = local_14[0] + iVar1 * iVar2;
          local_14[1] = local_14[1] + iVar1 * 0x10000;
          local_14[2] = local_14[2] + iVar1 * iVar3;
          local_14[3] = local_14[3] + iVar1 * iVar13;
          local_4 = local_4 + iVar1 * iVar4;
          local_48[0] = local_48[0] + iVar1 * iVar5;
          local_48[2] = local_48[2] + iVar1 * iVar6;
          local_48[3] = local_48[3] + iVar1 * iVar7;
          local_38 = local_38 + iVar1 * iVar8;
          local_ac = local_ac - iVar1;
        }
        iVar1 = local_14[1] >> 0x10;
        if (iVar9 < local_ac + iVar1) {
          local_ac = iVar9 - iVar1;
        }
        local_70 = local_38;
        local_74 = local_48[3];
        local_78 = local_48[2];
        local_88 = local_48[0];
        local_a4 = local_4;
        local_a8 = local_14[3];
        local_a0 = local_14[2];
        local_84 = local_14[0];
        local_7c = (undefined2 *)(*param_1 + local_2c * iVar1 * 2);
        local_90 = local_ac;
        if (0 < local_ac) {
          do {
            iVar1 = local_84 >> 0x10;
            local_94 = (undefined2 *)(((local_88 >> 0x10) - iVar1) + 1);
            if (((0 < (int)local_94) && (iVar1 <= *(int *)((int)this + 0x27c))) &&
               (iVar9 = *(int *)((int)this + 0x274), iVar9 <= local_88 >> 0x10)) {
              iVar10 = (local_78 - local_a0) / (int)local_94;
              iVar11 = (local_74 - local_a8) / (int)local_94;
              iVar12 = (local_70 - local_a4) / (int)local_94;
              iVar19 = local_a0;
              iVar23 = local_a8;
              iVar26 = local_a4;
              if (iVar1 < iVar9) {
                iVar1 = iVar9 - iVar1;
                iVar23 = iVar1 * iVar11 + local_a8;
                iVar19 = iVar1 * iVar10 + local_a0;
                iVar26 = iVar1 * iVar12 + local_a4;
                local_94 = (undefined2 *)((int)local_94 - iVar1);
                iVar1 = iVar9;
              }
              if ((0 < (int)local_94) && (iVar1 < *(int *)((int)this + 0x27c))) {
                local_8c = (undefined2 *)((int)local_7c + iVar1 * 2);
                do {
                  *local_8c = *(undefined2 *)
                               ((int)this +
                               ((uint)*(byte *)((iVar19 >> 0x10) +
                                               param_5 + (iVar23 >> 7 & 0xfffffe00U)) +
                               (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                  local_94 = (undefined2 *)((int)local_94 + -1);
                  if (local_94 == (undefined2 *)0x0) break;
                  iVar19 = iVar19 + iVar10;
                  iVar26 = iVar26 + iVar12;
                  iVar23 = iVar23 + iVar11;
                  iVar1 = iVar1 + 1;
                  local_8c = local_8c + 1;
                } while (iVar1 < *(int *)((int)this + 0x27c));
              }
            }
            local_90 = local_90 + -1;
            if (local_90 == 0) {
              return;
            }
            local_7c = (undefined2 *)((int)local_7c + local_2c * 2);
            local_84 = local_84 + iVar2;
            local_a0 = local_a0 + iVar3;
            local_a4 = local_a4 + iVar4;
            local_88 = local_88 + iVar5;
            local_a8 = local_a8 + iVar13;
            local_74 = local_74 + iVar7;
            local_78 = local_78 + iVar6;
            local_70 = local_70 + iVar8;
            if (local_90 < 1) {
              return;
            }
          } while( true );
        }
      }
    }
    else if (iVar1 < iVar3) {
      if (iVar2 == iVar3) {
        if ((((*param_4 < *param_3) && (iVar3 = *(int *)((int)this + 0x278), iVar3 <= iVar13)) &&
            (iVar9 = *(int *)((int)this + 0x280), iVar4 <= iVar9)) &&
           (local_ac = (iVar2 - iVar1 >> 0x10) + 1, 0 < local_ac)) {
          iVar1 = (*param_4 - *param_2) / local_ac;
          iVar2 = (param_4[2] - param_2[2]) / local_ac;
          iVar13 = (param_4[3] - param_2[3]) / local_ac;
          iVar4 = (param_4[4] - param_2[4]) / local_ac;
          iVar5 = (*param_3 - *param_2) / local_ac;
          iVar6 = (param_3[2] - param_2[2]) / local_ac;
          iVar7 = (param_3[3] - param_2[3]) / local_ac;
          iVar8 = (param_3[4] - param_2[4]) / local_ac;
          piVar25 = param_2;
          piVar29 = local_14;
          for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
            *piVar29 = *piVar25;
            piVar25 = piVar25 + 1;
            piVar29 = piVar29 + 1;
          }
          piVar25 = local_48;
          for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
            *piVar25 = *param_2;
            param_2 = param_2 + 1;
            piVar25 = piVar25 + 1;
          }
          if (local_14[1] >> 0x10 < iVar3) {
            iVar3 = iVar3 - (local_14[1] >> 0x10);
            local_14[0] = local_14[0] + iVar3 * iVar1;
            local_14[1] = local_14[1] + iVar3 * 0x10000;
            local_14[2] = local_14[2] + iVar3 * iVar2;
            local_14[3] = local_14[3] + iVar3 * iVar13;
            local_4 = local_4 + iVar3 * iVar4;
            local_48[0] = local_48[0] + iVar3 * iVar5;
            local_48[2] = local_48[2] + iVar3 * iVar6;
            local_48[3] = local_48[3] + iVar3 * iVar7;
            local_38 = local_38 + iVar3 * iVar8;
            local_ac = local_ac - iVar3;
          }
          iVar3 = local_14[1] >> 0x10;
          if (iVar9 < local_ac + iVar3) {
            local_ac = iVar9 - iVar3;
          }
          local_70 = local_38;
          local_74 = local_48[3];
          local_78 = local_48[2];
          local_88 = local_48[0];
          local_a4 = local_4;
          local_a8 = local_14[3];
          local_a0 = local_14[2];
          local_84 = local_14[0];
          local_7c = (undefined2 *)(*param_1 + local_2c * iVar3 * 2);
          local_90 = local_ac;
          if (0 < local_ac) {
            do {
              iVar3 = local_84 >> 0x10;
              local_94 = (undefined2 *)(((local_88 >> 0x10) - iVar3) + 1);
              if (((0 < (int)local_94) && (iVar3 <= *(int *)((int)this + 0x27c))) &&
                 (iVar9 = *(int *)((int)this + 0x274), iVar9 <= local_88 >> 0x10)) {
                iVar10 = (local_78 - local_a0) / (int)local_94;
                iVar11 = (local_74 - local_a8) / (int)local_94;
                iVar12 = (local_70 - local_a4) / (int)local_94;
                iVar19 = local_a0;
                iVar23 = local_a8;
                iVar26 = local_a4;
                if (iVar3 < iVar9) {
                  iVar3 = iVar9 - iVar3;
                  iVar23 = iVar3 * iVar11 + local_a8;
                  iVar19 = iVar3 * iVar10 + local_a0;
                  iVar26 = iVar3 * iVar12 + local_a4;
                  local_94 = (undefined2 *)((int)local_94 - iVar3);
                  iVar3 = iVar9;
                }
                if ((0 < (int)local_94) && (iVar3 < *(int *)((int)this + 0x27c))) {
                  local_8c = (undefined2 *)((int)local_7c + iVar3 * 2);
                  do {
                    *local_8c = *(undefined2 *)
                                 ((int)this +
                                 ((uint)*(byte *)((iVar19 >> 0x10) +
                                                 param_5 + (iVar23 >> 7 & 0xfffffe00U)) +
                                 (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                    local_94 = (undefined2 *)((int)local_94 + -1);
                    if (local_94 == (undefined2 *)0x0) break;
                    iVar19 = iVar19 + iVar10;
                    iVar26 = iVar26 + iVar12;
                    iVar23 = iVar23 + iVar11;
                    iVar3 = iVar3 + 1;
                    local_8c = local_8c + 1;
                  } while (iVar3 < *(int *)((int)this + 0x27c));
                }
              }
              local_90 = local_90 + -1;
              if (local_90 == 0) {
                return;
              }
              local_7c = (undefined2 *)((int)local_7c + local_2c * 2);
              local_84 = local_84 + iVar1;
              local_a0 = local_a0 + iVar2;
              local_a4 = local_a4 + iVar4;
              local_88 = local_88 + iVar5;
              local_a8 = local_a8 + iVar13;
              local_74 = local_74 + iVar7;
              local_78 = local_78 + iVar6;
              local_70 = local_70 + iVar8;
              if (local_90 < 1) {
                return;
              }
            } while( true );
          }
        }
      }
      else if (iVar3 < iVar2) {
        iVar2 = iVar2 - iVar1 >> 0x10;
        if (iVar2 < 1) {
          iVar2 = 0x8000;
        }
        else {
          iVar2 = (iVar3 - iVar1) / iVar2;
        }
        local_14[0] = (*param_3 - *param_2 >> 0x10) * iVar2 + *param_2;
        if (*param_4 <= local_14[0]) {
          iVar9 = param_2[2];
          local_14[1] = iVar3;
          local_14[2] = (param_3[2] - iVar9 >> 0x10) * iVar2 + iVar9;
          local_14[3] = (param_3[3] - param_2[3] >> 0x10) * iVar2 + param_2[3];
          local_4 = (param_3[4] - param_2[4] >> 0x10) * iVar2 + param_2[4];
          iVar2 = *(int *)((int)this + 0x278);
          if (((iVar2 <= iVar13) && (iVar13 = *(int *)((int)this + 0x280), iVar4 <= iVar13)) &&
             (local_ac = (iVar3 - iVar1 >> 0x10) + 1, 0 < local_ac)) {
            iVar1 = (*param_4 - *param_2) / local_ac;
            iVar3 = (param_4[2] - iVar9) / local_ac;
            iVar4 = (param_4[3] - param_2[3]) / local_ac;
            iVar5 = (param_4[4] - param_2[4]) / local_ac;
            iVar6 = (local_14[0] - *param_2) / local_ac;
            iVar9 = (local_14[2] - iVar9) / local_ac;
            iVar7 = (local_14[3] - param_2[3]) / local_ac;
            iVar8 = (local_4 - param_2[4]) / local_ac;
            piVar25 = param_2;
            piVar29 = local_48;
            for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
              *piVar29 = *piVar25;
              piVar25 = piVar25 + 1;
              piVar29 = piVar29 + 1;
            }
            piVar25 = local_28;
            for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
              *piVar25 = *param_2;
              param_2 = param_2 + 1;
              piVar25 = piVar25 + 1;
            }
            iVar19 = local_48[1];
            if (local_48[1] >> 0x10 < iVar2) {
              iVar2 = iVar2 - (local_48[1] >> 0x10);
              local_48[0] = local_48[0] + iVar2 * iVar1;
              iVar19 = local_48[1] + iVar2 * 0x10000;
              local_48[2] = local_48[2] + iVar2 * iVar3;
              local_48[3] = local_48[3] + iVar2 * iVar4;
              local_38 = local_38 + iVar2 * iVar5;
              local_28[0] = local_28[0] + iVar2 * iVar6;
              local_28[2] = local_28[2] + iVar2 * iVar9;
              local_28[3] = local_28[3] + iVar2 * iVar7;
              local_18 = local_18 + iVar2 * iVar8;
              local_ac = local_ac - iVar2;
            }
            iVar19 = iVar19 >> 0x10;
            if (iVar13 < local_ac + iVar19) {
              local_ac = iVar13 - iVar19;
            }
            local_74 = local_18;
            local_78 = local_28[3];
            local_88 = local_28[2];
            local_a4 = local_38;
            local_a8 = local_48[3];
            local_84 = *param_1 + local_2c * iVar19 * 2;
            if (0 < local_ac) {
              iVar2 = local_48[2];
              iVar13 = local_28[0];
              iVar19 = local_48[0];
              local_70 = local_ac;
              do {
                local_8c = (undefined2 *)(iVar19 >> 0x10);
                local_94 = (undefined2 *)(((iVar13 >> 0x10) - (int)local_8c) + 1);
                if (((0 < (int)local_94) && ((int)local_8c <= *(int *)((int)this + 0x27c))) &&
                   (*(int *)((int)this + 0x274) <= iVar13 >> 0x10)) {
                  iVar12 = (local_88 - iVar2) / (int)local_94;
                  iVar14 = (local_78 - local_a8) / (int)local_94;
                  iVar15 = (local_74 - local_a4) / (int)local_94;
                  iVar23 = *(int *)((int)this + 0x274);
                  iVar26 = iVar2;
                  iVar10 = local_a8;
                  iVar11 = local_a4;
                  if ((int)local_8c < iVar23) {
                    iVar21 = iVar23 - (int)local_8c;
                    iVar10 = iVar21 * iVar14 + local_a8;
                    iVar26 = iVar21 * iVar12 + iVar2;
                    iVar11 = iVar21 * iVar15 + local_a4;
                    local_94 = (undefined2 *)((int)local_94 - iVar21);
                    local_8c = (undefined2 *)iVar23;
                  }
                  if ((0 < (int)local_94) && ((int)local_8c < *(int *)((int)this + 0x27c))) {
                    local_7c = (undefined2 *)(local_84 + (int)local_8c * 2);
                    do {
                      *local_7c = *(undefined2 *)
                                   ((int)this +
                                   ((uint)*(byte *)((iVar26 >> 0x10) +
                                                   param_5 + (iVar10 >> 7 & 0xfffffe00U)) +
                                   (iVar11 >> 0x10) * 0x100) * 2 + 0x2a4);
                      local_94 = (undefined2 *)((int)local_94 + -1);
                      if (local_94 == (undefined2 *)0x0) break;
                      iVar26 = iVar26 + iVar12;
                      iVar10 = iVar10 + iVar14;
                      iVar11 = iVar11 + iVar15;
                      local_7c = local_7c + 1;
                      local_8c = (undefined2 *)((int)local_8c + 1);
                    } while ((int)local_8c < *(int *)((int)this + 0x27c));
                  }
                }
                local_70 = local_70 + -1;
                if (local_70 == 0) break;
                local_84 = local_84 + local_2c * 2;
                iVar2 = iVar2 + iVar3;
                iVar19 = iVar19 + iVar1;
                local_a8 = local_a8 + iVar4;
                local_a4 = local_a4 + iVar5;
                iVar13 = iVar13 + iVar6;
                local_88 = local_88 + iVar9;
                local_78 = local_78 + iVar7;
                local_74 = local_74 + iVar8;
              } while (0 < local_70);
            }
          }
          iVar1 = *(int *)((int)this + 0x278);
          if (iVar1 <= param_3[1] >> 0x10) {
            iVar2 = *(int *)((int)this + 0x280);
            if ((param_4[1] >> 0x10 <= iVar2) &&
               (local_90 = (param_3[1] - param_4[1] >> 0x10) + 1, 0 < local_90)) {
              iVar9 = (*param_3 - *param_4) / local_90;
              iVar13 = (param_3[2] - param_4[2]) / local_90;
              iVar4 = (param_3[3] - param_4[3]) / local_90;
              iVar3 = param_3[4];
              iVar5 = (iVar3 - param_4[4]) / local_90;
              iVar6 = (*param_3 - local_14[0]) / local_90;
              iVar7 = (param_3[2] - local_14[2]) / local_90;
              iVar8 = (param_3[3] - local_14[3]) / local_90;
              piVar25 = local_48;
              for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
                *piVar25 = *param_4;
                param_4 = param_4 + 1;
                piVar25 = piVar25 + 1;
              }
              piVar25 = local_14;
              piVar29 = local_28;
              for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
                *piVar29 = *piVar25;
                piVar25 = piVar25 + 1;
                piVar29 = piVar29 + 1;
              }
              iVar3 = (iVar3 - local_4) / local_90;
              if (local_48[1] >> 0x10 < iVar1) {
                iVar1 = iVar1 - (local_48[1] >> 0x10);
                local_48[0] = local_48[0] + iVar1 * iVar9;
                local_48[1] = local_48[1] + iVar1 * 0x10000;
                local_48[2] = local_48[2] + iVar1 * iVar13;
                local_48[3] = local_48[3] + iVar1 * iVar4;
                local_38 = local_38 + iVar1 * iVar5;
                local_28[0] = iVar1 * iVar6 + local_14[0];
                local_28[2] = local_28[2] + iVar1 * iVar7;
                local_28[3] = local_28[3] + iVar1 * iVar8;
                local_18 = local_18 + iVar1 * iVar3;
                local_90 = local_90 - iVar1;
              }
              iVar1 = local_48[1] >> 0x10;
              if (iVar2 < local_90 + iVar1) {
                local_90 = iVar2 - iVar1;
              }
              local_a8 = local_48[3];
              local_70 = local_18;
              local_74 = local_28[3];
              local_78 = local_28[2];
              local_a4 = local_38;
              local_a0 = local_48[2];
              local_84 = local_48[0];
              local_7c = (undefined2 *)(*param_1 + local_2c * iVar1 * 2);
              local_88 = local_28[0];
              if (0 < local_90) {
                do {
                  iVar1 = local_84 >> 0x10;
                  local_94 = (undefined2 *)(((local_88 >> 0x10) - iVar1) + 1);
                  if (((0 < (int)local_94) && (iVar1 <= *(int *)((int)this + 0x27c))) &&
                     (iVar2 = *(int *)((int)this + 0x274), iVar2 <= local_88 >> 0x10)) {
                    iVar10 = (local_78 - local_a0) / (int)local_94;
                    iVar11 = (local_74 - local_a8) / (int)local_94;
                    iVar12 = (local_70 - local_a4) / (int)local_94;
                    iVar19 = local_a0;
                    iVar23 = local_a8;
                    iVar26 = local_a4;
                    if (iVar1 < iVar2) {
                      iVar1 = iVar2 - iVar1;
                      iVar23 = iVar1 * iVar11 + local_a8;
                      iVar19 = iVar1 * iVar10 + local_a0;
                      iVar26 = iVar1 * iVar12 + local_a4;
                      local_94 = (undefined2 *)((int)local_94 - iVar1);
                      iVar1 = iVar2;
                    }
                    if ((0 < (int)local_94) && (iVar1 < *(int *)((int)this + 0x27c))) {
                      local_8c = (undefined2 *)((int)local_7c + iVar1 * 2);
                      do {
                        *local_8c = *(undefined2 *)
                                     ((int)this +
                                     ((uint)*(byte *)((iVar19 >> 0x10) +
                                                     param_5 + (iVar23 >> 7 & 0xfffffe00U)) +
                                     (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                        local_94 = (undefined2 *)((int)local_94 + -1);
                        if (local_94 == (undefined2 *)0x0) break;
                        iVar19 = iVar19 + iVar10;
                        iVar26 = iVar26 + iVar12;
                        iVar23 = iVar23 + iVar11;
                        iVar1 = iVar1 + 1;
                        local_8c = local_8c + 1;
                      } while (iVar1 < *(int *)((int)this + 0x27c));
                    }
                  }
                  local_90 = local_90 + -1;
                  if (local_90 == 0) {
                    return;
                  }
                  local_7c = (undefined2 *)((int)local_7c + local_2c * 2);
                  local_84 = local_84 + iVar9;
                  local_a0 = local_a0 + iVar13;
                  local_a4 = local_a4 + iVar5;
                  local_88 = local_88 + iVar6;
                  local_a8 = local_a8 + iVar4;
                  local_74 = local_74 + iVar8;
                  local_78 = local_78 + iVar7;
                  local_70 = local_70 + iVar3;
                  if (local_90 < 1) {
                    return;
                  }
                } while( true );
              }
            }
          }
        }
      }
      else {
        iVar3 = iVar3 - iVar1 >> 0x10;
        if (iVar3 < 1) {
          iVar3 = 0x8000;
        }
        else {
          iVar3 = (iVar2 - iVar1) / iVar3;
        }
        local_14[0] = (*param_4 - *param_2 >> 0x10) * iVar3 + *param_2;
        if (local_14[0] <= *param_3) {
          local_14[1] = iVar2;
          iVar13 = param_2[2];
          local_14[2] = (param_4[2] - iVar13 >> 0x10) * iVar3 + iVar13;
          iVar5 = param_2[3];
          local_14[3] = (param_4[3] - iVar5 >> 0x10) * iVar3 + iVar5;
          local_4 = (param_4[4] - param_2[4] >> 0x10) * iVar3 + param_2[4];
          iVar3 = *(int *)((int)this + 0x278);
          if (((iVar3 <= iVar9) && (iVar6 = *(int *)((int)this + 0x280), iVar4 <= iVar6)) &&
             (local_ac = (iVar2 - iVar1 >> 0x10) + 1, 0 < local_ac)) {
            iVar1 = (local_14[0] - *param_2) / local_ac;
            iVar2 = (local_14[2] - iVar13) / local_ac;
            iVar4 = (local_14[3] - iVar5) / local_ac;
            iVar7 = (local_4 - param_2[4]) / local_ac;
            iVar8 = (*param_3 - *param_2) / local_ac;
            iVar13 = (param_3[2] - iVar13) / local_ac;
            iVar5 = (param_3[3] - iVar5) / local_ac;
            iVar19 = (param_3[4] - param_2[4]) / local_ac;
            piVar25 = param_2;
            piVar29 = local_48;
            for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
              *piVar29 = *piVar25;
              piVar25 = piVar25 + 1;
              piVar29 = piVar29 + 1;
            }
            piVar25 = local_28;
            for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
              *piVar25 = *param_2;
              param_2 = param_2 + 1;
              piVar25 = piVar25 + 1;
            }
            iVar23 = local_48[1];
            if (local_48[1] >> 0x10 < iVar3) {
              iVar3 = iVar3 - (local_48[1] >> 0x10);
              local_48[0] = local_48[0] + iVar3 * iVar1;
              iVar23 = local_48[1] + iVar3 * 0x10000;
              local_48[2] = local_48[2] + iVar3 * iVar2;
              local_48[3] = local_48[3] + iVar3 * iVar4;
              local_38 = local_38 + iVar3 * iVar7;
              local_28[0] = local_28[0] + iVar3 * iVar8;
              local_28[2] = local_28[2] + iVar3 * iVar13;
              local_28[3] = local_28[3] + iVar3 * iVar5;
              local_18 = local_18 + iVar3 * iVar19;
              local_ac = local_ac - iVar3;
            }
            iVar23 = iVar23 >> 0x10;
            if (iVar6 < local_ac + iVar23) {
              local_ac = iVar6 - iVar23;
            }
            local_74 = local_18;
            local_78 = local_28[3];
            local_88 = local_28[2];
            local_98 = (undefined2 *)local_38;
            local_a8 = local_48[3];
            local_84 = *param_1 + local_2c * iVar23 * 2;
            if (0 < local_ac) {
              iVar3 = local_48[2];
              iVar6 = local_28[0];
              iVar23 = local_48[0];
              local_70 = local_ac;
              do {
                local_8c = (undefined2 *)(iVar23 >> 0x10);
                local_94 = (undefined2 *)(((iVar6 >> 0x10) - (int)local_8c) + 1);
                if (((0 < (int)local_94) && ((int)local_8c <= *(int *)((int)this + 0x27c))) &&
                   (*(int *)((int)this + 0x274) <= iVar6 >> 0x10)) {
                  iVar12 = (local_88 - iVar3) / (int)local_94;
                  iVar14 = (local_78 - local_a8) / (int)local_94;
                  iVar15 = (local_74 - (int)local_98) / (int)local_94;
                  iVar26 = *(int *)((int)this + 0x274);
                  iVar10 = iVar3;
                  iVar11 = local_a8;
                  puVar27 = local_98;
                  if ((int)local_8c < iVar26) {
                    iVar21 = iVar26 - (int)local_8c;
                    iVar11 = iVar21 * iVar14 + local_a8;
                    iVar10 = iVar21 * iVar12 + iVar3;
                    puVar27 = (undefined2 *)(iVar21 * iVar15 + (int)local_98);
                    local_94 = (undefined2 *)((int)local_94 - iVar21);
                    local_8c = (undefined2 *)iVar26;
                  }
                  if ((0 < (int)local_94) && ((int)local_8c < *(int *)((int)this + 0x27c))) {
                    local_7c = (undefined2 *)(local_84 + (int)local_8c * 2);
                    do {
                      *local_7c = *(undefined2 *)
                                   ((int)this +
                                   ((uint)*(byte *)((iVar11 >> 7 & 0xfffffe00U) +
                                                   param_5 + (iVar10 >> 0x10)) +
                                   ((int)puVar27 >> 0x10) * 0x100) * 2 + 0x2a4);
                      local_94 = (undefined2 *)((int)local_94 + -1);
                      if (local_94 == (undefined2 *)0x0) break;
                      iVar10 = iVar10 + iVar12;
                      iVar11 = iVar11 + iVar14;
                      puVar27 = (undefined2 *)((int)puVar27 + iVar15);
                      local_7c = local_7c + 1;
                      local_8c = (undefined2 *)((int)local_8c + 1);
                    } while ((int)local_8c < *(int *)((int)this + 0x27c));
                  }
                }
                local_70 = local_70 + -1;
                if (local_70 == 0) break;
                local_84 = local_84 + local_2c * 2;
                iVar3 = iVar3 + iVar2;
                iVar23 = iVar23 + iVar1;
                local_a8 = local_a8 + iVar4;
                local_98 = (undefined2 *)((int)local_98 + iVar7);
                iVar6 = iVar6 + iVar8;
                local_88 = local_88 + iVar13;
                local_78 = local_78 + iVar5;
                local_74 = local_74 + iVar19;
              } while (0 < local_70);
            }
          }
          iVar1 = *(int *)((int)this + 0x278);
          if (((iVar1 <= param_4[1] >> 0x10) &&
              (iVar2 = *(int *)((int)this + 0x280), iVar9 <= iVar2)) &&
             (local_90 = (param_4[1] - local_14[1] >> 0x10) + 1, 0 < local_90)) {
            iVar3 = (*param_4 - local_14[0]) / local_90;
            iVar13 = (param_4[2] - local_14[2]) / local_90;
            iVar4 = (param_4[3] - local_14[3]) / local_90;
            iVar5 = (param_4[4] - local_4) / local_90;
            iVar6 = (*param_4 - *param_3) / local_90;
            iVar7 = (param_4[2] - param_3[2]) / local_90;
            iVar8 = (param_4[3] - param_3[3]) / local_90;
            iVar19 = (param_4[4] - param_3[4]) / local_90;
            piVar25 = local_14;
            piVar29 = local_48;
            for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
              *piVar29 = *piVar25;
              piVar25 = piVar25 + 1;
              piVar29 = piVar29 + 1;
            }
            piVar25 = local_28;
            for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
              *piVar25 = *param_3;
              param_3 = param_3 + 1;
              piVar25 = piVar25 + 1;
            }
            if (iVar9 < iVar1) {
              iVar1 = iVar1 - iVar9;
              local_48[0] = iVar1 * iVar3 + local_14[0];
              local_48[1] = local_48[1] + iVar1 * 0x10000;
              local_48[2] = local_48[2] + iVar1 * iVar13;
              local_48[3] = local_48[3] + iVar1 * iVar4;
              local_38 = local_38 + iVar1 * iVar5;
              local_28[0] = local_28[0] + iVar1 * iVar6;
              local_28[2] = local_28[2] + iVar1 * iVar7;
              local_28[3] = local_28[3] + iVar1 * iVar8;
              local_18 = local_18 + iVar1 * iVar19;
              local_90 = local_90 - iVar1;
            }
            iVar1 = local_48[1] >> 0x10;
            if (iVar2 < local_90 + iVar1) {
              local_90 = iVar2 - iVar1;
            }
            local_7c = (undefined2 *)(*param_1 + local_2c * iVar1 * 2);
            local_70 = local_18;
            local_74 = local_28[3];
            local_78 = local_28[2];
            local_88 = local_28[0];
            local_a4 = local_38;
            local_a8 = local_48[3];
            local_a0 = local_48[2];
            local_84 = local_48[0];
            if (0 < local_90) {
              do {
                iVar1 = local_84 >> 0x10;
                local_94 = (undefined2 *)(((local_88 >> 0x10) - iVar1) + 1);
                if (((0 < (int)local_94) && (iVar1 <= *(int *)((int)this + 0x27c))) &&
                   (iVar2 = *(int *)((int)this + 0x274), iVar2 <= local_88 >> 0x10)) {
                  iVar10 = (local_78 - local_a0) / (int)local_94;
                  iVar11 = (local_74 - local_a8) / (int)local_94;
                  iVar12 = (local_70 - local_a4) / (int)local_94;
                  iVar9 = local_a0;
                  iVar23 = local_a8;
                  iVar26 = local_a4;
                  if (iVar1 < iVar2) {
                    iVar1 = iVar2 - iVar1;
                    iVar23 = iVar1 * iVar11 + local_a8;
                    iVar9 = iVar1 * iVar10 + local_a0;
                    iVar26 = iVar1 * iVar12 + local_a4;
                    local_94 = (undefined2 *)((int)local_94 - iVar1);
                    iVar1 = iVar2;
                  }
                  if ((0 < (int)local_94) && (iVar1 < *(int *)((int)this + 0x27c))) {
                    local_8c = (undefined2 *)((int)local_7c + iVar1 * 2);
                    do {
                      *local_8c = *(undefined2 *)
                                   ((int)this +
                                   ((uint)*(byte *)((iVar23 >> 7 & 0xfffffe00U) +
                                                   param_5 + (iVar9 >> 0x10)) +
                                   (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                      local_94 = (undefined2 *)((int)local_94 + -1);
                      if (local_94 == (undefined2 *)0x0) break;
                      iVar9 = iVar9 + iVar10;
                      iVar26 = iVar26 + iVar12;
                      iVar23 = iVar23 + iVar11;
                      iVar1 = iVar1 + 1;
                      local_8c = local_8c + 1;
                    } while (iVar1 < *(int *)((int)this + 0x27c));
                  }
                }
                local_90 = local_90 + -1;
                if (local_90 == 0) {
                  return;
                }
                local_7c = (undefined2 *)((int)local_7c + local_2c * 2);
                local_84 = local_84 + iVar3;
                local_a0 = local_a0 + iVar13;
                local_a4 = local_a4 + iVar5;
                local_88 = local_88 + iVar6;
                local_a8 = local_a8 + iVar4;
                local_74 = local_74 + iVar8;
                local_78 = local_78 + iVar7;
                local_70 = local_70 + iVar19;
                if (local_90 < 1) {
                  return;
                }
              } while( true );
            }
          }
        }
      }
    }
    else {
      iVar2 = iVar2 - iVar3 >> 0x10;
      if (iVar2 < 1) {
        iVar2 = 0x8000;
      }
      else {
        iVar2 = (iVar1 - iVar3) / iVar2;
      }
      iVar9 = *param_4;
      local_14[0] = (*param_3 - iVar9 >> 0x10) * iVar2 + iVar9;
      if (local_14[0] <= *param_2) {
        local_14[1] = iVar1;
        iVar5 = param_4[2];
        iVar6 = param_4[3];
        local_14[2] = (param_3[2] - iVar5 >> 0x10) * iVar2 + iVar5;
        local_14[3] = (param_3[3] - iVar6 >> 0x10) * iVar2 + iVar6;
        iVar7 = param_4[4];
        local_4 = (param_3[4] - iVar7 >> 0x10) * iVar2 + iVar7;
        iVar2 = *(int *)((int)this + 0x278);
        if (((iVar2 <= iVar4) && (iVar8 = *(int *)((int)this + 0x280), iVar13 <= iVar8)) &&
           (local_ac = (iVar1 - iVar3 >> 0x10) + 1, 0 < local_ac)) {
          iVar1 = (local_14[0] - iVar9) / local_ac;
          iVar3 = (local_14[2] - iVar5) / local_ac;
          iVar13 = (local_14[3] - iVar6) / local_ac;
          iVar19 = (local_4 - iVar7) / local_ac;
          iVar9 = (*param_2 - iVar9) / local_ac;
          iVar5 = (param_2[2] - iVar5) / local_ac;
          iVar6 = (param_2[3] - iVar6) / local_ac;
          iVar7 = (param_2[4] - iVar7) / local_ac;
          piVar25 = param_4;
          piVar29 = local_48;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar29 = *piVar25;
            piVar25 = piVar25 + 1;
            piVar29 = piVar29 + 1;
          }
          piVar25 = local_28;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar25 = *param_4;
            param_4 = param_4 + 1;
            piVar25 = piVar25 + 1;
          }
          iVar23 = local_48[1];
          if (local_48[1] >> 0x10 < iVar2) {
            iVar2 = iVar2 - (local_48[1] >> 0x10);
            local_48[0] = local_48[0] + iVar2 * iVar1;
            iVar23 = local_48[1] + iVar2 * 0x10000;
            local_48[2] = local_48[2] + iVar2 * iVar3;
            local_48[3] = local_48[3] + iVar2 * iVar13;
            local_38 = local_38 + iVar2 * iVar19;
            local_28[0] = local_28[0] + iVar2 * iVar9;
            local_28[2] = local_28[2] + iVar2 * iVar5;
            local_28[3] = local_28[3] + iVar2 * iVar6;
            local_18 = local_18 + iVar2 * iVar7;
            local_ac = local_ac - iVar2;
          }
          iVar23 = iVar23 >> 0x10;
          if (iVar8 < local_ac + iVar23) {
            local_ac = iVar8 - iVar23;
          }
          local_70 = local_18;
          local_74 = local_28[3];
          local_78 = local_28[2];
          local_88 = local_28[0];
          local_98 = (undefined2 *)local_48[2];
          local_7c = (undefined2 *)(*param_1 + local_2c * iVar23 * 2);
          if (0 < local_ac) {
            iVar2 = local_48[0];
            iVar8 = local_48[3];
            iVar23 = local_38;
            local_80 = local_ac;
            do {
              local_94 = (undefined2 *)(iVar2 >> 0x10);
              local_a8 = ((local_88 >> 0x10) - (int)local_94) + 1;
              if (((0 < local_a8) && ((int)local_94 <= *(int *)((int)this + 0x27c))) &&
                 (*(int *)((int)this + 0x274) <= local_88 >> 0x10)) {
                iVar12 = (local_78 - (int)local_98) / local_a8;
                iVar14 = (local_74 - iVar8) / local_a8;
                iVar15 = (local_70 - iVar23) / local_a8;
                iVar26 = *(int *)((int)this + 0x274);
                puVar27 = local_98;
                iVar10 = iVar8;
                iVar11 = iVar23;
                if ((int)local_94 < iVar26) {
                  iVar21 = iVar26 - (int)local_94;
                  iVar10 = iVar21 * iVar14 + iVar8;
                  puVar27 = (undefined2 *)(iVar21 * iVar12 + (int)local_98);
                  iVar11 = iVar21 * iVar15 + iVar23;
                  local_a8 = local_a8 - iVar21;
                  local_94 = (undefined2 *)iVar26;
                }
                if ((0 < local_a8) && ((int)local_94 < *(int *)((int)this + 0x27c))) {
                  local_8c = (undefined2 *)((int)local_7c + (int)local_94 * 2);
                  do {
                    *local_8c = *(undefined2 *)
                                 ((int)this +
                                 ((uint)*(byte *)((iVar10 >> 7 & 0xfffffe00U) +
                                                 param_5 + ((int)puVar27 >> 0x10)) +
                                 (iVar11 >> 0x10) * 0x100) * 2 + 0x2a4);
                    local_a8 = local_a8 + -1;
                    if (local_a8 == 0) break;
                    puVar27 = (undefined2 *)((int)puVar27 + iVar12);
                    iVar10 = iVar10 + iVar14;
                    iVar11 = iVar11 + iVar15;
                    local_8c = local_8c + 1;
                    local_94 = (undefined2 *)((int)local_94 + 1);
                  } while ((int)local_94 < *(int *)((int)this + 0x27c));
                }
              }
              local_80 = local_80 + -1;
              if (local_80 == 0) break;
              local_7c = (undefined2 *)((int)local_7c + local_2c * 2);
              local_98 = (undefined2 *)((int)local_98 + iVar3);
              iVar2 = iVar2 + iVar1;
              iVar23 = iVar23 + iVar19;
              iVar8 = iVar8 + iVar13;
              local_88 = local_88 + iVar9;
              local_78 = local_78 + iVar5;
              local_74 = local_74 + iVar6;
              local_70 = local_70 + iVar7;
            } while (0 < local_80);
          }
        }
        iVar1 = *(int *)((int)this + 0x278);
        if (((iVar1 <= param_3[1] >> 0x10) && (iVar2 = *(int *)((int)this + 0x280), iVar4 <= iVar2))
           && (local_ac = (param_3[1] - local_14[1] >> 0x10) + 1, 0 < local_ac)) {
          iVar3 = (*param_3 - local_14[0]) / local_ac;
          iVar9 = (param_3[2] - local_14[2]) / local_ac;
          iVar13 = (param_3[3] - local_14[3]) / local_ac;
          iVar5 = (param_3[4] - local_4) / local_ac;
          iVar6 = (*param_3 - *param_2) / local_ac;
          iVar7 = (param_3[2] - param_2[2]) / local_ac;
          iVar8 = (param_3[3] - param_2[3]) / local_ac;
          iVar19 = (param_3[4] - param_2[4]) / local_ac;
          piVar25 = local_14;
          piVar29 = local_48;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar29 = *piVar25;
            piVar25 = piVar25 + 1;
            piVar29 = piVar29 + 1;
          }
          piVar25 = local_28;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar25 = *param_2;
            param_2 = param_2 + 1;
            piVar25 = piVar25 + 1;
          }
          if (iVar4 < iVar1) {
            iVar1 = iVar1 - iVar4;
            local_48[1] = local_48[1] + iVar1 * 0x10000;
            local_48[2] = local_48[2] + iVar1 * iVar9;
            local_48[0] = iVar1 * iVar3 + local_14[0];
            local_48[3] = local_48[3] + iVar1 * iVar13;
            local_38 = local_38 + iVar1 * iVar5;
            local_28[0] = local_28[0] + iVar1 * iVar6;
            local_28[2] = local_28[2] + iVar1 * iVar7;
            local_28[3] = local_28[3] + iVar1 * iVar8;
            local_18 = local_18 + iVar1 * iVar19;
            local_ac = local_ac - iVar1;
          }
          iVar1 = local_48[1] >> 0x10;
          if (iVar2 < local_ac + iVar1) {
            local_ac = iVar2 - iVar1;
          }
          local_8c = (undefined2 *)(*param_1 + local_2c * iVar1 * 2);
          local_74 = local_18;
          local_78 = local_28[3];
          local_88 = local_28[2];
          local_84 = local_28[0];
          local_a4 = local_38;
          local_a8 = local_48[3];
          local_90 = local_48[2];
          local_7c = (undefined2 *)local_48[0];
          local_70 = local_ac;
          if (0 < local_ac) {
            do {
              iVar1 = (int)local_7c >> 0x10;
              local_80 = ((local_84 >> 0x10) - iVar1) + 1;
              if (((0 < local_80) && (iVar1 <= *(int *)((int)this + 0x27c))) &&
                 (iVar2 = *(int *)((int)this + 0x274), iVar2 <= local_84 >> 0x10)) {
                iVar10 = (local_88 - local_90) / local_80;
                iVar11 = (local_78 - local_a8) / local_80;
                iVar12 = (local_74 - local_a4) / local_80;
                iVar4 = local_90;
                iVar23 = local_a8;
                iVar26 = local_a4;
                if (iVar1 < iVar2) {
                  iVar1 = iVar2 - iVar1;
                  iVar23 = iVar1 * iVar11 + local_a8;
                  iVar4 = iVar1 * iVar10 + local_90;
                  iVar26 = iVar1 * iVar12 + local_a4;
                  local_80 = local_80 - iVar1;
                  iVar1 = iVar2;
                }
                if ((0 < local_80) && (iVar1 < *(int *)((int)this + 0x27c))) {
                  local_94 = (undefined2 *)((int)local_8c + iVar1 * 2);
                  do {
                    *local_94 = *(undefined2 *)
                                 ((int)this +
                                 ((uint)*(byte *)((iVar23 >> 7 & 0xfffffe00U) +
                                                 param_5 + (iVar4 >> 0x10)) +
                                 (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                    local_80 = local_80 + -1;
                    if (local_80 == 0) break;
                    iVar4 = iVar4 + iVar10;
                    iVar26 = iVar26 + iVar12;
                    iVar23 = iVar23 + iVar11;
                    iVar1 = iVar1 + 1;
                    local_94 = local_94 + 1;
                  } while (iVar1 < *(int *)((int)this + 0x27c));
                }
              }
              local_70 = local_70 + -1;
              if (local_70 == 0) {
                return;
              }
              local_8c = (undefined2 *)((int)local_8c + local_2c * 2);
              local_7c = (undefined2 *)((int)local_7c + iVar3);
              local_90 = local_90 + iVar9;
              local_a4 = local_a4 + iVar5;
              local_84 = local_84 + iVar6;
              local_a8 = local_a8 + iVar13;
              local_78 = local_78 + iVar8;
              local_88 = local_88 + iVar7;
              local_74 = local_74 + iVar19;
              if (local_70 < 1) {
                return;
              }
            } while( true );
          }
        }
      }
    }
  }
  else if (iVar1 == iVar3) {
    if (((*param_2 <= *param_4) && (iVar1 = *(int *)((int)this + 0x278), iVar1 <= iVar4)) &&
       ((iVar13 = *(int *)((int)this + 0x280), iVar9 <= iVar13 &&
        (local_ac = (iVar3 - iVar2 >> 0x10) + 1, 0 < local_ac)))) {
      iVar2 = (*param_2 - *param_3) / local_ac;
      iVar3 = (param_2[2] - param_3[2]) / local_ac;
      iVar9 = (param_2[3] - param_3[3]) / local_ac;
      iVar4 = (param_2[4] - param_3[4]) / local_ac;
      iVar5 = (*param_4 - *param_3) / local_ac;
      iVar6 = (param_4[2] - param_3[2]) / local_ac;
      iVar7 = (param_4[3] - param_3[3]) / local_ac;
      iVar8 = (param_4[4] - param_3[4]) / local_ac;
      piVar25 = param_3;
      piVar29 = local_48;
      for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
        *piVar29 = *piVar25;
        piVar25 = piVar25 + 1;
        piVar29 = piVar29 + 1;
      }
      piVar25 = local_28;
      for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
        *piVar25 = *param_3;
        param_3 = param_3 + 1;
        piVar25 = piVar25 + 1;
      }
      if (local_48[1] >> 0x10 < iVar1) {
        iVar1 = iVar1 - (local_48[1] >> 0x10);
        local_48[0] = local_48[0] + iVar1 * iVar2;
        local_48[1] = local_48[1] + iVar1 * 0x10000;
        local_48[2] = local_48[2] + iVar1 * iVar3;
        local_48[3] = local_48[3] + iVar1 * iVar9;
        local_38 = local_38 + iVar1 * iVar4;
        local_28[0] = local_28[0] + iVar1 * iVar5;
        local_28[2] = local_28[2] + iVar1 * iVar6;
        local_28[3] = local_28[3] + iVar1 * iVar7;
        local_18 = local_18 + iVar1 * iVar8;
        local_ac = local_ac - iVar1;
      }
      iVar1 = local_48[1] >> 0x10;
      if (iVar13 < local_ac + iVar1) {
        local_ac = iVar13 - iVar1;
      }
      local_74 = local_18;
      local_78 = local_28[3];
      local_88 = local_28[2];
      local_84 = local_28[0];
      local_a4 = local_38;
      local_a8 = local_48[3];
      local_90 = local_48[2];
      local_7c = (undefined2 *)local_48[0];
      local_8c = (undefined2 *)(*param_1 + local_2c * iVar1 * 2);
      local_70 = local_ac;
      if (0 < local_ac) {
        do {
          iVar1 = (int)local_7c >> 0x10;
          local_80 = ((local_84 >> 0x10) - iVar1) + 1;
          if (((0 < local_80) && (iVar1 <= *(int *)((int)this + 0x27c))) &&
             (iVar13 = *(int *)((int)this + 0x274), iVar13 <= local_84 >> 0x10)) {
            iVar10 = (local_88 - local_90) / local_80;
            iVar11 = (local_78 - local_a8) / local_80;
            iVar12 = (local_74 - local_a4) / local_80;
            iVar19 = local_90;
            iVar23 = local_a8;
            iVar26 = local_a4;
            if (iVar1 < iVar13) {
              iVar1 = iVar13 - iVar1;
              iVar23 = iVar1 * iVar11 + local_a8;
              iVar19 = iVar1 * iVar10 + local_90;
              iVar26 = iVar1 * iVar12 + local_a4;
              local_80 = local_80 - iVar1;
              iVar1 = iVar13;
            }
            if ((0 < local_80) && (iVar1 < *(int *)((int)this + 0x27c))) {
              local_94 = (undefined2 *)((int)local_8c + iVar1 * 2);
              do {
                *local_94 = *(undefined2 *)
                             ((int)this +
                             ((uint)*(byte *)((iVar19 >> 0x10) +
                                             param_5 + (iVar23 >> 7 & 0xfffffe00U)) +
                             (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                local_80 = local_80 + -1;
                if (local_80 == 0) break;
                iVar19 = iVar19 + iVar10;
                iVar26 = iVar26 + iVar12;
                iVar23 = iVar23 + iVar11;
                iVar1 = iVar1 + 1;
                local_94 = local_94 + 1;
              } while (iVar1 < *(int *)((int)this + 0x27c));
            }
          }
          local_70 = local_70 + -1;
          if (local_70 == 0) {
            return;
          }
          local_8c = (undefined2 *)((int)local_8c + local_2c * 2);
          local_7c = (undefined2 *)((int)local_7c + iVar2);
          local_90 = local_90 + iVar3;
          local_a4 = local_a4 + iVar4;
          local_84 = local_84 + iVar5;
          local_a8 = local_a8 + iVar9;
          local_78 = local_78 + iVar7;
          local_88 = local_88 + iVar6;
          local_74 = local_74 + iVar8;
          if (local_70 < 1) {
            return;
          }
        } while( true );
      }
    }
  }
  else if (iVar3 < iVar1) {
    if (iVar2 == iVar3) {
      if (((*param_3 <= *param_4) && (iVar3 = *(int *)((int)this + 0x278), iVar3 <= iVar4)) &&
         ((iVar13 = *(int *)((int)this + 0x280), iVar9 <= iVar13 &&
          (local_ac = (iVar1 - iVar2 >> 0x10) + 1, 0 < local_ac)))) {
        iVar1 = (*param_2 - *param_3) / local_ac;
        iVar2 = (param_2[2] - param_3[2]) / local_ac;
        iVar9 = (param_2[3] - param_3[3]) / local_ac;
        iVar4 = (param_2[4] - param_3[4]) / local_ac;
        iVar5 = (*param_2 - *param_4) / local_ac;
        iVar6 = (param_2[2] - param_4[2]) / local_ac;
        iVar7 = (param_2[3] - param_4[3]) / local_ac;
        iVar8 = (param_2[4] - param_4[4]) / local_ac;
        piVar25 = local_48;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar25 = *param_3;
          param_3 = param_3 + 1;
          piVar25 = piVar25 + 1;
        }
        piVar25 = local_28;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar25 = *param_4;
          param_4 = param_4 + 1;
          piVar25 = piVar25 + 1;
        }
        if (local_48[1] >> 0x10 < iVar3) {
          iVar3 = iVar3 - (local_48[1] >> 0x10);
          local_48[0] = local_48[0] + iVar3 * iVar1;
          local_48[1] = local_48[1] + iVar3 * 0x10000;
          local_48[2] = local_48[2] + iVar3 * iVar2;
          local_48[3] = local_48[3] + iVar3 * iVar9;
          local_38 = local_38 + iVar3 * iVar4;
          local_28[0] = local_28[0] + iVar3 * iVar5;
          local_28[2] = local_28[2] + iVar3 * iVar6;
          local_28[3] = local_28[3] + iVar3 * iVar7;
          local_18 = local_18 + iVar3 * iVar8;
          local_ac = local_ac - iVar3;
        }
        iVar3 = local_48[1] >> 0x10;
        if (iVar13 < local_ac + iVar3) {
          local_ac = iVar13 - iVar3;
        }
        local_74 = local_18;
        local_78 = local_28[3];
        local_88 = local_28[2];
        local_84 = local_28[0];
        local_a4 = local_38;
        local_a8 = local_48[3];
        local_90 = local_48[2];
        local_7c = (undefined2 *)local_48[0];
        local_8c = (undefined2 *)(*param_1 + local_2c * iVar3 * 2);
        local_70 = local_ac;
        if (0 < local_ac) {
          do {
            iVar3 = (int)local_7c >> 0x10;
            local_80 = ((local_84 >> 0x10) - iVar3) + 1;
            if (((0 < local_80) && (iVar3 <= *(int *)((int)this + 0x27c))) &&
               (iVar13 = *(int *)((int)this + 0x274), iVar13 <= local_84 >> 0x10)) {
              iVar10 = (local_88 - local_90) / local_80;
              iVar11 = (local_78 - local_a8) / local_80;
              iVar12 = (local_74 - local_a4) / local_80;
              iVar19 = local_90;
              iVar23 = local_a8;
              iVar26 = local_a4;
              if (iVar3 < iVar13) {
                iVar3 = iVar13 - iVar3;
                iVar23 = iVar3 * iVar11 + local_a8;
                iVar19 = iVar3 * iVar10 + local_90;
                iVar26 = iVar3 * iVar12 + local_a4;
                local_80 = local_80 - iVar3;
                iVar3 = iVar13;
              }
              if ((0 < local_80) && (iVar3 < *(int *)((int)this + 0x27c))) {
                local_94 = (undefined2 *)((int)local_8c + iVar3 * 2);
                do {
                  *local_94 = *(undefined2 *)
                               ((int)this +
                               ((uint)*(byte *)((iVar19 >> 0x10) +
                                               param_5 + (iVar23 >> 7 & 0xfffffe00U)) +
                               (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                  local_80 = local_80 + -1;
                  if (local_80 == 0) break;
                  iVar19 = iVar19 + iVar10;
                  iVar26 = iVar26 + iVar12;
                  iVar23 = iVar23 + iVar11;
                  iVar3 = iVar3 + 1;
                  local_94 = local_94 + 1;
                } while (iVar3 < *(int *)((int)this + 0x27c));
              }
            }
            local_70 = local_70 + -1;
            if (local_70 == 0) {
              return;
            }
            local_8c = (undefined2 *)((int)local_8c + local_2c * 2);
            local_7c = (undefined2 *)((int)local_7c + iVar1);
            local_90 = local_90 + iVar2;
            local_a4 = local_a4 + iVar4;
            local_84 = local_84 + iVar5;
            local_a8 = local_a8 + iVar9;
            local_78 = local_78 + iVar7;
            local_88 = local_88 + iVar6;
            local_74 = local_74 + iVar8;
            if (local_70 < 1) {
              return;
            }
          } while( true );
        }
      }
    }
    else if (iVar2 < iVar3) {
      iVar1 = iVar1 - iVar2 >> 0x10;
      if (iVar1 < 1) {
        iVar1 = 0x8000;
      }
      else {
        iVar1 = (iVar3 - iVar2) / iVar1;
      }
      local_14[0] = (*param_2 - *param_3 >> 0x10) * iVar1 + *param_3;
      if (local_14[0] <= *param_4) {
        iVar4 = param_3[2];
        local_14[1] = iVar3;
        local_14[2] = (param_2[2] - iVar4 >> 0x10) * iVar1 + iVar4;
        local_14[3] = (param_2[3] - param_3[3] >> 0x10) * iVar1 + param_3[3];
        local_4 = (param_2[4] - param_3[4] >> 0x10) * iVar1 + param_3[4];
        iVar1 = *(int *)((int)this + 0x278);
        if (((iVar1 <= iVar13) && (iVar5 = *(int *)((int)this + 0x280), iVar9 <= iVar5)) &&
           (local_ac = (iVar3 - iVar2 >> 0x10) + 1, 0 < local_ac)) {
          iVar2 = (local_14[0] - *param_3) / local_ac;
          iVar3 = (local_14[2] - iVar4) / local_ac;
          iVar9 = (local_14[3] - param_3[3]) / local_ac;
          iVar6 = (local_4 - param_3[4]) / local_ac;
          iVar7 = (*param_4 - *param_3) / local_ac;
          iVar4 = (param_4[2] - iVar4) / local_ac;
          iVar8 = (param_4[3] - param_3[3]) / local_ac;
          iVar19 = (param_4[4] - param_3[4]) / local_ac;
          piVar25 = param_3;
          piVar29 = local_48;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar29 = *piVar25;
            piVar25 = piVar25 + 1;
            piVar29 = piVar29 + 1;
          }
          piVar25 = local_28;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar25 = *param_3;
            param_3 = param_3 + 1;
            piVar25 = piVar25 + 1;
          }
          iVar23 = local_48[1];
          if (local_48[1] >> 0x10 < iVar1) {
            iVar1 = iVar1 - (local_48[1] >> 0x10);
            local_48[0] = local_48[0] + iVar1 * iVar2;
            iVar23 = local_48[1] + iVar1 * 0x10000;
            local_48[2] = local_48[2] + iVar1 * iVar3;
            local_48[3] = local_48[3] + iVar1 * iVar9;
            local_38 = local_38 + iVar1 * iVar6;
            local_28[0] = local_28[0] + iVar1 * iVar7;
            local_28[2] = local_28[2] + iVar1 * iVar4;
            local_28[3] = local_28[3] + iVar1 * iVar8;
            local_18 = local_18 + iVar1 * iVar19;
            local_ac = local_ac - iVar1;
          }
          iVar23 = iVar23 >> 0x10;
          if (iVar5 < local_ac + iVar23) {
            local_ac = iVar5 - iVar23;
          }
          iVar1 = *param_1 + local_2c * iVar23 * 2;
          iVar5 = local_18;
          iVar23 = local_38;
          iVar26 = local_28[3];
          iVar10 = local_48[3];
          iVar11 = local_28[2];
          iVar12 = local_48[2];
          iVar14 = local_48[0];
          iVar15 = local_28[0];
          while (0 < local_ac) {
            local_94 = (undefined2 *)(iVar14 >> 0x10);
            local_80 = ((iVar15 >> 0x10) - (int)local_94) + 1;
            if (((0 < local_80) && ((int)local_94 <= *(int *)((int)this + 0x27c))) &&
               (*(int *)((int)this + 0x274) <= iVar15 >> 0x10)) {
              iVar16 = (iVar11 - iVar12) / local_80;
              iVar17 = (iVar26 - iVar10) / local_80;
              iVar18 = (iVar5 - iVar23) / local_80;
              iVar21 = *(int *)((int)this + 0x274);
              iVar20 = iVar12;
              iVar24 = iVar10;
              iVar28 = iVar23;
              if ((int)local_94 < iVar21) {
                iVar22 = iVar21 - (int)local_94;
                iVar24 = iVar22 * iVar17 + iVar10;
                iVar20 = iVar22 * iVar16 + iVar12;
                iVar28 = iVar22 * iVar18 + iVar23;
                local_80 = local_80 - iVar22;
                local_94 = (undefined2 *)iVar21;
              }
              if ((0 < local_80) && ((int)local_94 < *(int *)((int)this + 0x27c))) {
                local_8c = (undefined2 *)(iVar1 + (int)local_94 * 2);
                do {
                  *local_8c = *(undefined2 *)
                               ((int)this +
                               ((uint)*(byte *)((iVar20 >> 0x10) +
                                               param_5 + (iVar24 >> 7 & 0xfffffe00U)) +
                               (iVar28 >> 0x10) * 0x100) * 2 + 0x2a4);
                  local_80 = local_80 + -1;
                  if (local_80 == 0) break;
                  iVar20 = iVar20 + iVar16;
                  iVar24 = iVar24 + iVar17;
                  iVar28 = iVar28 + iVar18;
                  local_8c = local_8c + 1;
                  local_94 = (undefined2 *)((int)local_94 + 1);
                } while ((int)local_94 < *(int *)((int)this + 0x27c));
              }
            }
            local_ac = local_ac + -1;
            if (local_ac == 0) break;
            iVar1 = iVar1 + local_2c * 2;
            iVar14 = iVar14 + iVar2;
            iVar12 = iVar12 + iVar3;
            iVar10 = iVar10 + iVar9;
            iVar23 = iVar23 + iVar6;
            iVar15 = iVar15 + iVar7;
            iVar11 = iVar11 + iVar4;
            iVar26 = iVar26 + iVar8;
            iVar5 = iVar5 + iVar19;
          }
        }
        iVar1 = *(int *)((int)this + 0x278);
        if (((iVar1 <= param_2[1] >> 0x10) && (iVar2 = *(int *)((int)this + 0x280), iVar13 <= iVar2)
            ) && (local_70 = (param_2[1] - local_14[1] >> 0x10) + 1, 0 < local_70)) {
          iVar3 = (*param_2 - local_14[0]) / local_70;
          iVar9 = (param_2[2] - local_14[2]) / local_70;
          iVar4 = (param_2[3] - local_14[3]) / local_70;
          iVar5 = (param_2[4] - local_4) / local_70;
          iVar6 = (*param_2 - *param_4) / local_70;
          iVar7 = (param_2[2] - param_4[2]) / local_70;
          iVar8 = (param_2[3] - param_4[3]) / local_70;
          iVar19 = (param_2[4] - param_4[4]) / local_70;
          piVar25 = local_14;
          piVar29 = local_48;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar29 = *piVar25;
            piVar25 = piVar25 + 1;
            piVar29 = piVar29 + 1;
          }
          piVar25 = local_28;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar25 = *param_4;
            param_4 = param_4 + 1;
            piVar25 = piVar25 + 1;
          }
          if (iVar13 < iVar1) {
            iVar1 = iVar1 - iVar13;
            local_48[0] = iVar1 * iVar3 + local_14[0];
            local_48[1] = local_48[1] + iVar1 * 0x10000;
            local_48[2] = local_48[2] + iVar1 * iVar9;
            local_48[3] = local_48[3] + iVar1 * iVar4;
            local_38 = local_38 + iVar1 * iVar5;
            local_28[0] = local_28[0] + iVar1 * iVar6;
            local_28[2] = local_28[2] + iVar1 * iVar7;
            local_28[3] = local_28[3] + iVar1 * iVar8;
            local_18 = local_18 + iVar1 * iVar19;
            local_70 = local_70 - iVar1;
          }
          iVar1 = local_48[1] >> 0x10;
          if (iVar2 < local_70 + iVar1) {
            local_70 = iVar2 - iVar1;
          }
          local_8c = (undefined2 *)(*param_1 + local_2c * iVar1 * 2);
          local_74 = local_18;
          local_78 = local_28[3];
          local_88 = local_28[2];
          local_84 = local_28[0];
          local_a4 = local_38;
          local_a8 = local_48[3];
          local_90 = local_48[2];
          local_7c = (undefined2 *)local_48[0];
          if (0 < local_70) {
            do {
              iVar1 = (int)local_7c >> 0x10;
              local_80 = ((local_84 >> 0x10) - iVar1) + 1;
              if (((0 < local_80) && (iVar1 <= *(int *)((int)this + 0x27c))) &&
                 (iVar2 = *(int *)((int)this + 0x274), iVar2 <= local_84 >> 0x10)) {
                iVar10 = (local_88 - local_90) / local_80;
                iVar11 = (local_78 - local_a8) / local_80;
                iVar12 = (local_74 - local_a4) / local_80;
                iVar13 = local_90;
                iVar23 = local_a8;
                iVar26 = local_a4;
                if (iVar1 < iVar2) {
                  iVar1 = iVar2 - iVar1;
                  iVar23 = iVar1 * iVar11 + local_a8;
                  iVar13 = iVar1 * iVar10 + local_90;
                  iVar26 = iVar1 * iVar12 + local_a4;
                  local_80 = local_80 - iVar1;
                  iVar1 = iVar2;
                }
                if ((0 < local_80) && (iVar1 < *(int *)((int)this + 0x27c))) {
                  local_94 = (undefined2 *)((int)local_8c + iVar1 * 2);
                  do {
                    *local_94 = *(undefined2 *)
                                 ((int)this +
                                 ((uint)*(byte *)((iVar13 >> 0x10) +
                                                 param_5 + (iVar23 >> 7 & 0xfffffe00U)) +
                                 (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                    local_80 = local_80 + -1;
                    if (local_80 == 0) break;
                    iVar13 = iVar13 + iVar10;
                    iVar26 = iVar26 + iVar12;
                    iVar23 = iVar23 + iVar11;
                    iVar1 = iVar1 + 1;
                    local_94 = local_94 + 1;
                  } while (iVar1 < *(int *)((int)this + 0x27c));
                }
              }
              local_70 = local_70 + -1;
              if (local_70 == 0) {
                return;
              }
              local_8c = (undefined2 *)((int)local_8c + local_2c * 2);
              local_7c = (undefined2 *)((int)local_7c + iVar3);
              local_90 = local_90 + iVar9;
              local_a4 = local_a4 + iVar5;
              local_84 = local_84 + iVar6;
              local_a8 = local_a8 + iVar4;
              local_78 = local_78 + iVar8;
              local_88 = local_88 + iVar7;
              local_74 = local_74 + iVar19;
              if (local_70 < 1) {
                return;
              }
            } while( true );
          }
        }
      }
    }
    else {
      iVar1 = iVar1 - iVar3 >> 0x10;
      if (iVar1 < 1) {
        iVar1 = 0x8000;
      }
      else {
        iVar1 = (iVar2 - iVar3) / iVar1;
      }
      iVar4 = *param_4;
      local_14[0] = (*param_2 - iVar4 >> 0x10) * iVar1 + iVar4;
      if (*param_3 <= local_14[0]) {
        local_14[1] = iVar2;
        iVar5 = param_4[2];
        local_14[2] = (param_2[2] - iVar5 >> 0x10) * iVar1 + iVar5;
        iVar6 = param_4[3];
        local_14[3] = (param_2[3] - iVar6 >> 0x10) * iVar1 + iVar6;
        iVar7 = param_4[4];
        local_4 = (param_2[4] - iVar7 >> 0x10) * iVar1 + iVar7;
        iVar1 = *(int *)((int)this + 0x278);
        if (((iVar1 <= iVar9) && (iVar9 = *(int *)((int)this + 0x280), iVar13 <= iVar9)) &&
           (local_ac = (iVar2 - iVar3 >> 0x10) + 1, 0 < local_ac)) {
          iVar2 = (*param_3 - iVar4) / local_ac;
          iVar3 = (param_3[2] - iVar5) / local_ac;
          iVar13 = (param_3[3] - iVar6) / local_ac;
          iVar8 = (param_3[4] - iVar7) / local_ac;
          iVar4 = (local_14[0] - iVar4) / local_ac;
          iVar5 = (local_14[2] - iVar5) / local_ac;
          iVar6 = (local_14[3] - iVar6) / local_ac;
          iVar7 = (local_4 - iVar7) / local_ac;
          piVar25 = param_4;
          piVar29 = local_48;
          for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
            *piVar29 = *piVar25;
            piVar25 = piVar25 + 1;
            piVar29 = piVar29 + 1;
          }
          piVar25 = local_28;
          for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
            *piVar25 = *param_4;
            param_4 = param_4 + 1;
            piVar25 = piVar25 + 1;
          }
          iVar19 = local_48[1];
          if (local_48[1] >> 0x10 < iVar1) {
            iVar1 = iVar1 - (local_48[1] >> 0x10);
            local_48[0] = local_48[0] + iVar1 * iVar2;
            iVar19 = local_48[1] + iVar1 * 0x10000;
            local_48[2] = local_48[2] + iVar1 * iVar3;
            local_48[3] = local_48[3] + iVar1 * iVar13;
            local_38 = local_38 + iVar1 * iVar8;
            local_28[0] = local_28[0] + iVar1 * iVar4;
            local_28[2] = local_28[2] + iVar1 * iVar5;
            local_28[3] = local_28[3] + iVar1 * iVar6;
            local_18 = local_18 + iVar1 * iVar7;
            local_ac = local_ac - iVar1;
          }
          iVar19 = iVar19 >> 0x10;
          if (iVar9 < local_ac + iVar19) {
            local_ac = iVar9 - iVar19;
          }
          local_74 = local_18;
          local_78 = local_28[3];
          local_88 = local_28[2];
          local_84 = local_28[0];
          local_a8 = local_48[2];
          local_8c = (undefined2 *)(*param_1 + local_2c * iVar19 * 2);
          if (0 < local_ac) {
            iVar1 = local_48[0];
            iVar9 = local_48[3];
            iVar19 = local_38;
            local_70 = local_ac;
            do {
              local_80 = iVar1 >> 0x10;
              local_90 = ((local_84 >> 0x10) - local_80) + 1;
              if (((0 < local_90) && (local_80 <= *(int *)((int)this + 0x27c))) &&
                 (*(int *)((int)this + 0x274) <= local_84 >> 0x10)) {
                iVar12 = (local_88 - local_a8) / local_90;
                iVar14 = (local_78 - iVar9) / local_90;
                iVar15 = (local_74 - iVar19) / local_90;
                iVar23 = *(int *)((int)this + 0x274);
                iVar26 = local_a8;
                iVar10 = iVar9;
                iVar11 = iVar19;
                if (local_80 < iVar23) {
                  local_80 = iVar23 - local_80;
                  iVar10 = local_80 * iVar14 + iVar9;
                  iVar26 = local_80 * iVar12 + local_a8;
                  iVar11 = local_80 * iVar15 + iVar19;
                  local_90 = local_90 - local_80;
                  local_80 = iVar23;
                }
                if ((0 < local_90) && (local_80 < *(int *)((int)this + 0x27c))) {
                  local_94 = (undefined2 *)((int)local_8c + local_80 * 2);
                  do {
                    *local_94 = *(undefined2 *)
                                 ((int)this +
                                 ((uint)*(byte *)((iVar10 >> 7 & 0xfffffe00U) +
                                                 param_5 + (iVar26 >> 0x10)) +
                                 (iVar11 >> 0x10) * 0x100) * 2 + 0x2a4);
                    local_90 = local_90 + -1;
                    if (local_90 == 0) break;
                    iVar26 = iVar26 + iVar12;
                    iVar10 = iVar10 + iVar14;
                    iVar11 = iVar11 + iVar15;
                    local_94 = local_94 + 1;
                    local_80 = local_80 + 1;
                  } while (local_80 < *(int *)((int)this + 0x27c));
                }
              }
              local_70 = local_70 + -1;
              if (local_70 == 0) break;
              local_8c = (undefined2 *)((int)local_8c + local_2c * 2);
              local_a8 = local_a8 + iVar3;
              iVar1 = iVar1 + iVar2;
              iVar19 = iVar19 + iVar8;
              iVar9 = iVar9 + iVar13;
              local_84 = local_84 + iVar4;
              local_88 = local_88 + iVar5;
              local_78 = local_78 + iVar6;
              local_74 = local_74 + iVar7;
            } while (0 < local_70);
          }
        }
        iVar1 = *(int *)((int)this + 0x278);
        if (iVar1 <= param_2[1] >> 0x10) {
          iVar2 = *(int *)((int)this + 0x280);
          if ((param_3[1] >> 0x10 <= iVar2) &&
             (local_ac = (param_2[1] - param_3[1] >> 0x10) + 1, 0 < local_ac)) {
            iVar3 = (*param_2 - *param_3) / local_ac;
            iVar9 = (param_2[2] - param_3[2]) / local_ac;
            iVar13 = (param_2[3] - param_3[3]) / local_ac;
            iVar4 = (param_2[4] - param_3[4]) / local_ac;
            iVar5 = (*param_2 - local_14[0]) / local_ac;
            iVar6 = (param_2[2] - local_14[2]) / local_ac;
            iVar7 = (param_2[3] - local_14[3]) / local_ac;
            iVar8 = (param_2[4] - local_4) / local_ac;
            piVar25 = local_48;
            for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
              *piVar25 = *param_3;
              param_3 = param_3 + 1;
              piVar25 = piVar25 + 1;
            }
            piVar25 = local_14;
            piVar29 = local_28;
            for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
              *piVar29 = *piVar25;
              piVar25 = piVar25 + 1;
              piVar29 = piVar29 + 1;
            }
            if (local_48[1] >> 0x10 < iVar1) {
              iVar1 = iVar1 - (local_48[1] >> 0x10);
              local_48[0] = local_48[0] + iVar1 * iVar3;
              local_48[1] = local_48[1] + iVar1 * 0x10000;
              local_48[2] = local_48[2] + iVar1 * iVar9;
              local_48[3] = local_48[3] + iVar1 * iVar13;
              local_38 = local_38 + iVar1 * iVar4;
              local_28[0] = iVar1 * iVar5 + local_14[0];
              local_28[2] = local_28[2] + iVar1 * iVar6;
              local_28[3] = local_28[3] + iVar1 * iVar7;
              local_18 = local_18 + iVar1 * iVar8;
              local_ac = local_ac - iVar1;
            }
            iVar1 = local_48[1] >> 0x10;
            if (iVar2 < local_ac + iVar1) {
              local_ac = iVar2 - iVar1;
            }
            local_a4 = local_38;
            local_a8 = local_48[3];
            local_90 = local_48[2];
            local_7c = (undefined2 *)local_48[0];
            local_74 = local_18;
            local_78 = local_28[3];
            local_8c = (undefined2 *)(*param_1 + local_2c * iVar1 * 2);
            local_88 = local_28[2];
            local_84 = local_28[0];
            local_70 = local_ac;
            if (0 < local_ac) {
              do {
                iVar1 = (int)local_7c >> 0x10;
                local_80 = ((local_84 >> 0x10) - iVar1) + 1;
                if (((0 < local_80) && (iVar1 <= *(int *)((int)this + 0x27c))) &&
                   (iVar2 = *(int *)((int)this + 0x274), iVar2 <= local_84 >> 0x10)) {
                  iVar10 = (local_88 - local_90) / local_80;
                  iVar11 = (local_78 - local_a8) / local_80;
                  iVar12 = (local_74 - local_a4) / local_80;
                  iVar19 = local_90;
                  iVar23 = local_a8;
                  iVar26 = local_a4;
                  if (iVar1 < iVar2) {
                    iVar1 = iVar2 - iVar1;
                    iVar23 = iVar1 * iVar11 + local_a8;
                    iVar19 = iVar1 * iVar10 + local_90;
                    iVar26 = iVar1 * iVar12 + local_a4;
                    local_80 = local_80 - iVar1;
                    iVar1 = iVar2;
                  }
                  if ((0 < local_80) && (iVar1 < *(int *)((int)this + 0x27c))) {
                    local_94 = (undefined2 *)((int)local_8c + iVar1 * 2);
                    do {
                      *local_94 = *(undefined2 *)
                                   ((int)this +
                                   ((uint)*(byte *)((iVar23 >> 7 & 0xfffffe00U) +
                                                   param_5 + (iVar19 >> 0x10)) +
                                   (iVar26 >> 0x10) * 0x100) * 2 + 0x2a4);
                      local_80 = local_80 + -1;
                      if (local_80 == 0) break;
                      iVar19 = iVar19 + iVar10;
                      iVar26 = iVar26 + iVar12;
                      iVar23 = iVar23 + iVar11;
                      iVar1 = iVar1 + 1;
                      local_94 = local_94 + 1;
                    } while (iVar1 < *(int *)((int)this + 0x27c));
                  }
                }
                local_70 = local_70 + -1;
                if (local_70 == 0) {
                  return;
                }
                local_8c = (undefined2 *)((int)local_8c + local_2c * 2);
                local_7c = (undefined2 *)((int)local_7c + iVar3);
                local_90 = local_90 + iVar9;
                local_a4 = local_a4 + iVar4;
                local_84 = local_84 + iVar5;
                local_a8 = local_a8 + iVar13;
                local_78 = local_78 + iVar7;
                local_88 = local_88 + iVar6;
                local_74 = local_74 + iVar8;
                if (local_70 < 1) {
                  return;
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = iVar3 - iVar2 >> 0x10;
    if (iVar3 < 1) {
      iVar3 = 0x8000;
    }
    else {
      iVar3 = (iVar1 - iVar2) / iVar3;
    }
    local_14[0] = (*param_4 - *param_3 >> 0x10) * iVar3 + *param_3;
    if (*param_2 <= local_14[0]) {
      iVar13 = param_3[2];
      local_14[1] = iVar1;
      local_14[2] = (param_4[2] - iVar13 >> 0x10) * iVar3 + iVar13;
      local_14[3] = (param_4[3] - param_3[3] >> 0x10) * iVar3 + param_3[3];
      local_4 = (param_4[4] - param_3[4] >> 0x10) * iVar3 + param_3[4];
      iVar3 = *(int *)((int)this + 0x278);
      if (((iVar3 <= iVar4) && (iVar4 = *(int *)((int)this + 0x280), iVar9 <= iVar4)) &&
         (local_ac = (iVar1 - iVar2 >> 0x10) + 1, 0 < local_ac)) {
        iVar1 = (*param_2 - *param_3) / local_ac;
        iVar2 = (param_2[2] - iVar13) / local_ac;
        iVar9 = (param_2[3] - param_3[3]) / local_ac;
        iVar5 = (param_2[4] - param_3[4]) / local_ac;
        iVar6 = (local_14[0] - *param_3) / local_ac;
        iVar13 = (local_14[2] - iVar13) / local_ac;
        iVar7 = (local_14[3] - param_3[3]) / local_ac;
        iVar8 = (local_4 - param_3[4]) / local_ac;
        piVar25 = param_3;
        piVar29 = local_48;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar29 = *piVar25;
          piVar25 = piVar25 + 1;
          piVar29 = piVar29 + 1;
        }
        piVar25 = local_28;
        for (iVar19 = 5; iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar25 = *param_3;
          param_3 = param_3 + 1;
          piVar25 = piVar25 + 1;
        }
        iVar19 = local_48[1];
        if (local_48[1] >> 0x10 < iVar3) {
          iVar3 = iVar3 - (local_48[1] >> 0x10);
          local_48[0] = local_48[0] + iVar3 * iVar1;
          iVar19 = local_48[1] + iVar3 * 0x10000;
          local_48[2] = local_48[2] + iVar3 * iVar2;
          local_48[3] = local_48[3] + iVar3 * iVar9;
          local_38 = local_38 + iVar3 * iVar5;
          local_28[0] = local_28[0] + iVar3 * iVar6;
          local_28[2] = local_28[2] + iVar3 * iVar13;
          local_28[3] = local_28[3] + iVar3 * iVar7;
          local_18 = local_18 + iVar3 * iVar8;
          local_ac = local_ac - iVar3;
        }
        iVar19 = iVar19 >> 0x10;
        if (iVar4 < local_ac + iVar19) {
          local_ac = iVar4 - iVar19;
        }
        iVar3 = *param_1 + local_2c * iVar19 * 2;
        iVar4 = local_18;
        iVar19 = local_38;
        iVar23 = local_28[3];
        iVar26 = local_48[3];
        iVar10 = local_28[2];
        iVar11 = local_48[2];
        iVar12 = local_48[0];
        iVar14 = local_28[0];
        while (0 < local_ac) {
          iVar15 = iVar12 >> 0x10;
          local_80 = ((iVar14 >> 0x10) - iVar15) + 1;
          if (((0 < local_80) && (iVar15 <= *(int *)((int)this + 0x27c))) &&
             (*(int *)((int)this + 0x274) <= iVar14 >> 0x10)) {
            iVar16 = (iVar10 - iVar11) / local_80;
            iVar17 = (iVar23 - iVar26) / local_80;
            iVar18 = (iVar4 - iVar19) / local_80;
            iVar21 = *(int *)((int)this + 0x274);
            iVar20 = iVar11;
            iVar24 = iVar26;
            iVar28 = iVar19;
            if (iVar15 < iVar21) {
              iVar15 = iVar21 - iVar15;
              iVar24 = iVar15 * iVar17 + iVar26;
              iVar20 = iVar15 * iVar16 + iVar11;
              iVar28 = iVar15 * iVar18 + iVar19;
              local_80 = local_80 - iVar15;
              iVar15 = iVar21;
            }
            if ((0 < local_80) && (iVar15 < *(int *)((int)this + 0x27c))) {
              local_94 = (undefined2 *)(iVar3 + iVar15 * 2);
              do {
                *local_94 = *(undefined2 *)
                             ((int)this +
                             ((uint)*(byte *)((iVar24 >> 7 & 0xfffffe00U) +
                                             param_5 + (iVar20 >> 0x10)) + (iVar28 >> 0x10) * 0x100)
                             * 2 + 0x2a4);
                local_80 = local_80 + -1;
                if (local_80 == 0) break;
                iVar20 = iVar20 + iVar16;
                iVar28 = iVar28 + iVar18;
                iVar24 = iVar24 + iVar17;
                iVar15 = iVar15 + 1;
                local_94 = local_94 + 1;
              } while (iVar15 < *(int *)((int)this + 0x27c));
            }
          }
          local_ac = local_ac + -1;
          if (local_ac == 0) break;
          iVar3 = iVar3 + local_2c * 2;
          iVar12 = iVar12 + iVar1;
          iVar11 = iVar11 + iVar2;
          iVar26 = iVar26 + iVar9;
          iVar19 = iVar19 + iVar5;
          iVar14 = iVar14 + iVar6;
          iVar10 = iVar10 + iVar13;
          iVar23 = iVar23 + iVar7;
          iVar4 = iVar4 + iVar8;
        }
      }
      iVar1 = *(int *)((int)this + 0x278);
      if (iVar1 <= param_4[1] >> 0x10) {
        iVar2 = *(int *)((int)this + 0x280);
        if ((param_2[1] >> 0x10 <= iVar2) &&
           (iVar3 = (param_4[1] - param_2[1] >> 0x10) + 1, 0 < iVar3)) {
          iVar9 = (*param_4 - *param_2) / iVar3;
          iVar13 = (param_4[2] - param_2[2]) / iVar3;
          iVar4 = (param_4[3] - param_2[3]) / iVar3;
          iVar5 = (param_4[4] - param_2[4]) / iVar3;
          iVar6 = (*param_4 - local_14[0]) / iVar3;
          iVar7 = (param_4[2] - local_14[2]) / iVar3;
          iVar8 = (param_4[3] - local_14[3]) / iVar3;
          iVar19 = (param_4[4] - local_4) / iVar3;
          piVar25 = local_48;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar25 = *param_2;
            param_2 = param_2 + 1;
            piVar25 = piVar25 + 1;
          }
          piVar25 = local_14;
          piVar29 = local_28;
          for (iVar23 = 5; iVar23 != 0; iVar23 = iVar23 + -1) {
            *piVar29 = *piVar25;
            piVar25 = piVar25 + 1;
            piVar29 = piVar29 + 1;
          }
          if (local_48[1] >> 0x10 < iVar1) {
            iVar1 = iVar1 - (local_48[1] >> 0x10);
            local_48[0] = local_48[0] + iVar1 * iVar9;
            local_48[1] = local_48[1] + iVar1 * 0x10000;
            local_48[2] = local_48[2] + iVar1 * iVar13;
            local_48[3] = local_48[3] + iVar1 * iVar4;
            local_38 = local_38 + iVar1 * iVar5;
            local_28[0] = iVar1 * iVar6 + local_14[0];
            local_28[2] = local_28[2] + iVar1 * iVar7;
            local_28[3] = local_28[3] + iVar1 * iVar8;
            local_18 = local_18 + iVar1 * iVar19;
            iVar3 = iVar3 - iVar1;
          }
          iVar1 = local_48[1] >> 0x10;
          if (iVar2 < iVar3 + iVar1) {
            iVar3 = iVar2 - iVar1;
          }
          iVar1 = *param_1 + local_2c * iVar1 * 2;
          while (0 < iVar3) {
            iVar2 = local_48[0] >> 0x10;
            local_80 = ((local_28[0] >> 0x10) - iVar2) + 1;
            if (((0 < local_80) && (iVar2 <= *(int *)((int)this + 0x27c))) &&
               (iVar23 = *(int *)((int)this + 0x274), iVar23 <= local_28[0] >> 0x10)) {
              iVar12 = (local_28[2] - local_48[2]) / local_80;
              iVar14 = (local_28[3] - local_48[3]) / local_80;
              iVar15 = (local_18 - local_38) / local_80;
              iVar26 = local_48[2];
              iVar10 = local_48[3];
              iVar11 = local_38;
              if (iVar2 < iVar23) {
                iVar2 = iVar23 - iVar2;
                iVar10 = iVar2 * iVar14 + local_48[3];
                iVar26 = iVar2 * iVar12 + local_48[2];
                iVar11 = iVar2 * iVar15 + local_38;
                local_80 = local_80 - iVar2;
                iVar2 = iVar23;
              }
              if ((0 < local_80) && (iVar2 < *(int *)((int)this + 0x27c))) {
                local_94 = (undefined2 *)(iVar1 + iVar2 * 2);
                do {
                  *local_94 = *(undefined2 *)
                               ((int)this +
                               ((uint)*(byte *)((iVar10 >> 7 & 0xfffffe00U) +
                                               param_5 + (iVar26 >> 0x10)) +
                               (iVar11 >> 0x10) * 0x100) * 2 + 0x2a4);
                  local_80 = local_80 + -1;
                  if (local_80 == 0) break;
                  iVar26 = iVar26 + iVar12;
                  iVar11 = iVar11 + iVar15;
                  iVar10 = iVar10 + iVar14;
                  iVar2 = iVar2 + 1;
                  local_94 = local_94 + 1;
                } while (iVar2 < *(int *)((int)this + 0x27c));
              }
            }
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              return;
            }
            iVar1 = iVar1 + local_2c * 2;
            local_48[0] = local_48[0] + iVar9;
            local_48[2] = local_48[2] + iVar13;
            local_38 = local_38 + iVar5;
            local_28[0] = local_28[0] + iVar6;
            local_48[3] = local_48[3] + iVar4;
            local_28[3] = local_28[3] + iVar8;
            local_28[2] = local_28[2] + iVar7;
            local_18 = local_18 + iVar19;
          }
        }
      }
    }
  }
  return;
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_48
#undef local_38
#undef local_2c
#undef local_28
#undef local_18
#undef local_14
#undef local_4
}
