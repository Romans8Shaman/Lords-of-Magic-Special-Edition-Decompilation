/* Rebuilt from lomse.exe FUN_00506460 @ 0x00506460 (2497 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7c7c (*(uint *)0x005a7c7c)
#define DAT_005a7c80 (*(int * *)0x005a7c80)
#define DAT_005a7c84 (*(uint *)0x005a7c84)
#define DAT_005a7c88 (*(int * *)0x005a7c88)
#define DAT_005a7ca4 (*(uint *)0x005a7ca4)
#define DAT_005a7ca8 (*(int * *)0x005a7ca8)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504f00 ((int (__cdecl *)(int, int))0x00504f00)
#define FUN_00506010 ((int (__thiscall *)(void *, int))0x00506010)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_005063b0 ((int (__thiscall *)(void *, int))0x005063b0)
#define FUN_00522870 ((int (__fastcall *)(int))0x00522870)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)
#define FUN_00525fe0 ((int (__fastcall *)(void *))0x00525fe0)
#define _DAT_0054e8c8 (*(float *)0x0054e8c8)
#define _DAT_0054e8cc (*(float *)0x0054e8cc)
#define _DAT_0054e8d0 (*(float *)0x0054e8d0)
#define _DAT_0054e8d4 (*(float *)0x0054e8d4)
#define _DAT_0054e8d8 (*(float *)0x0054e8d8)
#define _DAT_0054e8dc (*(float *)0x0054e8dc)
#define _DAT_0054e8e0 (*(float *)0x0054e8e0)
#define _DAT_0054e8e4 (*(float *)0x0054e8e4)
#define _DAT_0054e8e8 (*(float *)0x0054e8e8)
#define _DAT_0054e8ec (*(float *)0x0054e8ec)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00506460 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_00506460(void *this,void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  void *pvVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  longlong lVar11;
  uint *puVar12;
  float *pfVar13;
  uchar _fr[0xa0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_94;
  typedef float _t_local_90;
  typedef float _t_local_8c;
  typedef float _t_local_88;
  typedef uint _t_local_84;
  typedef uint _t_local_80;
  typedef float _t_local_7c;
  typedef float _t_local_78;
  typedef uint _t_local_74;
  typedef float _t_local_70;
  typedef float _t_local_68;
  typedef float _t_local_60;
  typedef uint _t_local_5c[2];
  typedef float _t_local_54;
  typedef uint _t_local_50[2];
  typedef float _t_local_48;
  typedef float _t_local_40;
  typedef uint _t_local_3c[2];
  typedef uint _t_local_34[3];
  typedef float _t_local_28;
  typedef float _t_local_20;
  typedef float _t_local_18;
  typedef float _t_local_14[2];
  typedef float _t_local_c;
  typedef float _t_local_8;
  typedef float _t_local_4;
#define local_94 (*(_t_local_94 *)(_fr + 0x4))
#define local_90 (*(_t_local_90 *)(_fr + 0x8))
#define local_8c (*(_t_local_8c *)(_fr + 0xc))
#define local_88 (*(_t_local_88 *)(_fr + 0x10))
#define local_84 (*(_t_local_84 *)(_fr + 0x14))
#define local_80 (*(_t_local_80 *)(_fr + 0x18))
#define local_7c (*(_t_local_7c *)(_fr + 0x1c))
#define local_78 (*(_t_local_78 *)(_fr + 0x20))
#define local_74 (*(_t_local_74 *)(_fr + 0x24))
#define local_70 (*(_t_local_70 *)(_fr + 0x28))
#define local_68 (*(_t_local_68 *)(_fr + 0x30))
#define local_60 (*(_t_local_60 *)(_fr + 0x38))
#define local_5c (*(_t_local_5c *)(_fr + 0x3c))
#define local_54 (*(_t_local_54 *)(_fr + 0x44))
#define local_50 (*(_t_local_50 *)(_fr + 0x48))
#define local_48 (*(_t_local_48 *)(_fr + 0x50))
#define local_40 (*(_t_local_40 *)(_fr + 0x58))
#define local_3c (*(_t_local_3c *)(_fr + 0x5c))
#define local_34 (*(_t_local_34 *)(_fr + 0x64))
#define local_28 (*(_t_local_28 *)(_fr + 0x70))
#define local_20 (*(_t_local_20 *)(_fr + 0x78))
#define local_18 (*(_t_local_18 *)(_fr + 0x80))
#define local_14 (*(_t_local_14 *)(_fr + 0x84))
#define local_c (*(_t_local_c *)(_fr + 0x8c))
#define local_8 (*(_t_local_8 *)(_fr + 0x90))
#define local_4 (*(_t_local_4 *)(_fr + 0x94))
  
  iVar3 = FUN_00420580((int)this);
  if (iVar3 == 0) {
    local_90 = __BC(float, FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c)));
    local_88 = (float)__BC(int, local_90);
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = __BC(float, FUN_005063b0(param_1,0));
    local_90 = 0.0;
    fVar1 = (float)iVar3 / (float)__BC(int, local_8c);
    if (*(int *)((int)this + 0x4c) < 1) {
      return 0;
    }
    lVar11 = __ftol((float10)local_88);
    local_78 = __BC(float, lVar11);
    piVar8 = (int *)((int)this + 0xc4);
    do {
      iVar3 = FUN_00525fe0(piVar8);
      if (__BC(int, local_78) <= iVar3) {
        iVar3 = FUN_005228b0(piVar8,*(undefined4 *)((int)this + 0x28),__BC(undefined4, local_90));
        local_8c = (float)iVar3;
        iVar3 = FUN_00525fc0(piVar8);
        pvVar7 = DAT_005a7b78;
        if (iVar3 == 2) {
          if ((*(uint *)((int)this + 0x30) & 0x40000000) == 0) {
            if (DAT_005a7c84 == 0) {
              fVar9 = ((float10)local_8c * (float10)_DAT_0054e8d0) / (float10)fVar1;
              fVar10 = (float10)_DAT_0054e8cc - (float10)_DAT_0054e8e4 / (float10)local_88;
              goto LAB_00506dba;
            }
            local_60 = local_8c;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar3 = *(int *)((int)pvVar7 + 0x50);
              *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
              *(float *)(iVar3 + 4 + iVar5 * 8) = local_8c;
            }
            pvVar7 = DAT_005a7b78;
            local_54 = fVar1;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar3 = *(int *)((int)pvVar7 + 0x50);
              *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
              *(float *)(iVar3 + 4 + iVar5 * 8) = fVar1;
            }
            pvVar7 = DAT_005a7b78;
            local_48 = local_88;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar3 = *(int *)((int)pvVar7 + 0x50);
              *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
              *(float *)(iVar3 + 4 + iVar5 * 8) = local_88;
            }
            FUN_004d05e0(DAT_005a7b78,DAT_005a7c84,DAT_005a7c88);
            pvVar7 = DAT_005a7b78;
            FUN_0040adb0(DAT_005a7b78,local_3c);
            pfVar13 = &local_4;
            puVar12 = local_5c;
            puVar6 = local_3c;
          }
          else {
            if (DAT_005a7ca4 == 0) {
              fVar9 = (float10)local_8c * (float10)_DAT_0054e8ec;
              fVar2 = _DAT_0054e8e4;
              goto LAB_00506da6;
            }
            local_20 = local_8c;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar3 = *(int *)((int)pvVar7 + 0x50);
              *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
              *(float *)(iVar3 + 4 + iVar5 * 8) = local_8c;
            }
            pvVar7 = DAT_005a7b78;
            local_40 = fVar1;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar3 = *(int *)((int)pvVar7 + 0x50);
              *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
              *(float *)(iVar3 + 4 + iVar5 * 8) = fVar1;
            }
            pvVar7 = DAT_005a7b78;
            local_68 = local_88;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
              iVar3 = *(int *)((int)pvVar7 + 0x50);
              *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
              *(float *)(iVar3 + 4 + iVar5 * 8) = local_88;
            }
            FUN_004d05e0(DAT_005a7b78,DAT_005a7ca4,DAT_005a7ca8);
            pvVar7 = DAT_005a7b78;
            FUN_0040adb0(DAT_005a7b78,local_34);
            pfVar13 = &local_8;
            puVar12 = local_50;
            puVar6 = local_34;
          }
          iVar3 = FUN_004026a0(puVar6,&local_84,puVar12,pfVar13);
          if (iVar3 == 0) {
            *(undefined4 *)((int)pvVar7 + 0x90) = 0xe;
            FUN_004d4550(pvVar7);
            *(undefined4 *)((int)pvVar7 + 0x90) = 0;
            *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
          }
        }
        else if (DAT_005a7c7c == 0) {
          fVar9 = (float10)local_8c * (float10)_DAT_0054e8d8;
          fVar2 = _DAT_0054e8dc;
LAB_00506da6:
          fVar9 = fVar9 / (float10)fVar1;
          fVar10 = (float10)_DAT_0054e8e8 - (float10)fVar2 / (float10)local_88;
LAB_00506dba:
          lVar11 = __ftol(fVar9 * fVar10);
          local_84 = (uint)lVar11;
        }
        else {
          local_28 = local_8c;
          FUN_0041d1d0(DAT_005a7b78,4,__BC(undefined4, local_8c));
          local_18 = fVar1;
          FUN_0041d1d0(DAT_005a7b78,4,__BC(undefined4, fVar1));
          pvVar7 = DAT_005a7b78;
          local_c = local_88;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            FUN_00404ab0(DAT_005a7b78,3);
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar3 = *(int *)((int)pvVar7 + 0x50);
            *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
            *(float *)(iVar3 + 4 + iVar5 * 8) = local_88;
          }
          FUN_004d05e0(DAT_005a7b78,DAT_005a7c7c,DAT_005a7c80);
          pvVar7 = DAT_005a7b78;
          FUN_0040adb0(DAT_005a7b78,&local_74);
          iVar3 = FUN_004026a0(&local_74,&local_84,&local_80,local_14);
          if (iVar3 == 0) {
            FUN_00404ab0(pvVar7,0xe);
          }
        }
        iVar3 = FUN_00504f00(0,100);
        if (iVar3 < (int)local_84) {
          return 1;
        }
      }
      local_90 = __BC(float, (__BC(int, local_90) + 1));
      piVar8 = piVar8 + 0x13;
      if (*(int *)((int)this + 0x4c) <= __BC(int, local_90)) {
        return 0;
      }
    } while( true );
  }
  iVar3 = FUN_004c2330((int)this);
  if ((iVar3 < 1) || (uVar4 = FUN_00506100((int)this), uVar4 != 0)) {
    iVar3 = FUN_00522870((int)this);
    local_90 = (float)iVar3;
    local_8c = __BC(float, FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c)));
    local_88 = (float)__BC(int, local_8c);
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = __BC(float, FUN_005063b0(param_1,0));
    pvVar7 = DAT_005a7b78;
    local_94 = (float)iVar3 / (float)__BC(int, local_8c);
    if (DAT_005a7c7c != 0) {
      local_7c = local_90;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_90;
      }
      pvVar7 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        local_7c = local_94;
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_94;
      }
      pvVar7 = DAT_005a7b78;
      local_7c = local_88;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_88;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c7c,DAT_005a7c80);
      pvVar7 = DAT_005a7b78;
      FUN_0040adb0(DAT_005a7b78,&local_80);
LAB_00506911:
      iVar3 = FUN_004026a0(&local_80,&local_84,(uint *)&local_90,&local_78);
      if (iVar3 == 0) {
        *(undefined4 *)((int)pvVar7 + 0x90) = 0xe;
        FUN_004d4550(pvVar7);
        *(undefined4 *)((int)pvVar7 + 0x90) = 0;
        *(undefined4 *)((int)pvVar7 + 0xa4) = 0;
      }
      goto LAB_0050696e;
    }
    fVar9 = (float10)_DAT_0054e8dc;
    fVar10 = (float10)local_90 * (float10)_DAT_0054e8e0;
  }
  else if ((((*(uint *)((int)this + 0x30) & 0x40000000) == 0) || (*(int *)((int)this + 0x68) == 1))
          || (*(int *)((int)this + 0x68) == 0xd)) {
    iVar3 = FUN_00506010(this,1);
    local_90 = (float)iVar3;
    local_8c = __BC(float, FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c)));
    local_88 = (float)__BC(int, local_8c);
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = __BC(float, FUN_005063b0(param_1,0));
    pvVar7 = DAT_005a7b78;
    local_94 = (float)iVar3 / (float)__BC(int, local_8c);
    if (DAT_005a7c84 != 0) {
      local_7c = local_90;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_90;
      }
      pvVar7 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        local_7c = local_94;
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_94;
      }
      pvVar7 = DAT_005a7b78;
      local_7c = local_88;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_88;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c84,DAT_005a7c88);
      pvVar7 = DAT_005a7b78;
      FUN_0040adb0(DAT_005a7b78,&local_80);
      goto LAB_00506911;
    }
    fVar9 = (float10)_DAT_0054e8d4;
    fVar10 = (float10)local_90 * (float10)_DAT_0054e8d8;
  }
  else {
    iVar3 = FUN_00506010(this,1);
    local_90 = (float)iVar3;
    local_8c = __BC(float, FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c)));
    local_88 = (float)__BC(int, local_8c);
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = __BC(float, FUN_005063b0(param_1,0));
    pvVar7 = DAT_005a7b78;
    local_94 = (float)iVar3 / (float)__BC(int, local_8c);
    if (DAT_005a7ca4 != 0) {
      local_7c = local_90;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_90;
      }
      pvVar7 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        local_7c = local_94;
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_94;
      }
      pvVar7 = DAT_005a7b78;
      local_7c = local_88;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar3 = *(int *)((int)pvVar7 + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 4;
        *(float *)(iVar3 + 4 + iVar5 * 8) = local_88;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7ca4,DAT_005a7ca8);
      pvVar7 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar8 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        local_80 = *(uint *)(*piVar8 + -8 + iVar3 * 8);
        local_7c = *(float *)(*piVar8 + -4 + iVar3 * 8);
      }
      else {
        FUN_00404ab0(DAT_005a7b78,6);
        local_80 = 0;
        local_7c = local_70;
      }
      iVar3 = FUN_004026a0(&local_80,&local_84,(uint *)&local_90,&local_78);
      if (iVar3 == 0) {
        FUN_00404ab0(pvVar7,0xe);
      }
      goto LAB_0050696e;
    }
    fVar9 = (float10)_DAT_0054e8c8;
    fVar10 = (float10)local_90 * (float10)_DAT_0054e8d0;
  }
  lVar11 = __ftol((fVar10 / (float10)local_94) *
                  ((float10)_DAT_0054e8cc - fVar9 / (float10)local_88));
  local_84 = (uint)lVar11;
LAB_0050696e:
  if ((param_2 != 0) && (*(char *)((int)param_1 + 0x5d0) != '\0')) {
    local_84 = local_84 * 2;
  }
  iVar3 = FUN_00504f00(0,100);
  if (iVar3 < (int)local_84) {
    return 1;
  }
  return 0;
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_68
#undef local_60
#undef local_5c
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_3c
#undef local_34
#undef local_28
#undef local_20
#undef local_18
#undef local_14
#undef local_c
#undef local_8
#undef local_4
}
