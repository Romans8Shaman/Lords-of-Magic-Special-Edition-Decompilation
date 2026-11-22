/* Rebuilt from lomse.exe FUN_005357d0 @ 0x005357d0 (559 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005357d0 1
void __cdecl rb_005357d0(int *param_1,int *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  short *psVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef ushort * _t_local_14;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
  
  piVar9 = param_1;
  iVar4 = *param_2;
  iVar5 = param_2[1];
  piVar17 = (int *)param_2[2];
  iVar11 = *piVar17;
  iVar6 = piVar17[1];
  uVar18 = piVar17[4];
  iVar7 = piVar17[2];
  local_1c = 0;
  piVar17 = param_1 + 0x2cd;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  *(undefined2 *)(iVar4 + 2 + param_1[param_1[0x513] + 0x2d5] * 4) = 0;
  param_2 = (int *)(param_1[0x513] + 1);
  if ((int)param_2 < 0x23d) {
    param_1 = param_1 + param_1[0x513] + 0x2d6;
    local_14 = (ushort *)(0x23d - (int)param_2);
    param_2 = (int *)((int)param_2 + (int)local_14);
    do {
      iVar8 = *param_1;
      iVar13 = iVar8 * 4;
      uVar10 = *(ushort *)(iVar4 + 2 + (uint)*(ushort *)(iVar4 + 2 + iVar8 * 4) * 4) + 1;
      if ((int)uVar18 < (int)uVar10) {
        local_1c = local_1c + 1;
        uVar10 = uVar18;
      }
      *(short *)(iVar4 + 2 + iVar13) = (short)uVar10;
      if (iVar8 <= iVar5) {
        psVar14 = (short *)((int)piVar9 + uVar10 * 2 + 0xb34);
        *psVar14 = *psVar14 + 1;
        iVar16 = 0;
        if (iVar7 <= iVar8) {
          iVar16 = *(int *)(iVar6 + (iVar8 - iVar7) * 4);
        }
        uVar2 = *(ushort *)(iVar4 + iVar13);
        piVar9[0x5a8] = piVar9[0x5a8] + (uVar10 + iVar16) * (uint)uVar2;
        if (iVar11 != 0) {
          piVar9[0x5a9] =
               piVar9[0x5a9] + ((uint)*(ushort *)(iVar11 + 2 + iVar13) + iVar16) * (uint)uVar2;
        }
      }
      param_1 = param_1 + 1;
      local_14 = (ushort *)((int)local_14 + -1);
    } while (local_14 != (ushort *)0x0);
  }
  if (local_1c != 0) {
    do {
      iVar11 = uVar18 - 1;
      psVar14 = (short *)((int)piVar9 + iVar11 * 2 + 0xb34);
      sVar3 = *(short *)((int)piVar9 + iVar11 * 2 + 0xb34);
      while (sVar3 == 0) {
        psVar14 = psVar14 + -1;
        iVar11 = iVar11 + -1;
        sVar3 = *psVar14;
      }
      psVar14 = (short *)((int)piVar9 + iVar11 * 2 + 0xb34);
      *psVar14 = *psVar14 + -1;
      psVar14 = (short *)((int)piVar9 + iVar11 * 2 + 0xb36);
      *psVar14 = *psVar14 + 2;
      psVar14 = (short *)((int)piVar9 + uVar18 * 2 + 0xb34);
      *psVar14 = *psVar14 + -1;
      local_1c = local_1c + -2;
    } while (0 < local_1c);
    if (uVar18 != 0) {
      local_14 = (ushort *)((int)piVar9 + uVar18 * 2 + 0xb34);
      piVar17 = param_2;
      do {
        piVar12 = (int *)(uint)*local_14;
        if (piVar12 != (int *)0x0) {
          piVar15 = piVar9 + (int)piVar17 + 0x2d5;
          param_1 = piVar12;
          do {
            iVar11 = piVar15[-1];
            piVar17 = (int *)((int)param_2 + -1);
            piVar15 = piVar15 + -1;
            if (iVar11 <= iVar5) {
              puVar1 = (ushort *)(iVar4 + 2 + iVar11 * 4);
              uVar10 = (uint)*puVar1;
              if (uVar10 != uVar18) {
                piVar9[0x5a8] =
                     piVar9[0x5a8] + (uVar18 - uVar10) * (uint)*(ushort *)(iVar4 + iVar11 * 4);
                *puVar1 = (ushort)uVar18;
              }
              piVar12 = (int *)((int)param_1 - 1);
              param_1 = piVar12;
            }
            param_2 = piVar17;
          } while (piVar12 != (int *)0x0);
        }
        uVar18 = uVar18 - 1;
        local_14 = local_14 + -1;
      } while (uVar18 != 0);
    }
  }
  return;
#undef local_1c
#undef local_14
}
