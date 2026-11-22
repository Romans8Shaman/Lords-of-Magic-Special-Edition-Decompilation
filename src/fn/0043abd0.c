/* Rebuilt from lomse.exe FUN_0043abd0 @ 0x0043abd0 (1697 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556098 (*(uint *)0x00556098)
#define DAT_00578b58 (*(undefined *)0x00578b58)
#define DAT_00578b5c (*(undefined4 *)0x00578b5c)
#define DAT_00578b94 (*(undefined *)0x00578b94)
#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00585404 (*(uint *)0x00585404)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define _DAT_00585402 (*(undefined2 *)0x00585402)
#define s_No_more_than_256_alpha_values_su_00556100 (*(char (*)[])0x00556100)
#define s_mixed_page_types_not_supported_0055612c (*(char (*)[])0x0055612c)

#define LOM_SELF_0043abd0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
rb_0043abd0(void *this,int *param_1,int *param_2,int param_3,int param_4,uint param_5,int param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  int **ppiVar13;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_58;
  typedef ushort * _t_local_54;
  typedef int * _t_local_50;
  typedef ushort * _t_local_4c;
  typedef byte * _t_local_48;
  typedef int _t_local_44;
  typedef int _t_local_40;
  typedef int * _t_local_34;
  typedef int _t_local_30;
  typedef int _t_local_2c;
  typedef int * _t_local_28;
  typedef int _t_local_24;
  typedef int * _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define local_54 (*(_t_local_54 *)(_fr + 0x4))
#define local_50 (*(_t_local_50 *)(_fr + 0x8))
#define local_4c (*(_t_local_4c *)(_fr + 0xc))
#define local_48 (*(_t_local_48 *)(_fr + 0x10))
#define local_44 (*(_t_local_44 *)(_fr + 0x14))
#define local_40 (*(_t_local_40 *)(_fr + 0x18))
#define local_34 (*(_t_local_34 *)(_fr + 0x24))
#define local_30 (*(_t_local_30 *)(_fr + 0x28))
#define local_2c (*(_t_local_2c *)(_fr + 0x2c))
#define local_28 (*(_t_local_28 *)(_fr + 0x30))
#define local_24 (*(_t_local_24 *)(_fr + 0x34))
#define local_20 (*(_t_local_20 *)(_fr + 0x38))
#define local_1c (*(_t_local_1c *)(_fr + 0x3c))
#define local_18 (*(_t_local_18 *)(_fr + 0x40))

  piVar10 = param_1;
  ppiVar13 = &local_34;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar13 = (int *)*piVar10;
    piVar10 = piVar10 + 1;
    ppiVar13 = ppiVar13 + 1;
  }
  DAT_0058364c = DAT_0058364c + 0x28;
  piVar10 = param_2;
  ppiVar13 = &local_20;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar13 = (int *)*piVar10;
    piVar10 = piVar10 + 1;
    ppiVar13 = ppiVar13 + 1;
  }
  iVar7 = 1;
  if (((*(uint *)(*param_1 + 0x14) ^ *(uint *)(*param_2 + 0x14)) & 4) == 0) {
    if (((int)param_5 < 0x100) && (-1 < (int)param_5)) {
      if (DAT_00556098 != param_5) {
        if (1 < (int)param_5) {
          piVar10 = &DAT_00578b5c;
          do {
            iVar5 = iVar7 << 0x10;
            iVar7 = iVar7 + 1;
            *piVar10 = iVar5 / (int)param_5;
            piVar10 = piVar10 + 1;
          } while (iVar7 < (int)param_5);
        }
        DAT_00556098 = param_5;
      }
      if (param_3 < 0) {
        local_28 = (int *)((int)local_28 + param_3);
        local_30 = local_30 - param_3;
        local_1c = local_1c - param_3;
        param_3 = 0;
      }
      if (param_4 < 0) {
        local_24 = local_24 + param_4;
        local_18 = local_18 - param_4;
        local_2c = local_2c - param_4;
        param_4 = 0;
      }
      if (*(int *)((int)this + 4) <= (int)local_28 + param_3) {
        local_28 = (int *)(*(int *)((int)this + 4) - param_3);
      }
      if (*(int *)((int)this + 8) <= local_24 + param_4) {
        local_24 = *(int *)((int)this + 8) - param_4;
      }
      if ((*(byte *)((int)this + 0x14) & 4) == 0) {
        if (*(int *)((int)this + 0x10) == 0) {
          *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
        }
        iVar7 = *(int *)((int)this + 0xc);
        iVar6 = param_4 * iVar7 + param_3 + *(int *)this;
        iVar5 = local_34[3];
        iVar8 = local_2c * iVar5 + local_30 + *local_34;
        iVar11 = local_20[3];
        param_1 = (int *)(local_18 * iVar11 + local_1c + *local_20);
        if (-1 < local_24 + -1) {
          param_4 = local_24;
          do {
            if (-1 < (int)local_28 + -1) {
              puVar12 = (undefined1 *)(iVar8 + (int)local_28 + -1);
              param_2 = local_28;
              do {
                if (((byte)puVar12[(int)param_1 - iVar8] != 0) &&
                   ((int)param_5 >> 1 < (int)(uint)(byte)puVar12[(int)param_1 - iVar8])) {
                  puVar12[iVar6 - iVar8] = *puVar12;
                }
                puVar12 = puVar12 + -1;
                param_2 = (int *)((int)param_2 + -1);
              } while (param_2 != (int *)0x0);
            }
            iVar6 = iVar6 + iVar7;
            param_1 = (int *)((int)param_1 + iVar11);
            iVar8 = iVar8 + iVar5;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
      }
      else if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
        iVar5 = *(int *)((int)this + 0xc) >> 1;
        iVar7 = local_34[3];
        if ((*(byte *)(local_34 + 5) & 4) != 0) {
          iVar7 = iVar7 >> 1;
        }
        param_1 = (int *)local_20[3];
        if ((*(byte *)(local_20 + 5) & 4) != 0) {
          param_1 = (int *)((int)param_1 >> 1);
        }
        param_4 = *(int *)this + (iVar5 * param_4 + param_3) * 2;
        local_54 = (ushort *)(iVar7 * local_2c + local_30 + *local_34);
        local_58 = (int)param_1 * local_18 + local_1c + *local_20;
        iVar11 = param_6 * 0x20 + local_34[4];
        if (-1 < local_24 + -1) {
          iVar6 = (int)local_28 + -1;
          local_40 = local_24;
          do {
            if (-1 < iVar6) {
              local_48 = (byte *)((int)local_54 + iVar6);
              local_4c = (ushort *)(param_4 + iVar6 * 2);
              local_50 = local_28;
              do {
                uVar9 = (uint)local_48[local_58 - (int)local_54];
                if (uVar9 != 0) {
                  if (uVar9 == param_5) {
                    *local_4c = *(ushort *)(iVar11 + (uint)*local_48 * 2);
                  }
                  else {
                    uVar2 = *local_4c;
                    uVar3 = *(ushort *)(iVar11 + (uint)*local_48 * 2);
                    iVar8 = *(int *)(&DAT_00578b58 + uVar9 * 4);
                    iVar4 = *(int *)(&DAT_00578b94 + uVar9 * -4);
                    *local_4c = ((ushort)((uint)(uVar2 & _DAT_00585402) * iVar4 +
                                          (uint)(uVar3 & _DAT_00585402) * iVar8 >> 0x10) &
                                _DAT_00585402) +
                                ((ushort)((DAT_00585404 & 0xffff & (uint)uVar2) * iVar4 +
                                          (DAT_00585404 & 0xffff & (uint)uVar3) * iVar8 >> 0x10) &
                                (ushort)DAT_00585404) +
                                ((ushort)((uint)((*(ushort *)((uchar *)&DAT_00585404 + 2)) & uVar2) * iVar4 +
                                          (uint)((*(ushort *)((uchar *)&DAT_00585404 + 2)) & uVar3) * iVar8 >> 0x10) &
                                (*(ushort *)((uchar *)&DAT_00585404 + 2)));
                  }
                }
                local_48 = local_48 + -1;
                local_4c = local_4c + -1;
                local_50 = (int *)((int)local_50 + -1);
              } while (local_50 != (int *)0x0);
            }
            local_58 = local_58 + (int)param_1;
            param_4 = param_4 + iVar5 * 2;
            local_54 = (ushort *)((int)local_54 + iVar7);
            local_40 = local_40 + -1;
          } while (local_40 != 0);
          DAT_0058364c = DAT_0058364c + -0x28;
          return;
        }
      }
      else {
        iVar5 = *(int *)((int)this + 0xc) >> 1;
        iVar7 = local_34[3];
        if ((*(byte *)(local_34 + 5) & 4) != 0) {
          iVar7 = iVar7 >> 1;
        }
        param_1 = (int *)local_20[3];
        if ((*(byte *)(local_20 + 5) & 4) != 0) {
          param_1 = (int *)((int)param_1 >> 1);
        }
        local_4c = (ushort *)(*(int *)this + (iVar5 * param_4 + param_3) * 2);
        local_48 = (byte *)(*local_34 + (iVar7 * local_2c + local_30) * 2);
        param_4 = *local_20 + ((int)param_1 * local_18 + local_1c) * 2;
        if (-1 < local_24 + -1) {
          local_44 = local_24;
          do {
            if (-1 < (int)local_28 + -1) {
              local_54 = (ushort *)((int)local_4c + ((int)local_28 + -1) * 2);
              local_50 = local_28;
              do {
                puVar1 = (ushort *)(((int)local_48 - (int)local_4c) + (int)local_54);
                uVar9 = (uint)*(ushort *)((int)puVar1 + (param_4 - (int)local_48));
                if (uVar9 != 0) {
                  if (uVar9 == param_5) {
                    *local_54 = *puVar1;
                  }
                  else {
                    uVar2 = *puVar1;
                    uVar3 = *local_54;
                    iVar11 = *(int *)(&DAT_00578b58 + uVar9 * 4);
                    iVar6 = *(int *)(&DAT_00578b58 + (0xf - uVar9) * 4);
                    *local_54 = ((ushort)((uint)(uVar2 & _DAT_00585402) * iVar11 +
                                          (uint)(uVar3 & _DAT_00585402) * iVar6 >> 0x10) &
                                _DAT_00585402) +
                                ((ushort)((DAT_00585404 & 0xffff & (uint)uVar2) * iVar11 +
                                          (DAT_00585404 & 0xffff & (uint)uVar3) * iVar6 >> 0x10) &
                                (ushort)DAT_00585404) +
                                ((ushort)((uint)((*(ushort *)((uchar *)&DAT_00585404 + 2)) & uVar2) * iVar11 +
                                          (uint)((*(ushort *)((uchar *)&DAT_00585404 + 2)) & uVar3) * iVar6 >> 0x10) &
                                (*(ushort *)((uchar *)&DAT_00585404 + 2)));
                  }
                }
                local_54 = local_54 + -1;
                local_50 = (int *)((int)local_50 + -1);
              } while (local_50 != (int *)0x0);
            }
            local_4c = (ushort *)((int)local_4c + iVar5 * 2);
            local_48 = (byte *)((int)local_48 + iVar7 * 2);
            param_4 = param_4 + (int)param_1 * 2;
            local_44 = local_44 + -1;
          } while (local_44 != 0);
          DAT_0058364c = DAT_0058364c + -0x28;
          return;
        }
      }
      DAT_0058364c = DAT_0058364c + -0x28;
    }
    else {
      FUN_005047d0(s_No_more_than_256_alpha_values_su_00556100);
      DAT_0058364c = DAT_0058364c + -0x28;
    }
  }
  else {
    FUN_005047d0(s_mixed_page_types_not_supported_0055612c);
    DAT_0058364c = DAT_0058364c + -0x28;
  }
  return;
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
}
