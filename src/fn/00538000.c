/* Rebuilt from lomse.exe FUN_00538000 @ 0x00538000 (1238 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00538770 ((undefined4 (__cdecl *)(int, int))0x00538770)

#define LOM_SELF_00538000 1
undefined4 __cdecl
rb_00538000(int *param_1,uint param_2,uint param_3,int param_4,int param_5,uint *param_6,
            uint *param_7,int param_8)

{
  uint *puVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uchar _fr[0x580] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_578;
  typedef uint _t_local_574;
  typedef int _t_local_570;
  typedef uint * _t_local_56c;
  typedef undefined4 _t_uStack_568;
  typedef uint _t_uStack_564;
  typedef uint _t_local_560;
  typedef uint * _t_local_558;
  typedef uint _t_local_554;
  typedef int _t_local_550;
  typedef uint _t_local_548;
  typedef uint _t_local_53c[32];
  typedef int _t_local_4bc;
  typedef uint _t_local_480[288];
#define local_578 (*(_t_local_578 *)(_fr + 0x0))
#define local_574 (*(_t_local_574 *)(_fr + 0x4))
#define local_570 (*(_t_local_570 *)(_fr + 0x8))
#define local_56c (*(_t_local_56c *)(_fr + 0xc))
#define uStack_568 (*(_t_uStack_568 *)(_fr + 0x10))
#define uStack_564 (*(_t_uStack_564 *)(_fr + 0x14))
#define local_560 (*(_t_local_560 *)(_fr + 0x18))
#define local_558 (*(_t_local_558 *)(_fr + 0x20))
#define local_554 (*(_t_local_554 *)(_fr + 0x24))
#define local_550 (*(_t_local_550 *)(_fr + 0x28))
#define local_548 (*(_t_local_548 *)(_fr + 0x30))
#define local_53c (*(_t_local_53c *)(_fr + 0x3c))
#define local_4bc (*(_t_local_4bc *)(_fr + 0xbc))
#define local_480 (*(_t_local_480 *)(_fr + 0xf8))
  
  local_53c[0] = 0;
  local_53c[1] = 0;
  local_53c[2] = 0;
  local_53c[3] = 0;
  local_53c[4] = 0;
  local_53c[5] = 0;
  local_53c[6] = 0;
  local_53c[7] = 0;
  local_53c[8] = 0;
  local_53c[9] = 0;
  local_53c[10] = 0;
  local_53c[0xb] = 0;
  local_53c[0xc] = 0;
  local_53c[0xd] = 0;
  local_53c[0xe] = 0;
  local_53c[0xf] = 0;
  piVar8 = param_1;
  uVar13 = param_2;
  do {
    iVar18 = *piVar8;
    piVar8 = piVar8 + 1;
    uVar13 = uVar13 - 1;
    local_53c[iVar18] = local_53c[iVar18] + 1;
  } while (uVar13 != 0);
  if (local_53c[0] == param_2) {
    *param_6 = 0;
    *param_7 = 0;
    return 0;
  }
  local_578 = 1;
  puVar7 = local_53c;
  local_574 = *param_7;
  do {
    puVar7 = puVar7 + 1;
    if (*puVar7 != 0) break;
    local_578 = local_578 + 1;
  } while (local_578 < 0x10);
  if (local_574 < local_578) {
    local_574 = local_578;
  }
  uVar13 = 0xf;
  puVar7 = local_53c + 0xf;
  do {
    if (*puVar7 != 0) break;
    uVar13 = uVar13 - 1;
    puVar7 = puVar7 + -1;
  } while (uVar13 != 0);
  if (uVar13 < local_574) {
    local_574 = uVar13;
  }
  *param_7 = local_574;
  iVar18 = 1 << ((byte)local_578 & 0x1f);
  if (local_578 < uVar13) {
    puVar7 = local_53c + local_578;
    uVar9 = local_578;
    do {
      uVar15 = *puVar7;
      if ((int)(iVar18 - uVar15) < 0) {
        return 0xfffffffd;
      }
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 1;
      iVar18 = (iVar18 - uVar15) * 2;
    } while (uVar9 < uVar13);
  }
  iVar18 = iVar18 - local_53c[uVar13];
  if (iVar18 < 0) {
    return 0xfffffffd;
  }
  local_53c[0x11] = 0;
  local_53c[uVar13] = local_53c[uVar13] + iVar18;
  iVar10 = 0;
  iVar5 = uVar13 - 1;
  if (iVar5 != 0) {
    iVar6 = 0;
    do {
      iVar10 = iVar10 + *(int *)((int)local_53c + iVar6 + 4);
      iVar5 = iVar5 + -1;
      *(int *)((int)local_53c + iVar6 + 0x48) = iVar10;
      iVar6 = iVar6 + 4;
    } while (iVar5 != 0);
  }
  uVar9 = 0;
  do {
    iVar5 = *param_1;
    param_1 = param_1 + 1;
    if (iVar5 != 0) {
      uVar15 = local_53c[iVar5 + 0x10];
      local_480[uVar15] = uVar9;
      local_53c[iVar5 + 0x10] = uVar15 + 1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < param_2);
  uVar9 = local_53c[uVar13 + 0x10];
  local_56c = local_480;
  uVar15 = 0;
  uVar19 = 0;
  local_560 = 0;
  iVar5 = -local_574;
  local_53c[0x10] = 0;
  local_570 = -1;
  local_4bc = 0;
  local_548 = 0;
  if ((int)local_578 <= (int)uVar13) {
    local_558 = local_53c + local_578;
    do {
      uVar14 = *local_558;
      uVar3 = uStack_568;
      while (uStack_568 = uVar3, uVar14 != 0) {
        (*(ushort *)((uchar *)&uStack_568 + 2)) = (undefined2)((uint)uVar3 >> 0x10);
        local_554 = uVar14 - 1;
        local_550 = iVar5 + local_574;
        if (local_550 < (int)local_578) {
          do {
            iVar5 = iVar5 + local_574;
            iVar10 = local_570 + 1;
            local_550 = local_550 + local_574;
            uVar15 = uVar13 - iVar5;
            if (local_574 < uVar13 - iVar5) {
              uVar15 = local_574;
            }
            uVar16 = local_578 - iVar5;
            uVar19 = 1 << ((byte)uVar16 & 0x1f);
            if ((uVar14 < uVar19) &&
               (iVar6 = uVar19 + (-1 - local_554), puVar7 = local_558, uVar16 < uVar15)) {
              while (uVar16 = uVar16 + 1, uVar16 < uVar15) {
                if ((uint)(iVar6 * 2) <= puVar7[1]) break;
                iVar6 = iVar6 * 2 - puVar7[1];
                puVar7 = puVar7 + 1;
              }
            }
            uVar19 = 1 << ((byte)uVar16 & 0x1f);
            iVar6 = ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_8 + 0x28)), __typeof__(uVar19 + 1), __typeof__(8)))(**(code **)(param_8 + 0x20)))(*(undefined4 *)(param_8 + 0x28),uVar19 + 1,8);
            if (iVar6 == 0) {
              if (iVar10 != 0) {
                FUN_00538770(local_4bc,param_8);
              }
              return 0xfffffffc;
            }
            local_548 = iVar6 + 8;
            puVar7 = (uint *)(iVar6 + 4);
            *param_6 = local_548;
            *puVar7 = 0;
            local_53c[local_570 + 0x21] = local_548;
            if (iVar10 != 0) {
              local_53c[local_570 + 0x11] = local_560;
              uVar15 = local_53c[local_570 + 0x20];
              uVar17 = local_560 >> ((char)iVar5 - (char)local_574 & 0x1fU);
              uStack_568 = CONCAT31(CONCAT21((*(ushort *)((uchar *)&uStack_568 + 2)),(char)local_574),(byte)uVar16);
              *(undefined4 *)(uVar15 + uVar17 * 8) = uStack_568;
              *(uint *)(uVar15 + 4 + uVar17 * 8) = local_548;
              uStack_564 = local_548;
            }
            param_6 = puVar7;
            local_570 = iVar10;
          } while (local_550 < (int)local_578);
          uVar15 = local_560;
        }
        bVar4 = (byte)iVar5;
        uVar2 = CONCAT21((*(ushort *)((uchar *)&uStack_568 + 2)),(char)local_578 - bVar4);
        if (local_56c < local_480 + uVar9) {
          uStack_564 = *local_56c;
          if (uStack_564 < param_3) {
            cVar12 = (-(uStack_564 < 0x100) & 0xa0U) + 0x60;
          }
          else {
            iVar10 = (uStack_564 - param_3) * 4;
            cVar12 = *(char *)(iVar10 + param_5) + 'P';
            uStack_564 = *(uint *)(iVar10 + param_4);
          }
          uStack_568 = CONCAT31(uVar2,cVar12);
          local_56c = local_56c + 1;
        }
        else {
          uStack_568 = CONCAT31(uVar2,0xc0);
        }
        iVar10 = 1 << ((char)local_578 - bVar4 & 0x1f);
        uVar14 = uVar15 >> (bVar4 & 0x1f);
        if (uVar14 < uVar19) {
          puVar11 = (undefined4 *)(local_548 + uVar14 * 8);
          do {
            uVar14 = uVar14 + iVar10;
            *puVar11 = uStack_568;
            puVar11[1] = uStack_564;
            puVar11 = puVar11 + iVar10 * 2;
          } while (uVar14 < uVar19);
          uVar15 = local_560;
        }
        uVar16 = 1 << ((char)local_578 - 1U & 0x1f);
        uVar14 = uVar15 & uVar16;
        while (uVar14 != 0) {
          uVar15 = uVar15 ^ uVar16;
          uVar16 = uVar16 >> 1;
          uVar14 = uVar15 & uVar16;
        }
        uVar15 = uVar15 ^ uVar16;
        puVar7 = local_53c + local_570 + 0x10;
        uVar14 = local_554;
        uVar3 = uStack_568;
        local_560 = uVar15;
        if (((1 << (bVar4 & 0x1f)) - 1U & uVar15) != *puVar7) {
          do {
            iVar5 = iVar5 - local_574;
            local_570 = local_570 + -1;
            puVar1 = puVar7 + -1;
            puVar7 = puVar7 + -1;
          } while (((1 << ((byte)iVar5 & 0x1f)) - 1U & uVar15) != *puVar1);
        }
      }
      local_578 = local_578 + 1;
      local_558 = local_558 + 1;
    } while ((int)local_578 <= (int)uVar13);
  }
  if ((iVar18 == 0) || (uVar13 == 1)) {
    return 0;
  }
  return 0xfffffffb;
#undef local_578
#undef local_574
#undef local_570
#undef local_56c
#undef uStack_568
#undef uStack_564
#undef local_560
#undef local_558
#undef local_554
#undef local_550
#undef local_548
#undef local_53c
#undef local_4bc
#undef local_480
}
