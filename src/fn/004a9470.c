/* Rebuilt from lomse.exe FUN_004a9470 @ 0x004a9470 (1444 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055caf0 (*(undefined4 *)0x0055caf0)
#define DAT_0055cb10 (*(undefined4 *)0x0055cb10)
#define DAT_005838a4 (*(int *)0x005838a4)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005aec64 (*(undefined *)0x005aec64)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_0046ba20 ((undefined4 (__stdcall *)(void))0x0046ba20)
#define FUN_004a4be0 ((int (__thiscall *)(void *, undefined4))0x004a4be0)
#define FUN_004a4f20 ((undefined4 (__thiscall *)(void *, int, int, int))0x004a4f20)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define FUN_004a9ca0 ((undefined4 (__thiscall *)(void *, int))0x004a9ca0)
#define FUN_004aaf50 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004aaf50)
#define FUN_004aafe0 ((undefined4 (__thiscall *)(void *, int *, undefined2 *, undefined4 *))0x004aafe0)
#define FUN_004c5ef0 ((undefined4 (__thiscall *)(void *, int, int))0x004c5ef0)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_00508f10 ((undefined4 (__thiscall *)(void *, int))0x00508f10)
#define FUN_00509280 ((int * (__thiscall *)(void *, int, int))0x00509280)
#define FUN_00509420 ((undefined4 (__thiscall *)(void *, undefined4))0x00509420)
#define FUN_00509570 ((undefined4 (__thiscall *)(void *, int *))0x00509570)
#define FUN_00519a10 ((undefined4 (__fastcall *)(int *))0x00519a10)
#define FUN_00539eb0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *))0x00539eb0)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_00474de0 (*(undefined *)0x00474de0) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_bad_coordinates_0055cbd0 (*(char (*)[])0x0055cbd0)

#define LOM_SELF_004a9470 1
undefined4 __fastcall rb_004a9470(void *param_1)

{
  void *this;
  undefined4 fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *pfVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uchar _fr[0x668] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_65c;
  typedef int _t_iStack_658;
  typedef int _t_iStack_654;
  typedef int _t_iStack_650;
  typedef int _t_iStack_64c;
  typedef int _t_iStack_648;
  typedef undefined4 * _t_pfStack_644;
  typedef int _t_aiStack_62c[8];
  typedef short _t_asStack_60c[256];
  typedef undefined4 _t_afStack_40c[256];
#define iStack_65c (*(_t_iStack_65c *)(_fr + 0x4))
#define iStack_658 (*(_t_iStack_658 *)(_fr + 0x8))
#define iStack_654 (*(_t_iStack_654 *)(_fr + 0xc))
#define iStack_650 (*(_t_iStack_650 *)(_fr + 0x10))
#define iStack_64c (*(_t_iStack_64c *)(_fr + 0x14))
#define iStack_648 (*(_t_iStack_648 *)(_fr + 0x18))
#define pfStack_644 (*(_t_pfStack_644 *)(_fr + 0x1c))
#define aiStack_62c (*(_t_aiStack_62c *)(_fr + 0x34))
#define asStack_60c (*(_t_asStack_60c *)(_fr + 0x54))
#define afStack_40c (*(_t_afStack_40c *)(_fr + 0x254))

  if (*(int *)((int)param_1 + 0xa8) != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)param_1 + 0xbc) * *(int *)((int)param_1 + 0xb8) * -8
    ;
    if (*(int *)((int)param_1 + 0xa8) != 0) {
      Ordinal_403(*(int *)((int)param_1 + 0xa8),s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  iVar2 = Ordinal_401(*(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * 8,
                      s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *(int *)((int)param_1 + 0xa8) = iVar2;
  uVar4 = 0;
  if (iVar2 != 0) {
    DAT_005838a4 = DAT_005838a4 + *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * 8;
    if (*(int *)((int)param_1 + 0xac) != 0) {
      DAT_005838a4 = DAT_005838a4 +
                     *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * -0x10;
      iVar2 = *(int *)((int)param_1 + 0xac);
      if (iVar2 != 0) {
        FUN_00539eb0(iVar2,0x10,*(int *)(iVar2 + -4),FUN_0046ba20);
        if (iVar2 + -4 != 0) {
          Ordinal_403(iVar2 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
      }
    }
    iVar2 = *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc);
    piVar3 = (int *)Ordinal_401(iVar2 * 0x10 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    if (piVar3 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = piVar3 + 1;
      *piVar3 = iVar2;
      FUN_00539ff0(piVar11,0x10,iVar2,&LAB_00474de0,FUN_0046ba20);
    }
    *(int **)((int)param_1 + 0xac) = piVar11;
    if (piVar11 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      DAT_005838a4 = DAT_005838a4 +
                     *(int *)((int)param_1 + 0xb8) * *(int *)((int)param_1 + 0xbc) * 0x10;
      iStack_65c = 0;
      if (0 < *(int *)((int)param_1 + 0xbc)) {
        do {
          iVar2 = *(int *)((int)param_1 + 0xb8);
          iVar12 = 0;
          if (0 < iVar2) {
            do {
              iVar13 = iStack_65c * iVar2 + iVar12;
              iVar5 = FUN_004a5170(param_1,iVar12 + *(int *)((int)param_1 + 0xb0),
                                   iStack_65c + *(int *)((int)param_1 + 0xb4));
              iVar2 = *(int *)((int)param_1 + 0x54);
              iVar8 = *(int *)((int)param_1 + 0xa8);
              iVar5 = iVar5 * 8;
              *(undefined4 *)(iVar8 + iVar13 * 8) = *(undefined4 *)(iVar2 + iVar5);
              *(undefined4 *)(iVar8 + 4 + iVar13 * 8) = *(undefined4 *)(iVar2 + 4 + iVar5);
              iVar2 = (int)*(short *)(*(int *)((int)param_1 + 0x54) + iVar5);
              if ((iVar2 < 0) || (*(int *)((int)param_1 + 0x230) <= iVar2)) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                puVar6 = (undefined4 *)(iVar2 * 0x10 + *(int *)((int)param_1 + 0x22c));
              }
              if (puVar6 == (undefined4 *)0x0) {
                FUN_005047d0(s_bad_coordinates_0055cbd0);
              }
              puVar14 = (undefined4 *)(iVar13 * 0x10 + *(int *)((int)param_1 + 0xac));
              iVar12 = iVar12 + 1;
              *puVar14 = *puVar6;
              puVar14[1] = puVar6[1];
              puVar14[2] = puVar6[2];
              puVar14[3] = puVar6[3];
              iVar2 = *(int *)((int)param_1 + 0xb8);
            } while (iVar12 < iVar2);
          }
          iStack_65c = iStack_65c + 1;
        } while (iStack_65c < *(int *)((int)param_1 + 0xbc));
      }
      FUN_004a4be0(param_1,&DAT_005aec64);
      iVar2 = FUN_004a4f20(param_1,*(int *)((int)param_1 + 0xb8) << 4,
                           *(int *)((int)param_1 + 0xbc) << 4,1);
      uVar4 = 0;
      if (iVar2 != 0) {
        *(undefined4 *)((int)param_1 + 8) = 1;
        iStack_654 = 0;
        if (0 < *(int *)((int)param_1 + 0xbc)) {
          do {
            iStack_64c = iStack_654 * *(int *)((int)param_1 + 0xb8);
            iStack_658 = 0;
            if (0 < *(int *)((int)param_1 + 0xb8)) {
              iStack_650 = iStack_64c * 8;
              iStack_64c = iStack_64c * 0x10;
              do {
                FUN_004aafe0(param_1,(int *)(iStack_64c + *(int *)((int)param_1 + 0xac)),asStack_60c
                             ,afStack_40c);
                iStack_65c = 0;
                pfStack_644 = afStack_40c;
                psVar9 = asStack_60c;
                while( true ) {
                  pfVar7 = pfStack_644 + 0x10;
                  psVar10 = psVar9 + 0x10;
                  iStack_648 = 0x10;
                  iVar2 = iStack_658 << 4;
                  do {
                    iVar12 = FUN_004a5170(param_1,iVar2,iStack_65c + iStack_654 * 0x10);
                    iVar12 = iVar12 * 8;
                    piVar3 = (int *)FUN_00509420((void *)((int)param_1 + 0xd8),(int)*psVar9);
                    uVar4 = FUN_00509570((void *)((int)param_1 + 0xd8),piVar3);
                    iVar2 = iVar2 + 1;
                    psVar9 = psVar9 + 1;
                    *(short *)(*(int *)((int)param_1 + 0x54) + iVar12) = (short)uVar4;
                    *(undefined2 *)(*(int *)((int)param_1 + 0x54) + 2 + iVar12) =
                         *(undefined2 *)(iStack_650 + 2 + *(int *)((int)param_1 + 0xa8));
                    fVar1 = *pfStack_644;
                    pfStack_644 = pfStack_644 + 1;
                    iStack_648 = iStack_648 + -1;
                    *(undefined4 *)(*(int *)((int)param_1 + 0x54) + 4 + iVar12) = fVar1;
                  } while (iStack_648 != 0);
                  iStack_65c = iStack_65c + 1;
                  if (0xf < iStack_65c) break;
                  pfStack_644 = pfVar7;
                  psVar9 = psVar10;
                }
                iStack_658 = iStack_658 + 1;
                iStack_64c = iStack_64c + 0x10;
                iStack_650 = iStack_650 + 8;
              } while (iStack_658 < *(int *)((int)param_1 + 0xb8));
            }
            iStack_654 = iStack_654 + 1;
          } while (iStack_654 < *(int *)((int)param_1 + 0xbc));
        }
        iStack_65c = 0;
        iStack_658 = 0;
        if (0 < *(int *)((int)param_1 + 0x60)) {
          do {
            iVar2 = 0;
            if (0 < *(int *)((int)param_1 + 0x5c)) {
              this = (void *)((int)param_1 + 0xd8);
              do {
                iVar8 = FUN_00508f10(this,(int)*(short *)(*(int *)((int)param_1 + 0x54) +
                                                         iStack_658 * 8));
                iVar12 = 0;
                do {
                  iVar5 = *(int *)((int)&DAT_0055caf0 + iVar12) + iVar2;
                  if ((((iVar5 < 1) || (*(int *)((int)param_1 + 0x5c) + -1 <= iVar5)) ||
                      (iVar13 = *(int *)((int)&DAT_0055cb10 + iVar12) + iStack_65c, iVar13 < 1)) ||
                     (*(int *)((int)param_1 + 0x60) + -1 <= iVar13)) {
                    iVar5 = iStack_658;
                  }
                  else {
                    iVar5 = FUN_004a5170(param_1,iVar5,iVar13);
                  }
                  iVar13 = iVar12 + 4;
                  *(int *)((int)aiStack_62c + iVar12) =
                       (int)*(short *)(*(int *)((int)param_1 + 0x54) + iVar5 * 8);
                  iVar12 = iVar13;
                } while (iVar13 < 0x20);
                piVar3 = FUN_00509280(this,iVar8,(int)aiStack_62c);
                if ((piVar3 == (int *)0x0) || (*piVar3 < 1)) {
                  piVar3 = (int *)FUN_00509420(this,iVar8);
                }
                uVar4 = FUN_00509570(this,piVar3);
                iVar2 = iVar2 + 1;
                *(short *)(*(int *)((int)param_1 + 0x54) + iStack_658 * 8) = (short)uVar4;
                iStack_658 = iStack_658 + 1;
              } while (iVar2 < *(int *)((int)param_1 + 0x5c));
            }
            iStack_65c = iStack_65c + 1;
          } while (iStack_65c < *(int *)((int)param_1 + 0x60));
        }
        iVar2 = 0;
        if (0 < *(int *)((int)param_1 + 0x68)) {
          do {
            iVar12 = iVar2 * 8;
            iVar8 = iVar2 * 8;
            iVar2 = iVar2 + 1;
            *(uint *)(*(int *)((int)param_1 + 100) + 4 + iVar8) =
                 *(uint *)(*(int *)((int)param_1 + 100) + 4 + iVar12) | 0xff;
          } while (iVar2 < *(int *)((int)param_1 + 0x68));
        }
        FUN_004aaf50(param_1,1,1,1);
        *(undefined4 *)((int)param_1 + 0x14) = 0;
        uVar4 = FUN_00519a10(&DAT_005876d0);
        FUN_004a9ca0(param_1,1);
        FUN_004c5ef0(&DAT_005aef04,*(int *)((int)param_1 + 0x6c),*(int *)((int)param_1 + 0x70));
      }
    }
  }
  return uVar4;
#undef iStack_65c
#undef iStack_658
#undef iStack_654
#undef iStack_650
#undef iStack_64c
#undef iStack_648
#undef pfStack_644
#undef aiStack_62c
#undef asStack_60c
#undef afStack_40c
}
