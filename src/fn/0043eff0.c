/* Rebuilt from lomse.exe FUN_0043eff0 @ 0x0043eff0 (1261 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa180 (*(undefined *)0x005aa180)
#define DAT_005aa184 (*(int * *)0x005aa184)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043dd50 ((undefined4 (__fastcall *)(int))0x0043dd50)
#define FUN_0043dd80 ((undefined4 (__fastcall *)(int))0x0043dd80)
#define FUN_0043dde0 ((undefined4 (__thiscall *)(void *, int))0x0043dde0)
#define FUN_0043de80 ((undefined4 (__thiscall *)(void *, int))0x0043de80)
#define FUN_0043e680 ((undefined4 (__thiscall *)(void *, int *, undefined4))0x0043e680)
#define FUN_0043e7b0 ((undefined4 (__fastcall *)(int))0x0043e7b0)
#define FUN_0043e820 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int))0x0043e820)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004869d0 ((undefined4 (__thiscall *)(void *, undefined4))0x004869d0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_00579118 (*(undefined4 *)0x00579118)
#define s_Building__SetBuildingLevel_b__NU_00556614 (*(char (*)[])0x00556614)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0043eff0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
rb_0043eff0(void *this,void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  void *pvVar9;
  undefined *puVar10;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef int _t_local_14[2];
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))

  local_18 = 0;
  if (((param_5 != 0) && (*(int *)((int)this + 0x58) == 0xd)) &&
     (param_1 == (void *)0xe)) {
    iVar3 = FUN_0043de80(this,9);
    if (iVar3 == -1) {
      return 0;
    }
    FUN_00482ac0(&DAT_005aa12c,iVar3,2);
  }
  if ((-1 < param_3) &&
     (iVar3 = FUN_0043e820(this,&local_18,(int)param_1,param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  if (param_4 < 0) {
    param_4 = (int)*(short *)((int)this + 0x56);
  }
  if (((*(int *)((int)this + 0x58) == 0xd) && (param_1 == (void *)0xe)) &&
     (iVar3 = FUN_0043de80(this,9), iVar3 == -1)) {
    return 0;
  }
  if (*(void **)((int)this + 0x58) == param_1) {
    iVar3 = *(int *)((int)this + 0x28);
  }
  else {
    iVar3 = FUN_0043de80(this,(int)param_1);
  }
  sVar2 = (short)param_4;
  if (-1 < iVar3) {
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
    piVar4[0x17] = param_2;
    if ((-1 < param_4) && (*(short *)((int)piVar4 + 0x56) != param_4)) {
      *(short *)((int)piVar4 + 0x56) = sVar2;
    }
    if (param_2 == 0) {
      piVar4[0x11] = 0;
      piVar4[0x21] = -1;
      piVar4[0x22] = 0;
    }
    ((undefined4 (__thiscall *)(__typeof__(piVar4)))(**(code **)(*piVar4 + 0x2c)))(piVar4);
    pvVar9 = DAT_005a7b78;
    if ((char)DAT_005aa180 != '\0') {
      iVar3 = piVar4[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar9);
        *(undefined4 *)((int)pvVar9 + 0x90) = 0;
        *(undefined4 *)((int)pvVar9 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar1 = *(int *)((int)pvVar9 + 0x50);
        *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar5 * 8) = iVar3;
      }
      FUN_004d05e0(DAT_005a7b78,(*(uint *)&DAT_005aa180),DAT_005aa184);
    }
    goto LAB_0043f2f5;
  }
  if (*(int *)((int)this + 0x58) == 0xd) {
    iVar3 = FUN_0043dde0(this,(int)param_1);
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
    if (piVar4 == (int *)0x0) {
      if (param_1 == (void *)0xf) {
LAB_0043f1fb:
        if (piVar4 == (int *)0x0) goto LAB_0043f25d;
      }
      else {
        iVar3 = FUN_0043dde0(this,9);
        piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
        if (piVar4 == (int *)0x0) {
          iVar3 = FUN_0043dde0(this,10);
          piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
          if (piVar4 == (int *)0x0) {
            iVar3 = FUN_0043dde0(this,0xc);
            piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
            goto LAB_0043f1fb;
          }
        }
      }
    }
    if ((piVar4[0x16] == 9) && (param_1 != (void *)0x9)) {
      iVar3 = FUN_0043dd80((int)piVar4);
      uVar6 = FUN_00482ac0(&DAT_005aa12c,iVar3,2);
      if (uVar6 != 0) {
        FUN_0043dd50(uVar6);
      }
    }
    piVar4[0x17] = param_2;
    if (param_2 == 0) {
      piVar4[0x11] = 0;
      piVar4[0x21] = -1;
      piVar4[0x22] = 0;
    }
    piVar4[0x16] = (int)param_1;
    *(short *)((int)piVar4 + 0x56) = sVar2;
    ((undefined4 (__thiscall *)(__typeof__(piVar4)))(**(code **)(*piVar4 + 0x2c)))(piVar4);
  }
  else {
LAB_0043f25d:
    piVar4 = (int *)FUN_0043e680(this,local_14,param_1);
    iVar3 = *piVar4;
    piVar8 = (int *)0x0;
    iVar1 = piVar4[1];
    pvVar9 = (void *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (pvVar9 != (void *)0x0) {
      uVar7 = *(undefined4 *)((int)this + 0x28);
      piVar8 = FUN_0043b990(pvVar9,*(undefined4 *)((int)this + 0x4c),*(short *)((int)this + 0x54),
                            sVar2,(int)param_1,param_2,uVar7,uVar7,uVar7);
    }
    iVar3 = FUN_004a51c0(&DAT_005ae958,iVar3,iVar1);
    iVar3 = FUN_004a7d50(&DAT_005ae958,piVar8,iVar3);
    ((undefined4 (__thiscall *)(__typeof__(piVar8)))(**(code **)(*piVar8 + 0x2c)))(piVar8);
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
  }
LAB_0043f2f5:
  if (piVar4 == (int *)0x0) {
    OutputDebugStringA(s_Building__SetBuildingLevel_b__NU_00556614);
    uVar7 = 0;
  }
  else {
    if (param_1 == (void *)0x9) {
      _DAT_00579118 = piVar4;
      iVar3 = FUN_0043dd80((int)piVar4);
      piVar8 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)FUN_0043e680(piVar4,local_14,0xe);
        iVar3 = *piVar8;
        iVar1 = piVar8[1];
        pvVar9 = (void *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (pvVar9 == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          iVar5 = piVar4[10];
          piVar4 = FUN_0043b990(pvVar9,*(undefined4 *)((int)this + 0x4c),
                                *(short *)((int)this + 0x54),sVar2,0xe,param_2,iVar5,iVar5,iVar5);
        }
        iVar3 = FUN_004a51c0(&DAT_005ae958,iVar3,iVar1);
        FUN_004a7d50(&DAT_005ae958,piVar4,iVar3);
        ((undefined4 (__thiscall *)(__typeof__(piVar4)))(**(code **)(*piVar4 + 0x2c)))(piVar4);
      }
      else {
        piVar8[0x16] = 0xe;
        piVar8[0x17] = *(int *)((int)this + 0x5c);
        if (*(int *)((int)this + 0x5c) == 0) {
          piVar8[0x11] = 0;
          piVar8[0x21] = -1;
          piVar8[0x22] = 0;
        }
        *(short *)((int)piVar8 + 0x56) = sVar2;
        ((undefined4 (__thiscall *)(__typeof__(piVar8)))(**(code **)(*piVar8 + 0x2c)))(piVar8);
      }
    }
    if (-1 < param_3) {
      if ((param_3 < 0) || (0xf < param_3)) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = &DAT_005af194 + param_3 * 0x1d84;
      }
      iVar3 = FUN_0043e7b0((int)this);
      if (iVar3 == 0) {
        return 0;
      }
      *(int *)(iVar3 + 0xe0) = *(int *)(iVar3 + 0xe0) - (*(int *)(local_18 + 0xc) >> 8);
      *(int *)(puVar10 + 0xcfc) = *(int *)(puVar10 + 0xcfc) - *(int *)(local_18 + 0x10);
      *(uint *)(puVar10 + 0x15d8) = *(uint *)(puVar10 + 0x15d8) | 0x40;
      *(int *)(puVar10 + 0xd04) = *(int *)(puVar10 + 0xd04) - *(int *)(local_18 + 0x14);
      *(uint *)(puVar10 + 0x15d8) = *(uint *)(puVar10 + 0x15d8) | 0x40;
      *(int *)(puVar10 + 0xd08) = *(int *)(puVar10 + 0xd08) - *(int *)(local_18 + 0x18);
      *(uint *)(puVar10 + 0x15d8) = *(uint *)(puVar10 + 0x15d8) | 0x40;
    }
    FUN_004869d0(&DAT_005aa12c,param_3);
    uVar7 = 1;
  }
  return uVar7;
#undef local_18
#undef local_14
}
