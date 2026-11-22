/* Rebuilt from lomse.exe FUN_00496560 @ 0x00496560 (785 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00474ee0 ((int (__thiscall *)(void *, int, int, int))0x00474ee0)

#define LOM_SELF_00496560 1
void __thiscall rb_00496560(void *this,int *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int **ppiVar11;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int * _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int * _t_local_14;
  typedef int _t_local_10;
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))

  DAT_0058364c = DAT_0058364c + 0x14;
  piVar10 = param_1;
  ppiVar11 = &local_20;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppiVar11 = (int *)*piVar10;
    piVar10 = piVar10 + 1;
    ppiVar11 = ppiVar11 + 1;
  }
  if (param_2 < 0) {
    local_14 = (int *)((int)local_14 + param_2);
    local_1c = local_1c - param_2;
    param_2 = 0;
  }
  if (param_3 < 0) {
    local_10 = local_10 + param_3;
    local_18 = local_18 - param_3;
    param_3 = 0;
  }
  iVar4 = local_18;
  if (*(int *)((int)this + 4) <= (int)local_14 + param_2) {
    local_14 = (int *)(*(int *)((int)this + 4) - param_2);
  }
  if (*(int *)((int)this + 8) <= local_10 + param_3) {
    local_10 = *(int *)((int)this + 8) - param_3;
  }
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(*param_1 + 0x10);
    }
    iVar1 = *(int *)((int)this + 0xc);
    param_2 = param_3 * iVar1 + param_2 + *(int *)this;
    iVar5 = local_20[3];
    iVar2 = local_18 * iVar5 + local_1c + *local_20;
    iVar4 = local_10 + -1;
    if (-1 < iVar4) {
      do {
        if (-1 < (int)local_14 + -1) {
          pbVar3 = (byte *)(iVar2 + (int)local_14 + -1);
          param_1 = local_14;
          do {
            if ((*pbVar3 != param_4) && (((uint)(pbVar3 + (iVar4 - iVar2)) & 1) != 0)) {
              pbVar3[param_2 - iVar2] = *pbVar3;
            }
            pbVar3 = pbVar3 + -1;
            param_1 = (int *)((int)param_1 + -1);
          } while (param_1 != (int *)0x0);
        }
        iVar2 = iVar2 + iVar5;
        param_2 = param_2 + iVar1;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  else {
    iVar1 = FUN_00474ee0(&DAT_00584ae8,0x80,0x80,0x80);
    if ((*(byte *)(*param_1 + 0x14) & 4) == 0) {
      param_1 = *(int **)((int)this + 0xc);
      if ((*(byte *)((int)this + 0x14) & 4) != 0) {
        param_1 = (int *)((int)param_1 >> 1);
      }
      iVar5 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar5 = iVar5 >> 1;
      }
      iVar2 = *(int *)this + ((int)param_1 * param_3 + param_2) * 2;
      iVar9 = local_20[4];
      iVar4 = iVar5 * iVar4 + local_1c + *local_20;
      if (-1 < local_10 + -1) {
        iVar7 = (int)local_14 + -1;
        local_28 = local_10;
        do {
          if (-1 < iVar7) {
            puVar6 = (ushort *)(iVar2 + iVar7 * 2);
            iVar8 = iVar7;
            do {
              if (*(byte *)(iVar4 + iVar8) != param_4) {
                *puVar6 = *(ushort *)(iVar9 + (uint)*(byte *)(iVar4 + iVar8) * 2) >> 1 &
                          ~(ushort)iVar1;
              }
              iVar8 = iVar8 + -1;
              puVar6 = puVar6 + -1;
            } while (-1 < iVar8);
          }
          iVar4 = iVar4 + iVar5;
          iVar2 = iVar2 + (int)param_1 * 2;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
    }
    else {
      iVar5 = *(int *)((int)this + 0xc);
      if ((*(byte *)((int)this + 0x14) & 4) != 0) {
        iVar5 = iVar5 >> 1;
      }
      iVar2 = local_20[3];
      if ((*(byte *)(local_20 + 5) & 4) != 0) {
        iVar2 = iVar2 >> 1;
      }
      iVar9 = *(int *)this + (iVar5 * param_3 + param_2) * 2;
      iVar4 = *local_20 + (iVar2 * iVar4 + local_1c) * 2;
      if (-1 < local_10 + -1) {
        local_28 = local_10;
        do {
          if (-1 < (int)local_14 + -1) {
            puVar6 = (ushort *)(iVar4 + ((int)local_14 + -1) * 2);
            piVar10 = local_14;
            do {
              if (*puVar6 != (ushort)param_4) {
                *(ushort *)((iVar9 - iVar4) + (int)puVar6) = *puVar6 >> 1 & ~(ushort)iVar1;
              }
              puVar6 = puVar6 + -1;
              piVar10 = (int *)((int)piVar10 + -1);
            } while (piVar10 != (int *)0x0);
          }
          iVar9 = iVar9 + iVar5 * 2;
          local_28 = local_28 + -1;
          iVar4 = iVar4 + iVar2 * 2;
        } while (local_28 != 0);
      }
    }
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  return;
#undef local_28
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
