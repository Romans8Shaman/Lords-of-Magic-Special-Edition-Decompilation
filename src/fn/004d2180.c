/* Rebuilt from lomse.exe FUN_004d2180 @ 0x004d2180 (2353 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py, then hand-fixed (g208).
 * Behaviour-match target, not byte-match.
 *
 * Hand fixes vs src/gen:
 * - FUN_004d3110 is __thiscall/__fastcall(this, size) with stdcall purge 4; edx is unused
 *   (the original never reads edx). Ghidra passed leftover iStack_28 / an uninitialised
 *   edx local as the second arg; that uninit read is clang UB (-O2 can delete the tail).
 *   Calls now pass edx=0.
 * - uStack_8 is a type tag (0, then 7 on a successful 4d3110), not an EH cookie.
 * - The 16-byte record init loop writes uStack_8 / piStack_4 as the asm does
 *   ([esp+0x38] / [esp+0x3c]). The asm reads piStack_4 uninitialised; we zero it
 *   so clang does not treat the later stores as UB. Those four dwords are overwritten
 *   by the three list-fill loops when the total count is filled.
 */
#include "lom.h"

#define DAT_0055e44c (*(undefined1 *)0x0055e44c)
#define FUN_004d3110 ((int (__fastcall *)(int, undefined4, undefined4))0x004d3110)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004d5c10 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004d5c10)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define PTR_DAT_0055db20 (*(void * *)0x0055db20)
#define PTR_op_pop_0055db24 (*(void * *)0x0055db24)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_GSDEBUG_DAT_0055e440 (*(char (*)[])0x0055e440)

#define LOM_SELF_004d2180 1
void __fastcall
rb_004d2180(undefined4 *param_1,undefined4 unused_reg_1,int *unused_stack_0,int *unused_stack_4)

