/* Rebuilt from lomse.exe FUN_00437930 @ 0x00437930 (1647 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cc9e8 (*(undefined *)0x005cc9e8)
#define DAT_005cca50 (*(int *)0x005cca50)
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define FUN_00420b80 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00420b80)
#define FUN_00437680 ((uint (__thiscall *)(void *, int))0x00437680)
#define FUN_00437760 ((undefined4 (__fastcall *)(void *))0x00437760)
#define FUN_004381d0 ((undefined4 (__fastcall *)(undefined4 *))0x004381d0)
#define FUN_00438230 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, uint))0x00438230)
#define FUN_004385d0 ((undefined4 (__thiscall *)(void *, int, uint, uint))0x004385d0)
#define FUN_0047be80 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0047be80)
#define FUN_0047bf30 ((undefined4 (__fastcall *)(int *))0x0047bf30)
#define FUN_0047bf70 ((undefined4 (__fastcall *)(int *))0x0047bf70)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004bbb70 ((undefined4 (__thiscall *)(void *, int *, int *))0x004bbb70)
#define FUN_004c50a0 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x004c50a0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_0051c170 ((undefined4 (__fastcall *)(int *))0x0051c170)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_005221f0 ((undefined4 (__stdcall *)(undefined4, undefined4))0x005221f0)
#define LAB_00437fa0 (*(undefined *)0x00437fa0) /* code label used as address */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_00437930 1
void __fastcall rb_00437930(void *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *this;
  int iVar13;
  uchar _fr[0x120] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 * _t_local_118;
  typedef int _t_local_114;
  typedef int _t_local_110;
  typedef int _t_local_108;
  typedef int _t_local_104;
  typedef LPCRITICAL_SECTION _t_local_100;
  typedef int _t_local_fc;
  typedef undefined4 _t_local_f8;
  typedef undefined4 _t_local_f4;
  typedef undefined4 _t_local_f0;
  typedef undefined4 _t_local_e8;
  typedef undefined4 _t_local_e4;
  typedef undefined4 _t_local_e0;
  typedef undefined4 _t_local_dc;
  typedef undefined4 _t_local_d8;
  typedef undefined4 _t_local_c;
  typedef undefined1 * _t_local_8;
  typedef void * _t_local_4;
#define local_118 (*(_t_local_118 *)(_fr + 0x0))
#define local_114 (*(_t_local_114 *)(_fr + 0x4))
#define local_110 (*(_t_local_110 *)(_fr + 0x8))
#define local_108 (*(_t_local_108 *)(_fr + 0x10))
#define local_104 (*(_t_local_104 *)(_fr + 0x14))
#define local_100 (*(_t_local_100 *)(_fr + 0x18))
#define local_fc (*(_t_local_fc *)(_fr + 0x1c))
#define local_f8 (*(_t_local_f8 *)(_fr + 0x20))
#define local_f4 (*(_t_local_f4 *)(_fr + 0x24))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x28))
#define local_e8 (*(_t_local_e8 *)(_fr + 0x30))
#define local_e4 (*(_t_local_e4 *)(_fr + 0x34))
#define local_e0 (*(_t_local_e0 *)(_fr + 0x38))
#define local_dc (*(_t_local_dc *)(_fr + 0x3c))
#define local_d8 (*(_t_local_d8 *)(_fr + 0x40))
#define local_c (*(_t_local_c *)(_fr + 0x10c))
#define local_8 (*(_t_local_8 *)(_fr + 0x110))
#define local_4 (*(_t_local_4 *)(_fr + 0x114))
  
  p_Var1 = (LPCRITICAL_SECTION)((int)param_1 + 0x28);
  local_100 = p_Var1;
  EnterCriticalSection(p_Var1);
  iVar10 = *(int *)((int)param_1 + 0x40);
  LeaveCriticalSection(p_Var1);
  if (iVar10 == 1) {
    return;
  }
  if (*(int *)((int)param_1 + 0x40) != 2) goto LAB_00437cf2;
  uVar4 = *(uint *)((int)param_1 + 0x50) & 0xff;
  if (uVar4 == 0) {
    puVar7 = (undefined4 *)((int)param_1 + 0x6c);
    FUN_004381d0(puVar7);
    local_118 = (undefined4 *)0xffffffff;
    local_110 = 0;
    if (0 < *(int *)((int)param_1 + 0x110)) {
      iVar12 = 0;
      iVar10 = -0x10;
      do {
        piVar5 = FUN_00485080(&DAT_005aa12c,*(int *)(iVar12 + *(int *)((int)param_1 + 0x10c)),0x2f);
        if (piVar5 != (int *)0x0) {
          iVar6 = FUN_0051c170(piVar5);
          if (iVar6 != 0) {
            iVar6 = *(int *)((int)param_1 + 0x10c);
            iVar11 = *(int *)(iVar12 + 8 + iVar6);
            if (iVar11 < 0x7ffffffe) {
              iVar13 = *(int *)(iVar12 + 0xc + iVar6);
              if (iVar13 < *(int *)((int)param_1 + 0x4c)) {
                uVar4 = FUN_00437680(param_1,(int)piVar5);
                FUN_00438230(puVar7,(int)piVar5,
                             *(undefined4 *)(iVar12 + 8 + *(int *)((int)param_1 + 0x10c)),
                             *(undefined4 *)((int)param_1 + 0x50),uVar4);
              }
              else if ((int)local_118 < 0) {
                local_118 = (undefined4 *)local_110;
                iVar10 = iVar12;
              }
              else {
                iVar9 = *(int *)(iVar10 + 8 + iVar6);
                if ((iVar11 < iVar9) ||
                   ((*(int *)(iVar10 + 0xc + iVar6) < iVar13 && (iVar11 == iVar9)))) {
                  local_118 = (undefined4 *)local_110;
                  iVar10 = iVar12;
                }
              }
            }
          }
        }
        local_110 = local_110 + 1;
        iVar12 = iVar12 + 0x10;
      } while (local_110 < *(int *)((int)param_1 + 0x110));
    }
    if ((int)local_118 < 0) {
      FUN_004385d0(puVar7,*(int *)((int)param_1 + 0x4c),*(uint *)((int)param_1 + 0x48),
                   *(uint *)((int)param_1 + 0x50));
    }
    else {
      puVar7 = FUN_00485080(&DAT_005aa12c,
                            *(int *)(*(int *)((int)param_1 + 0x10c) + (int)local_118 * 0x10),0x2f);
      uVar4 = FUN_00437680(param_1,(int)puVar7);
      if ((*(uint *)((int)param_1 + 0x50) & 0x1000) != 0) {
        iVar12 = 0;
        local_114 = -1;
        (*(uchar *)((uchar *)&local_114 + 0)) = 0xff;
        iVar10 = 9999;
        if (0 < (int)puVar7[0x13]) {
          do {
            if ((uVar4 & 1 << ((byte)iVar12 & 0x1f)) != 0) {
              iVar6 = FUN_005221f0(puVar7[10],iVar12);
              if (iVar6 < iVar10) {
                iVar10 = iVar6;
                local_114 = iVar12;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)puVar7[0x13]);
        }
        uVar4 = 1 << ((byte)local_114 & 0x1f);
      }
      iVar10 = FUN_004f6000(&DAT_005ae974,*(int *)((int)param_1 + 0x48));
      if (iVar10 != 0) {
        FUN_00420b80(puVar7,*(int *)(iVar10 + 0x1c),0x10040,uVar4,
                     *(undefined4 *)((int)param_1 + 0x48),0xffffffff,0);
      }
    }
  }
  else if (uVar4 == 1) {
    iVar10 = 0;
    local_114 = -1;
    local_118 = (undefined4 *)0x0;
    if (0 < *(int *)((int)param_1 + 0x110)) {
      iVar6 = 0;
      iVar12 = -0x10;
      do {
        puVar7 = FUN_00485080(&DAT_005aa12c,*(int *)(iVar6 + *(int *)((int)param_1 + 0x10c)),0x2f);
        if (puVar7 != (undefined4 *)0x0) {
          iVar11 = *(int *)(iVar6 + 8 + *(int *)((int)param_1 + 0x10c));
          if (iVar11 < 0x7ffffffe) {
            if (-1 < local_114) {
              if (*(int *)(iVar12 + 8 + *(int *)((int)param_1 + 0x10c)) <= iVar11)
              goto LAB_00437bda;
            }
            iVar12 = iVar6;
            local_118 = puVar7;
            local_114 = iVar10;
          }
        }
LAB_00437bda:
        iVar10 = iVar10 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar10 < *(int *)((int)param_1 + 0x110));
    }
    pvVar3 = DAT_005a7b78;
    uVar2 = *(undefined4 *)((int)param_1 + 0x48);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar12 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar12;
      iVar10 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar10 + iVar12 * 8) = 1;
      *(undefined4 *)(iVar10 + 4 + iVar12 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    uVar2 = *(undefined4 *)((int)param_1 + 100);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar12 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar12;
      iVar10 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar10 + iVar12 * 8) = 1;
      *(undefined4 *)(iVar10 + 4 + iVar12 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    if (local_118 == (undefined4 *)0x0) {
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) goto LAB_00437cb9;
      iVar12 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar12;
      iVar10 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar10 + iVar12 * 8) = 1;
      *(undefined4 *)(iVar10 + 4 + iVar12 * 8) = 0xffffffff;
    }
    else {
      uVar2 = local_118[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
LAB_00437cb9:
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar12 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar12;
        iVar10 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar10 + iVar12 * 8) = 1;
        *(undefined4 *)(iVar10 + 4 + iVar12 * 8) = uVar2;
      }
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)((int)param_1 + 0x5c),*(int **)((int)param_1 + 0x60));
  }
  *(undefined4 *)((int)param_1 + 0x40) = 0;
