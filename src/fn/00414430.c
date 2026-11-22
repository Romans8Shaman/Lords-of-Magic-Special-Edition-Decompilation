/* Rebuilt from lomse.exe FUN_00414430 @ 0x00414430 (1375 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579458 (*(undefined *)0x00579458)
#define DAT_005aa78c (*(undefined4 *)0x005aa78c)
#define DAT_005aa850 (*(undefined4 *)0x005aa850)
#define DAT_005aad68 (*(undefined4 *)0x005aad68)
#define DAT_005aae2c (*(undefined4 *)0x005aae2c)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_00413180 ((int (__thiscall *)(void *, int))0x00413180)
#define FUN_004142e0 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4 *))0x004142e0)
#define FUN_00415c20 ((undefined4 (__thiscall *)(void *, int *, int))0x00415c20)
#define FUN_0045a1b0 ((undefined4 (__fastcall *)(undefined4 *))0x0045a1b0)
#define FUN_0045a260 ((undefined4 (__thiscall *)(void *, int, int, int, undefined4, int *, int *))0x0045a260)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004e7300 ((undefined4 (__fastcall *)(int))0x004e7300)
#define FUN_004e7400 ((undefined4 (__thiscall *)(void *, int, int *, int *, int))0x004e7400)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_005291e0 ((uint (__fastcall *)(int))0x005291e0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00414430 1
void __fastcall rb_00414430(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_44;
  typedef int * _t_piStack_40;
  typedef int _t_iStack_3c;
  typedef int * _t_piStack_38;
  typedef int _t_local_34;
  typedef int _t_iStack_30;
  typedef int _t_iStack_2c;
  typedef int _t_iStack_28;
  typedef int _t_iStack_24;
  typedef uint _t_uStack_20;
  typedef int _t_iStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef int _t_iStack_10;
#define iStack_44 (*(_t_iStack_44 *)(_fr + 0x4))
#define piStack_40 (*(_t_piStack_40 *)(_fr + 0x8))
#define iStack_3c (*(_t_iStack_3c *)(_fr + 0xc))
#define piStack_38 (*(_t_piStack_38 *)(_fr + 0x10))
#define local_34 (*(_t_local_34 *)(_fr + 0x14))
#define iStack_30 (*(_t_iStack_30 *)(_fr + 0x18))
#define iStack_2c (*(_t_iStack_2c *)(_fr + 0x1c))
#define iStack_28 (*(_t_iStack_28 *)(_fr + 0x20))
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0x24))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x28))
#define iStack_1c (*(_t_iStack_1c *)(_fr + 0x2c))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x30))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x34))
#define iStack_10 (*(_t_iStack_10 *)(_fr + 0x38))

  iVar5 = 0;
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if ((puVar3 != (undefined *)0x0) && ((puVar3[0x15d8] & 2) != 0)) {
    FUN_00415c20(param_1,(int *)0x0,-1);
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(&DAT_005aa78c)))(**(code **)(DAT_005aa78c + 0x3c)))(&DAT_005aa78c);
    if ((param_1[0x12] == iVar1) && (0 < param_1[0x13])) {
      piVar4 = &DAT_005aa850;
      piVar6 = param_1 + 0x31;
      do {
        iVar5 = iVar5 + 1;
        piVar7 = piVar6;
        piVar8 = piVar4;
        for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        piVar6 = piVar6 + 0x13;
        piVar4 = piVar4 + 0x13;
      } while (iVar5 < param_1[0x13]);
    }
    iVar1 = ((undefined4 (__thiscall *)(__typeof__(&DAT_005aad68)))(**(code **)(DAT_005aad68 + 0x3c)))(&DAT_005aad68);
    if ((param_1[0x12] == iVar1) && (iVar1 = 0, 0 < param_1[0x13])) {
      piVar4 = &DAT_005aae2c;
      piVar6 = param_1 + 0x31;
      do {
        iVar1 = iVar1 + 1;
        piVar7 = piVar6;
        piVar8 = piVar4;
        for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        piVar6 = piVar6 + 0x13;
        piVar4 = piVar4 + 0x13;
      } while (iVar1 < param_1[0x13]);
    }
  }
  iVar1 = 0;
  if (0 < param_1[0x13]) {
    piVar6 = param_1 + 0x31;
    do {
      FUN_005291e0((int)piVar6);
      piVar6 = piVar6 + 0x13;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[0x13]);
  }
  FUN_004142e0(param_1,&iStack_1c,&iStack_18);
  iStack_24 = 0;
  FUN_0045a1b0((undefined4 *)&DAT_00579458);
  FUN_004e7300((int)param_1);
  iStack_44 = 0;
  if (0 < param_1[0x13]) {
    piStack_40 = param_1 + 0x31;
    do {
      FUN_00521e00(piStack_40);
      uStack_20 = FUN_005291e0((int)piStack_40);
      if (uStack_20 == 0) {
        local_34 = 1;
      }
      else {
        local_34 = *(int *)(uStack_20 + 0x44);
      }
      iStack_3c = 0;
      if (0 < local_34) {
        piStack_38 = (int *)(uStack_20 + 0x2c);
        do {
          piVar6 = (int *)0x0;
          puVar2 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
          if (puVar2 != (undefined4 *)0x0) {
            piVar6 = FUN_00411610(puVar2);
          }
          if (piVar6 != (int *)0x0) {
            iStack_30 = 0xf;
            piVar4 = param_1;
            piVar7 = piVar6;
            for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            piVar6[0xb] = 0;
            piVar6[0x11] = param_1[0x11];
            piVar6[0x12] = param_1[0x12];
            piVar6[0x13] = param_1[0x13];
            piVar6[0x14] = param_1[0x14];
            piVar6[0x15] = param_1[0x15];
            piVar6[0x16] = param_1[0x16];
            piVar6[0x17] = param_1[0x17];
            piVar6[0x18] = param_1[0x18];
            piVar6[0x19] = param_1[0x19];
            piVar4 = param_1 + 0x1a;
            piVar7 = piVar6 + 0x1a;
            for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            piVar6[0x30] = param_1[0x30];
            piVar4 = piVar6 + 0x31;
            do {
              piVar7 = (int *)(((int)param_1 - (int)piVar6) + (int)piVar4);
              piVar8 = piVar4;
              for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
                *piVar8 = *piVar7;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              }
              iStack_30 = iStack_30 + -1;
              piVar4 = piVar4 + 0x13;
            } while (iStack_30 != 0);
            piVar6[0x14e] = param_1[0x14e];
            piVar6[0x14f] = param_1[0x14f];
            piVar6[0x150] = param_1[0x150];
            piVar6[0x151] = param_1[0x151];
            piVar6[0x152] = param_1[0x152];
            piVar6[0x153] = param_1[0x153];
            piVar6[0x154] = param_1[0x154];
            piVar6[0x155] = param_1[0x155];
            piVar6[0x156] = param_1[0x156];
            piVar6[0x157] = param_1[0x157];
            piVar6[0x158] = param_1[0x158];
            piVar6[0x159] = param_1[0x159];
            piVar4 = param_1 + 0x15a;
            piVar7 = piVar6 + 0x15a;
            for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            piVar6[0x163] = param_1[0x163];
            piVar6[0x164] = param_1[0x164];
            piVar6[0x165] = param_1[0x165];
            piVar6[0x166] = param_1[0x166];
            piVar6[0x167] = param_1[0x167];
            piVar6[0x168] = param_1[0x168];
            piVar6[0x169] = param_1[0x169];
            piVar6[0x16a] = param_1[0x16a];
            *(char *)(piVar6 + 0x16b) = (char)param_1[0x16b];
            piVar6[0x16c] = param_1[0x16c];
            piVar6[0x16d] = param_1[0x16d];
            piVar6[0x16e] = param_1[0x16e];
            piVar6[0x16f] = param_1[0x16f];
            piVar6[0x170] = param_1[0x170];
            piVar6[0x171] = param_1[0x171];
            *(char *)(piVar6 + 0x172) = (char)param_1[0x172];
            piVar6[0x173] = param_1[0x173];
            *(char *)(piVar6 + 0x174) = (char)param_1[0x174];
            piVar6[0x175] = param_1[0x175];
            iVar1 = param_1[0x176];
            *(undefined1 *)(piVar6 + 0x16b) = (undefined1)iStack_44;
            *(char *)(piVar6 + 0x176) = (char)iVar1;
            piVar6[10] = -1;
            piVar6[0xf] = 0;
            piVar6[0x13] = 1;
            piVar4 = piStack_40;
            piVar7 = piVar6 + 0x31;
            for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            iVar1 = 1;
            if (1 < param_1[0x13]) {
              piVar4 = piVar6 + 0x4b;
              do {
                piVar4[-1] = 0;
                *piVar4 = 0;
                piVar4[-2] = 0;
                iVar1 = iVar1 + 1;
                piVar4 = piVar4 + 0x13;
              } while (iVar1 < param_1[0x13]);
            }
            if (uStack_20 == 0) {
              piVar6[0x32] = piStack_40[1];
            }
            else {
              piVar6[0x32] = piStack_38[-6];
              piVar6[0x37] = *piStack_38;
              piVar6[0x36] = 0;
              if (0 < iStack_3c) {
                piVar6[0x38] = 0;
              }
            }
            piVar6[0x14] = 0;
            iStack_28 = iStack_1c;
            iStack_2c = iStack_18;
            FUN_004e7400(param_1,iStack_44,&iStack_10,&iStack_14,0);
            FUN_0045a260(&DAT_00579458,iStack_44,iStack_10,iStack_14,piVar6[0x11],&iStack_28,
                         &iStack_2c);
            iVar1 = iStack_28;
            iVar5 = iStack_2c;
            puVar3 = FUN_004c6fc0();
            iVar1 = FUN_004a51c0(puVar3,iVar1,iVar5);
            iVar1 = FUN_00413180(piVar6,iVar1);
            piVar6[7] = iVar1;
            puVar3 = FUN_004c6fc0();
            FUN_004a7d50(puVar3,piVar6,iVar1);
            iStack_24 = iStack_24 + 1;
          }
          iStack_3c = iStack_3c + 1;
          piStack_38 = piStack_38 + 1;
        } while (iStack_3c < local_34);
      }
      iStack_44 = iStack_44 + 1;
      piStack_40 = piStack_40 + 0x13;
    } while (iStack_44 < param_1[0x13]);
  }
  return;
#undef iStack_44
#undef piStack_40
#undef iStack_3c
#undef piStack_38
#undef local_34
#undef iStack_30
#undef iStack_2c
#undef iStack_28
#undef iStack_24
#undef uStack_20
#undef iStack_1c
#undef iStack_18
#undef iStack_14
#undef iStack_10
}