{
  undefined **ppuVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  int *piVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  char *pcVar17;
  byte *pbVar18;
  char *pcVar19;
  byte *pbVar20;
  bool bVar21;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_30;
  typedef int _t_iStack_2c;
  typedef int _t_iStack_28;
  typedef int _t_iStack_24;
  typedef int _t_iStack_1c;
  typedef undefined ** _t_ppuStack_18;
  typedef int _t_iStack_14;
  typedef int * _t_piStack_c;
  typedef undefined4 _t_uStack_8;
  typedef int * _t_piStack_4;
#define iStack_30 (*(_t_iStack_30 *)(_fr + 0x0))
#define iStack_2c (*(_t_iStack_2c *)(_fr + 0x4))
#define iStack_28 (*(_t_iStack_28 *)(_fr + 0x8))
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0xc))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x14))
#define ppuStack_18 (*(_t_ppuStack_18 *)(_fr + 0x18))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x1c))
#define piStack_c (*(_t_piStack_c *)(_fr + 0x24))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x28))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x2c))
  
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  uVar13 = 0xffffffff;
  param_1[0x2a7] = 0;
  param_1[0x156] = 0;
  param_1[0x29a] = 4;
  param_1[0x21d] = 0;
  param_1[0x21a] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x29b] = 0;
  pcVar17 = &DAT_0055e44c;
  do {
    pcVar19 = pcVar17;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar19 = pcVar17 + 1;
    cVar12 = *pcVar17;
    pcVar17 = pcVar19;
  } while (cVar12 != '\0');
  uVar13 = ~uVar13;
  pcVar17 = pcVar19 + -uVar13;
  pcVar19 = (char *)(param_1 + 0x157);
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar19 = pcVar19 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar19 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar19 = pcVar19 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar17 = &DAT_0055e44c;
  do {
    pcVar19 = pcVar17;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar19 = pcVar17 + 1;
    cVar12 = *pcVar17;
    pcVar17 = pcVar19;
  } while (cVar12 != '\0');
  uVar13 = ~uVar13;
  pcVar17 = pcVar19 + -uVar13;
  pcVar19 = (char *)(param_1 + 0x198);
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar19 = pcVar19 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar19 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar19 = pcVar19 + 1;
  }
  FUN_004d5c10(param_1,s_GSDEBUG_DAT_0055e440);
  param_1[0x29] = 0;
  param_1[0x24] = 0;
  param_1[0x29e] = 0;
  param_1[0x298] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x156] = 0;
  param_1[0x23] = 1;
  iVar15 = 10;
  puVar10 = param_1;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 2;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  param_1[0x16] = 10000;
  param_1[0x19] = 200;
  param_1[0x1a] = 200;
  iVar15 = Ordinal_401(80000,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  param_1[0x14] = iVar15;
  if (iVar15 == 0) {
    param_1[0x16] = 0;
  }
  iVar15 = param_1[0x16];
  param_1[0x15] = iVar15;
  param_1[0x2a2] = iVar15 * 8;
  if (iVar15 != 0) {
    iVar15 = Ordinal_401(iVar15 * 8,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    param_1[0x21c] = iVar15;
    if (iVar15 == 0) {
      if (param_1[0x14] != 0) {
        Ordinal_403(param_1[0x14],s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      param_1[0x14] = 0;
      param_1[0x16] = 0;
      param_1[0x2a2] = 0;
    }
    param_1[0x2a5] = param_1[0x2a5] + param_1[0x16] * 8;
  }
  iVar15 = Ordinal_401(param_1[0x19] << 2,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  param_1[0x17] = iVar15;
  if (iVar15 == 0) {
    param_1[0x19] = 0;
  }
  iVar15 = param_1[0x19];
  iVar5 = 0;
  param_1[0x18] = iVar15;
  param_1[0x2a3] = iVar15 * 4;
  if (0 < iVar15) {
    do {
      iVar5 = iVar5 + 1;
      *(undefined4 *)(param_1[0x17] + -4 + iVar5 * 4) = 0;
    } while (iVar5 < (int)param_1[0x19]);
  }
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 20000;
  iVar15 = Ordinal_401(80000,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  param_1[0x20] = iVar15;
  if (iVar15 == 0) {
    param_1[0x1f] = 0;
  }
  param_1[0x21b] = 0x28;
  param_1[0x2a4] = param_1[0x2a4] + param_1[0x1f] * 4;
  iVar15 = 0;
  iStack_28 = 0;
  if (PTR_DAT_0055db20 != (undefined *)0x0) {
    ppuVar6 = &PTR_DAT_0055db20;
    do {
      ppuVar1 = ppuVar6 + 2;
      ppuVar6 = ppuVar6 + 2;
      iVar15 = iVar15 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
    iStack_28 = iVar15;
  }
  if (unused_stack_0 == (int *)0x0) {
    iVar15 = 0;
LAB_004d2417:
    iStack_30 = iVar15;
  }
  else {
    iVar15 = 0;
    iStack_30 = 0;
    piVar7 = unused_stack_0;
    if (*unused_stack_0 != 0) {
      do {
        piVar2 = piVar7 + 2;
        piVar7 = piVar7 + 2;
        iVar15 = iVar15 + 1;
      } while (*piVar2 != 0);
      goto LAB_004d2417;
    }
  }
  if (unused_stack_4 == (int *)0x0) {
    iVar15 = 0;
LAB_004d243e:
    iStack_24 = iVar15;
  }
  else {
    iVar15 = 0;
    iStack_24 = 0;
    piVar7 = unused_stack_4;
    if (*unused_stack_4 != 0) {
      do {
        piVar2 = piVar7 + 2;
        piVar7 = piVar7 + 2;
        iVar15 = iVar15 + 1;
      } while (*piVar2 != 0);
      goto LAB_004d243e;
    }
  }
  iVar15 = iStack_24 + iStack_30 + iStack_28;
  uStack_8 = 0;
  piStack_4 = (int *)0x0;
  piVar7 = (int *)FUN_004d3110((int)param_1,0,0x10);
  if (piVar7 != (int *)0x0) {
    param_1[0x2a0] = param_1[0x2a0] + 0x10;
    piVar7[1] = iVar15;
    if (iVar15 < 1) {
      *piVar7 = 0;
    }
    else {
      iVar5 = FUN_004d3110((int)param_1,0,iVar15 * 0x10);
      *piVar7 = iVar5;
      if (iVar5 == 0) goto LAB_004d24d0;
      param_1[0x2a0] = param_1[0x2a0] + iVar15 * 0x10;
    }
    iVar5 = param_1[0x1f];
    piVar7[3] = -1;
    piVar7[2] = iVar5;
    if (0 < iVar15) {
      iVar5 = 0;
      do {
        iVar11 = *piVar7;
        *(undefined4 *)(iVar11 + iVar5) = uStack_8;
        iVar5 = iVar5 + 0x10;
        iVar15 = iVar15 + -1;
        *(int **)(iVar11 + -0xc + iVar5) = piStack_4;
        iVar11 = *piVar7;
        *(undefined4 *)(iVar11 + -8 + iVar5) = uStack_8;
        *(int **)(iVar11 + -4 + iVar5) = piStack_4;
      } while (iVar15 != 0);
    }
    uStack_8 = 7;
    piStack_4 = piVar7;
  }
LAB_004d24d0:
  if ((char)uStack_8 != '\0') {
    piStack_c = piStack_4;
    if (0 < iStack_28) {
      ppuStack_18 = &PTR_op_pop_0055db24;
      iStack_2c = 0;
      iStack_14 = iStack_28;
      do {
        pbVar18 = ppuStack_18[-1];
        puVar10 = param_1 + 0x1d;
        puVar9 = (undefined4 *)param_1[0x1d];
        while (puVar9 != (undefined4 *)0x0) {
          pbVar20 = (byte *)puVar9[1];
          pbVar8 = pbVar18;
          do {
            bVar3 = *pbVar8;
            bVar21 = bVar3 < *pbVar20;
            if (bVar3 != *pbVar20) {
LAB_004d2546:
              iVar15 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_004d254b;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar8[1];
            bVar21 = bVar3 < pbVar20[1];
            if (bVar3 != pbVar20[1]) goto LAB_004d2546;
            pbVar8 = pbVar8 + 2;
            pbVar20 = pbVar20 + 2;
          } while (bVar3 != 0);
          iVar15 = 0;
LAB_004d254b:
          if (iVar15 == 0) {
            uVar16 = *puVar9;
            goto LAB_004d2629;
          }
          puVar10 = puVar9 + 2;
          if (-1 < iVar15) {
            puVar10 = puVar9 + 3;
          }
          puVar9 = (undefined4 *)*puVar10;
        }
        puVar9 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (puVar9 == (undefined4 *)0x0) {
          uVar16 = param_1[0x1f];
        }
        else {
          uVar13 = 0xffffffff;
          pbVar20 = pbVar18;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            bVar3 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar3 != 0);
          iVar15 = Ordinal_401(~uVar13,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          puVar9[1] = iVar15;
          if (iVar15 == 0) {
            Ordinal_403(puVar9,s_C__lomse_source_storm_h_00555130,0x3eb,0);
            uVar16 = 0;
          }
          else {
            param_1[0x2a4] = param_1[0x2a4] + ~uVar13 + 0x18;
            *(undefined4 **)(param_1[0x20] + param_1[0x1e] * 4) = puVar9;
            puVar9[2] = 0;
            puVar9[3] = 0;
            *puVar9 = param_1[0x1e];
            uVar13 = 0xffffffff;
            param_1[0x1e] = param_1[0x1e] + 1;
            puVar9[4] = 0;
            puVar9[5] = 0;
            do {
              pbVar20 = pbVar18;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pbVar20 = pbVar18 + 1;
              bVar3 = *pbVar18;
              pbVar18 = pbVar20;
            } while (bVar3 != 0);
            uVar13 = ~uVar13;
            pbVar18 = pbVar20 + -uVar13;
            pbVar20 = (byte *)puVar9[1];
            for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar18;
              pbVar18 = pbVar18 + 4;
              pbVar20 = pbVar20 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar20 = *pbVar18;
              pbVar18 = pbVar18 + 1;
              pbVar20 = pbVar20 + 1;
            }
            *puVar10 = puVar9;
            uVar16 = *puVar9;
          }
        }
LAB_004d2629:
        iStack_2c = iStack_2c + 0x10;
        iVar15 = *piStack_4;
        puVar4 = *ppuStack_18;
        ppuStack_18 = ppuStack_18 + 2;
        *(undefined4 *)(iVar15 + -0x10 + iStack_2c) = 5;
        *(undefined4 *)(iVar15 + -0xc + iStack_2c) = uVar16;
        iVar15 = *piStack_4;
        *(undefined4 *)(iVar15 + -8 + iStack_2c) = 9;
        iStack_14 = iStack_14 + -1;
        *(undefined **)(iVar15 + -4 + iStack_2c) = puVar4;
      } while (iStack_14 != 0);
    }
    if ((unused_stack_0 != (int *)0x0) && (0 < iStack_30)) {
      iStack_2c = iStack_28 << 4;
      iStack_1c = iStack_30;
      do {
        pbVar18 = (byte *)*unused_stack_0;
        puVar10 = param_1 + 0x1d;
        puVar9 = (undefined4 *)param_1[0x1d];
        while (puVar9 != (undefined4 *)0x0) {
          pbVar20 = (byte *)puVar9[1];
          pbVar8 = pbVar18;
          do {
            bVar3 = *pbVar8;
            bVar21 = bVar3 < *pbVar20;
            if (bVar3 != *pbVar20) {
LAB_004d26e0:
              iVar15 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_004d26e5;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar8[1];
            bVar21 = bVar3 < pbVar20[1];
            if (bVar3 != pbVar20[1]) goto LAB_004d26e0;
            pbVar8 = pbVar8 + 2;
            pbVar20 = pbVar20 + 2;
          } while (bVar3 != 0);
          iVar15 = 0;
LAB_004d26e5:
          if (iVar15 == 0) {
            uVar16 = *puVar9;
            goto LAB_004d27c8;
          }
          puVar10 = puVar9 + 2;
          if (-1 < iVar15) {
            puVar10 = puVar9 + 3;
          }
          puVar9 = (undefined4 *)*puVar10;
        }
        puVar9 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (puVar9 == (undefined4 *)0x0) {
          uVar16 = param_1[0x1f];
        }
        else {
          uVar13 = 0xffffffff;
          pbVar20 = pbVar18;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            bVar3 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar3 != 0);
          iVar15 = Ordinal_401(~uVar13,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          puVar9[1] = iVar15;
          if (iVar15 == 0) {
            Ordinal_403(puVar9,s_C__lomse_source_storm_h_00555130,0x3eb,0);
            uVar16 = 0;
          }
          else {
            param_1[0x2a4] = param_1[0x2a4] + ~uVar13 + 0x18;
            *(undefined4 **)(param_1[0x20] + param_1[0x1e] * 4) = puVar9;
            puVar9[2] = 0;
            puVar9[3] = 0;
            *puVar9 = param_1[0x1e];
            param_1[0x1e] = param_1[0x1e] + 1;
            uVar13 = 0xffffffff;
            puVar9[4] = 0;
            puVar9[5] = 0;
            do {
              pbVar20 = pbVar18;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pbVar20 = pbVar18 + 1;
              bVar3 = *pbVar18;
              pbVar18 = pbVar20;
            } while (bVar3 != 0);
            uVar13 = ~uVar13;
            pbVar18 = pbVar20 + -uVar13;
            pbVar20 = (byte *)puVar9[1];
            for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar18;
              pbVar18 = pbVar18 + 4;
              pbVar20 = pbVar20 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar20 = *pbVar18;
              pbVar18 = pbVar18 + 1;
              pbVar20 = pbVar20 + 1;
            }
            *puVar10 = puVar9;
            uVar16 = *puVar9;
          }
        }
LAB_004d27c8:
        iStack_2c = iStack_2c + 0x10;
        iVar15 = *piStack_4;
        iVar5 = unused_stack_0[1];
        unused_stack_0 = unused_stack_0 + 2;
        *(undefined4 *)(iVar15 + -0x10 + iStack_2c) = 5;
        *(undefined4 *)(iVar15 + -0xc + iStack_2c) = uVar16;
        iVar15 = *piStack_4;
        *(undefined4 *)(iVar15 + -8 + iStack_2c) = 9;
        iStack_1c = iStack_1c + -1;
        *(int *)(iVar15 + -4 + iStack_2c) = iVar5;
      } while (iStack_1c != 0);
    }
    if ((unused_stack_4 != (int *)0x0) && (iStack_1c = 0, 0 < iStack_24)) {
      unused_stack_0 = unused_stack_4;
      do {
        puVar10 = param_1 + 0x1d;
        pbVar18 = (byte *)*unused_stack_0;
        puVar9 = (undefined4 *)param_1[0x1d];
        while (puVar9 != (undefined4 *)0x0) {
          pbVar20 = (byte *)puVar9[1];
          pbVar8 = pbVar18;
          do {
            bVar3 = *pbVar8;
            bVar21 = bVar3 < *pbVar20;
            if (bVar3 != *pbVar20) {
LAB_004d2889:
              iVar15 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_004d288e;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar8[1];
            bVar21 = bVar3 < pbVar20[1];
            if (bVar3 != pbVar20[1]) goto LAB_004d2889;
            pbVar8 = pbVar8 + 2;
            pbVar20 = pbVar20 + 2;
          } while (bVar3 != 0);
          iVar15 = 0;
LAB_004d288e:
          if (iVar15 == 0) {
            uVar16 = *puVar9;
            goto LAB_004d296d;
          }
          puVar10 = puVar9 + 2;
          if (-1 < iVar15) {
            puVar10 = puVar9 + 3;
          }
          puVar9 = (undefined4 *)*puVar10;
        }
        puVar9 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (puVar9 == (undefined4 *)0x0) {
          uVar16 = param_1[0x1f];
        }
        else {
          uVar13 = 0xffffffff;
          pbVar20 = pbVar18;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            bVar3 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar3 != 0);
          iVar15 = Ordinal_401(~uVar13,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          puVar9[1] = iVar15;
          if (iVar15 == 0) {
            Ordinal_403(puVar9,s_C__lomse_source_storm_h_00555130,0x3eb,0);
            uVar16 = 0;
          }
          else {
            param_1[0x2a4] = param_1[0x2a4] + ~uVar13 + 0x18;
            *(undefined4 **)(param_1[0x20] + param_1[0x1e] * 4) = puVar9;
            puVar9[2] = 0;
            puVar9[3] = 0;
            *puVar9 = param_1[0x1e];
            uVar13 = 0xffffffff;
            param_1[0x1e] = param_1[0x1e] + 1;
            puVar9[4] = 0;
            puVar9[5] = 0;
            do {
              pbVar20 = pbVar18;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pbVar20 = pbVar18 + 1;
              bVar3 = *pbVar18;
              pbVar18 = pbVar20;
            } while (bVar3 != 0);
            uVar13 = ~uVar13;
            pbVar18 = pbVar20 + -uVar13;
            pbVar20 = (byte *)puVar9[1];
            for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)pbVar20 = *(undefined4 *)pbVar18;
              pbVar18 = pbVar18 + 4;
              pbVar20 = pbVar20 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar20 = *pbVar18;
              pbVar18 = pbVar18 + 1;
              pbVar20 = pbVar20 + 1;
            }
            *puVar10 = puVar9;
            uVar16 = *puVar9;
          }
        }
LAB_004d296d:
        iVar15 = *piStack_4;
        iVar5 = unused_stack_0[1];
        iVar11 = (iStack_30 + iStack_28 + iStack_1c) * 0x10;
        *(undefined4 *)(iVar15 + iVar11) = 5;
        *(undefined4 *)(iVar15 + 4 + iVar11) = uVar16;
        iVar15 = *piStack_4;
        *(undefined4 *)(iVar15 + 8 + iVar11) = 1;
        *(int *)(iVar15 + 0xc + iVar11) = iVar5;
        iStack_1c = iStack_1c + 1;
        unused_stack_0 = unused_stack_0 + 2;
      } while (iStack_1c < iStack_24);
    }
  }
  piStack_c[2] = 0;
  piStack_c[3] = param_1[0x1e] + -1;
  if (param_1[0x15] == 0) {
    param_1[0x24] = 3;
    FUN_004d4550(param_1);
    param_1[0x24] = 0;
    param_1[0x29] = 0;
  }
  else {
    iVar15 = param_1[0x14];
    iVar5 = param_1[0x15] + -1;
    param_1[0x15] = iVar5;
    *(undefined4 *)(iVar15 + iVar5 * 8) = uStack_8;
    *(int **)(iVar15 + 4 + iVar5 * 8) = piStack_4;
  }
  if ((int)param_1[0x15] < (int)param_1[0x16]) {
    iVar15 = param_1[0x15] + 1;
    param_1[0x15] = iVar15;
    cVar12 = (char)*(undefined4 *)(param_1[0x14] + -8 + iVar15 * 8);
    piStack_4 = *(int **)(param_1[0x14] + -4 + iVar15 * 8);
  }
  else {
    param_1[0x24] = 6;
    FUN_004d4550(param_1);
    cVar12 = '\0';
    param_1[0x24] = 0;
    param_1[0x29] = 0;
  }
  if (cVar12 == '\a') {
    if (param_1[0x18] != 0) {
      iVar15 = param_1[0x18] + -1;
      param_1[0x18] = iVar15;
      *(int **)(param_1[0x17] + iVar15 * 4) = piStack_4;
      return;
    }
    param_1[0x24] = 4;
  }
  else {
    param_1[0x24] = 0xe;
  }
  FUN_004d4550(param_1);
  param_1[0x24] = 0;
  param_1[0x29] = 0;
  return;
#undef iStack_30
#undef iStack_2c
#undef iStack_28
#undef iStack_24
#undef iStack_1c
#undef ppuStack_18
#undef iStack_14
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