LAB_00437cf2:
  iVar10 = FUN_0047bf30((int *)&DAT_005cc9e8);
  if (((iVar10 == 0) && (iVar10 = FUN_0047bf70((int *)&DAT_005cc9e8), iVar10 == 0)) &&
     (DAT_005cca50 == 0)) {
    piVar5 = (int *)((int)param_1 + 0x44);
    local_108 = 0x24;
    iVar10 = FUN_004c50a0(param_1,piVar5,&local_108);
    while (iVar10 != 0) {
      iVar10 = *piVar5;
      if ((iVar10 < 0) || (0xf < iVar10)) {
        this = (undefined *)0x0;
      }
      else {
        this = &DAT_005af194 + iVar10 * 0x1d84;
      }
      if ((this != (undefined *)0x0) && (iVar10 = FUN_00437760(param_1), iVar10 != 0)) {
        local_118 = (undefined4 *)0x0;
        local_114 = 0;
        FUN_004fbed0(&DAT_005ae974,0);
        if (*(char *)((int)param_1 + 0x50) == '\0') {
          FUN_004bbb70(this,&local_fc,&local_104);
          puVar7 = FUN_00485080(&DAT_005aa12c,local_fc,0x2f);
          if (puVar7 != (undefined4 *)0x0) {
            piVar8 = puVar7 + local_104 * 0x13 + 0x31;
LAB_00437e2f:
            iVar10 = FUN_00521e00(piVar8);
            puVar7 = FUN_004fbed0(&DAT_005ae974,0);
            if (puVar7 != (undefined4 *)0x0) {
              do {
                if (puVar7[7] != *(int *)((int)param_1 + 0x68)) {
                  iVar12 = FUN_00521e00(puVar7 + 0x31);
                  if (iVar12 == iVar10) {
                    iVar11 = 0x21;
                  }
                  else {
                    iVar11 = 0;
                    iVar6 = 0;
                    piVar8 = (int *)(iVar10 + 0x1e8);
                    do {
                      if ((iVar6 < 0) || (0x1f < iVar6)) {
                        iVar13 = 0;
                      }
                      else {
                        iVar13 = *(int *)((iVar12 - iVar10) + (int)piVar8);
                      }
                      if ((iVar6 < 0) || (0x1f < iVar6)) {
                        iVar9 = 0;
                      }
                      else {
                        iVar9 = *piVar8;
                      }
                      if (iVar13 == iVar9) {
                        iVar11 = iVar11 + 1;
                      }
                      iVar6 = iVar6 + 1;
                      piVar8 = piVar8 + 1;
                    } while (iVar6 < 0x20);
                  }
                  if (puVar7[0x12] == *piVar5) {
                    iVar11 = iVar11 + 1;
                  }
                  if (local_118 != (undefined4 *)0x0) {
                    if (iVar11 <= local_114) goto LAB_00437ed3;
                  }
                  local_118 = puVar7;
                  local_114 = iVar11;
                }
LAB_00437ed3:
                puVar7 = FUN_004fbed0(&DAT_005ae974,(int)puVar7);
              } while (puVar7 != (undefined4 *)0x0);
            }
            p_Var1 = local_100;
            if (local_118 != (undefined4 *)0x0) {
              local_e8 = local_118[7];
              local_e4 = *(undefined4 *)((int)param_1 + 0x68);
              local_f8 = local_118[10];
              local_f4 = 0xffffffff;
              local_f0 = 0xffffffff;
              local_e0 = 0;
              local_dc = 0xffffffff;
              local_d8 = 0xffffffff;
              local_c = 0x20;
              local_8 = &LAB_00437fa0;
              local_4 = param_1;
              EnterCriticalSection(local_100);
              iVar10 = FUN_0047be80(&DAT_005cc9e8,&local_f8);
              if (iVar10 != 0) {
                *(undefined4 *)((int)param_1 + 0x40) = 1;
              }
              LeaveCriticalSection(p_Var1);
              if (*(int *)((int)param_1 + 0x40) == 1) {
                return;
              }
            }
          }
        }
        else {
          puVar7 = FUN_00485080(&DAT_005aa12c,*(int *)((int)param_1 + 0x48),0x2f);
          if (puVar7 != (undefined4 *)0x0) {
            iVar10 = -1;
            iVar12 = 0;
            if (0 < (int)puVar7[0x13]) {
              do {
                if ((*(uint *)((int)param_1 + 100) & 1 << ((byte)iVar12 & 0x1f)) != 0) {
                  iVar10 = iVar12;
                  break;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < (int)puVar7[0x13]);
            }
            if (-1 < iVar10) {
              piVar8 = puVar7 + iVar10 * 0x13 + 0x31;
              goto LAB_00437e2f;
            }
          }
        }
      }
      iVar10 = FUN_004c50a0(param_1,piVar5,&local_108);
    }
  }
  return;
#undef local_118
#undef local_114
#undef local_110
#undef local_108
#undef local_104
#undef local_100
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_c
#undef local_8
#undef local_4
}
