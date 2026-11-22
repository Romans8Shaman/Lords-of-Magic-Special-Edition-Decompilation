/* Rebuilt from lomse.exe FUN_00496880 @ 0x00496880 (902 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00474ee0 ((int (__thiscall *)(void *, int, int, int))0x00474ee0)
#define param_4 (*(byte *)&_param_4) /* narrow view of the full 4-byte param slot _param_4 (Ghidra) */
#define param_5 (*(byte *)&_param_5) /* narrow view of the full 4-byte param slot _param_5 (Ghidra) */

#define LOM_SELF_00496880 1
void __thiscall
rb_00496880(void *this,int *param_1,uint param_2,int param_3,uint _param_4,uint _param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  ushort uVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  int **ppiVar13;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))

  bVar1 = param_4;
  DAT_0058364c = DAT_0058364c + 0x14;
  piVar12 = param_1;
  ppiVar13 = &local_20;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar13 = (int *)*piVar12;
    piVar12 = piVar12 + 1;
    ppiVar13 = ppiVar13 + 1;
  }
  if ((int)param_2 < 0) {
    local_14 = local_14 + param_2;
    local_1c = local_1c - param_2;
    param_2 = 0;
  }
  if (param_3 < 0) {
    local_10 = local_10 + param_3;
    local_18 = local_18 - param_3;
    param_3 = 0;
  }
  iVar7 = local_18;
  if (*(int *)((int)this + 4) <= (int)(local_14 + param_2)) {
    local_14 = *(int *)((int)this + 4) - param_2;
  }
  if (*(int *)((int)this + 8) <= local_10 + param_3) {
    local_10 = *(int *)((int)this + 8) - param_3;
  }
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
    }
    iVar7 = *(int *)((int)this + 0xc);
    iVar3 = local_20[3];
    iVar4 = param_3 * iVar7 + param_2 + *(int *)this;
    iVar5 = local_18 * iVar3 + local_1c + *local_20;
    if (-1 < local_10 + -1) {
      _param_5 = local_10;
      do {
        if (-1 < local_14 + -1) {
          pbVar11 = (byte *)(iVar5 + local_14 + -1);
          _param_4 = local_14;
          do {
            if (*pbVar11 != bVar1) {
              pbVar11[iVar4 - iVar5] = *pbVar11;
            }
            pbVar11 = pbVar11 + -1;
            _param_4 = _param_4 + -1;
          } while (_param_4 != 0);
        }
        iVar4 = iVar4 + iVar7;
        iVar5 = iVar5 + iVar3;
        _param_5 = _param_5 + -1;
      } while (_param_5 != 0);
    }
  }
  else {
    iVar3 = FUN_00474ee0(&DAT_00584ae8,0x80,0x80,0x80);
    uVar2 = ~(ushort)iVar3;
    if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
      iVar3 = *(int *)((int)this + 0xc);
      if ((*(byte *)((int)this + 0x14) & 4) != 0) {
        iVar3 = iVar3 >> 1;
      }
      iVar4 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar4 = iVar4 >> 1;
      }
      if ((0 < local_14) && (0 < local_10)) {
        iVar5 = iVar3 * param_3;
        param_3 = local_10;
        puVar6 = (ushort *)(*(int *)this + (iVar5 + param_2) * 2);
        iVar5 = local_20[4];
        pbVar11 = (byte *)(iVar4 * iVar7 + local_1c + *local_20);
        if (iVar4 == local_14) {
          do {
            iVar7 = 0;
            puVar8 = puVar6;
            do {
              bVar1 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              param_1 = (int *)(uint)bVar1;
              if (bVar1 != param_4) {
                if (bVar1 == param_5) {
                  uVar9 = *puVar8 >> 1 & uVar2;
                }
                else {
                  uVar9 = *(ushort *)(iVar5 + (int)param_1 * 2);
                }
                *puVar8 = uVar9;
              }
              iVar7 = iVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar7 < local_14);
            puVar6 = puVar6 + iVar3;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        else {
          do {
            iVar7 = 0;
            puVar8 = puVar6;
            do {
              bVar1 = pbVar11[iVar7];
              param_2 = (uint)bVar1;
              if (bVar1 != param_4) {
                if (bVar1 == param_5) {
                  uVar9 = *puVar8 >> 1 & uVar2;
                }
                else {
                  uVar9 = *(ushort *)(iVar5 + param_2 * 2);
                }
                *puVar8 = uVar9;
              }
              iVar7 = iVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar7 < local_14);
            pbVar11 = pbVar11 + iVar4;
            param_3 = param_3 + -1;
            puVar6 = puVar6 + iVar3;
          } while (param_3 != 0);
        }
      }
    }
    else {
      iVar3 = *(int *)((int)this + 0xc);
      if ((*(byte *)((int)this + 0x14) & 4) != 0) {
        iVar3 = iVar3 >> 1;
      }
      iVar4 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar4 = iVar4 >> 1;
      }
      iVar5 = *(int *)this + (iVar3 * param_3 + param_2) * 2;
      iVar7 = *local_20 + (iVar4 * iVar7 + local_1c) * 2;
      if (-1 < local_10 + -1) {
        param_3 = local_10;
        do {
          if (-1 < local_14 + -1) {
            puVar6 = (ushort *)(iVar5 + (local_14 + -1) * 2);
            iVar10 = local_14;
            do {
              uVar9 = *(ushort *)((iVar7 - iVar5) + (int)puVar6);
              if (uVar9 != param_4) {
                if (uVar9 == param_5) {
                  uVar9 = *puVar6 >> 1 & uVar2;
                }
                *puVar6 = uVar9;
              }
              puVar6 = puVar6 + -1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          iVar7 = iVar7 + iVar4 * 2;
          iVar5 = iVar5 + iVar3 * 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  return;
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
