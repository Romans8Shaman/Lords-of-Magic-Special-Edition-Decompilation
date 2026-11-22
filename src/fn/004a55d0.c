/* Rebuilt from lomse.exe FUN_004a55d0 @ 0x004a55d0 (1009 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c9a0 (*(undefined4 *)0x0055c9a0)
#define DAT_0055c9c0 (*(undefined4 *)0x0055c9c0)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define FUN_004a5240 ((int (__thiscall *)(void *, int, int))0x004a5240)
#define FUN_004a5cb0 ((undefined4 (__thiscall *)(void *, int, int, int))0x004a5cb0)
#define FUN_00508f10 ((undefined4 (__thiscall *)(void *, int))0x00508f10)
#define FUN_00508fb0 ((undefined4 (__thiscall *)(void *, int, int))0x00508fb0)
#define FUN_005091c0 ((undefined4 (__fastcall *)(undefined4 *))0x005091c0)
#define FUN_0053a110 ((uint (__stdcall *)(void))0x0053a110)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define _DAT_0054da84 (*(float *)0x0054da84)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_No_terrains_possible_for_elevati_0055cb54 (*(char (*)[])0x0055cb54)

#define LOM_SELF_004a55d0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_004a55d0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  float10 fVar12;
  longlong lVar13;
  uchar _fr[0x460] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_458;
  typedef int * _t_local_454;
  typedef int _t_local_440[8];
  typedef int _t_aiStack_420[8];
  typedef int _t_local_400[256];
#define local_458 (*(_t_local_458 *)(_fr + 0x0))
#define local_454 (*(_t_local_454 *)(_fr + 0x4))
#define local_440 (*(_t_local_440 *)(_fr + 0x18))
#define aiStack_420 (*(_t_aiStack_420 *)(_fr + 0x38))
#define local_400 (*(_t_local_400 *)(_fr + 0x58))
  
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  iVar1 = FUN_004a5170(this,param_1,param_2);
  fVar12 = FUN_004a5210(this,param_1,param_2);
  local_454 = __BC(int *, (float)fVar12);
  local_458 = (float)fVar12;
  fVar12 = FUN_004a5210(this,param_1 + 1,param_2);
  if ((__LOM_ISNAN(fVar12) || __LOM_ISNAN((float10)local_458)) || fVar12 < (float10)local_458) {
    local_458 = (float)fVar12;
  }
  if ((!__LOM_ISNAN(fVar12) && !__LOM_ISNAN((float10)__BC(float, local_454))) && (float10)__BC(float, local_454) <= fVar12) {
    local_454 = __BC(int *, (float)fVar12);
  }
  fVar12 = FUN_004a5210(this,param_1,param_2 + 1);
  if ((__LOM_ISNAN(fVar12) || __LOM_ISNAN((float10)local_458)) || fVar12 < (float10)local_458) {
    local_458 = (float)fVar12;
  }
  if ((!__LOM_ISNAN(fVar12) && !__LOM_ISNAN((float10)__BC(float, local_454))) && (float10)__BC(float, local_454) <= fVar12) {
    local_454 = __BC(int *, (float)fVar12);
  }
  fVar12 = FUN_004a5210(this,param_1 + 1,param_2 + 1);
  if ((__LOM_ISNAN(fVar12) || __LOM_ISNAN((float10)local_458)) || fVar12 < (float10)local_458) {
    local_458 = (float)fVar12;
  }
  if ((!__LOM_ISNAN(fVar12) && !__LOM_ISNAN((float10)__BC(float, local_454))) && (float10)__BC(float, local_454) <= fVar12) {
    local_454 = __BC(int *, (float)fVar12);
  }
  lVar13 = __ftol((float10)local_458 * (float10)_DAT_0054da84);
  iVar3 = (int)lVar13;
  lVar13 = __ftol((float10)__BC(float, local_454) * (float10)_DAT_0054da84);
  iVar6 = (int)lVar13;
  piVar5 = (int *)((int)this + 0xd8);
  local_458 = 0.0;
  iVar1 = FUN_00508f10(piVar5,(int)*(short *)(*(int *)((int)this + 0x54) + iVar1 * 8));
  if (iVar6 < 1) {
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0xec)) {
      piVar10 = local_400;
      do {
        if (((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0xec))) &&
           (*(int *)((int)this + 0xf8) != 0)) {
          if (*piVar5 == 0) {
            FUN_005091c0(piVar5);
          }
          if ((0 < *(int *)(*(int *)((int)this + 0xf8) + iVar1 * 4)) &&
             (uVar2 = FUN_00508fb0(piVar5,iVar1,0), (uVar2 & 1) != 0)) {
            *piVar10 = iVar1;
            local_458 = __BC(float, (__BC(int, local_458) + 1));
            piVar10 = piVar10 + 1;
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 0xec));
    }
  }
  else {
    iVar9 = *(int *)((int)this + 0x44);
    if (((-1 < iVar9) && (iVar9 < *(int *)((int)this + 0xec))) && (*(int *)((int)this + 0xf8) != 0))
    {
      if (*piVar5 == 0) {
        FUN_005091c0(piVar5);
      }
      if (0 < *(int *)(*(int *)((int)this + 0xf8) + iVar9 * 4)) {
        iVar7 = FUN_00508fb0(piVar5,iVar9,1);
        iVar8 = FUN_00508fb0(piVar5,iVar9,2);
        if ((iVar7 <= iVar6) && (iVar3 <= iVar8)) {
          uVar4 = FUN_004a5cb0(this,param_1,param_2,iVar9);
          return uVar4;
        }
      }
    }
    iVar9 = FUN_00508fb0(piVar5,iVar1,1);
    iVar7 = FUN_00508fb0(piVar5,iVar1,2);
    uVar2 = FUN_00508fb0(piVar5,iVar1,0);
    if (((iVar9 <= iVar6) && (iVar3 <= iVar7)) && ((uVar2 & 1) == 0)) {
      return 0;
    }
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0xec)) {
      local_454 = local_400;
      do {
        if (((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0xec))) &&
           (*(int *)((int)this + 0xf8) != 0)) {
          if (*piVar5 == 0) {
            FUN_005091c0(piVar5);
          }
          if (0 < *(int *)(*(int *)((int)this + 0xf8) + iVar1 * 4)) {
            iVar9 = FUN_00508fb0(piVar5,iVar1,1);
            iVar7 = FUN_00508fb0(piVar5,iVar1,2);
            uVar2 = FUN_00508fb0(piVar5,iVar1,0);
            if (((iVar9 <= iVar6) && (iVar3 <= iVar7)) && ((uVar2 & 1) == 0)) {
              local_458 = __BC(float, (__BC(int, local_458) + 1));
              *local_454 = iVar1;
              local_454 = local_454 + 1;
            }
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 0xec));
    }
    if (local_458 == 0.0) {
      OutputDebugStringA(s_No_terrains_possible_for_elevati_0055cb54);
      return 0;
    }
  }
  iVar1 = 0;
  do {
    iVar3 = FUN_004a5240(this,*(int *)((int)&DAT_0055c9a0 + iVar1) + param_1,
                         *(int *)((int)&DAT_0055c9c0 + iVar1) + param_2);
    uVar4 = FUN_00508f10(piVar5,iVar3);
    *(undefined4 *)((int)local_440 + iVar1) = uVar4;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x20);
  iVar1 = 0;
  do {
    *(undefined4 *)((int)aiStack_420 + iVar1) = 0;
    piVar5 = local_440;
    iVar3 = 8;
    do {
      if (*(int *)((int)local_440 + iVar1) == *piVar5) {
        *(int *)((int)aiStack_420 + iVar1) = *(int *)((int)aiStack_420 + iVar1) + 1;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x20);
  iVar1 = -1;
  iVar3 = 0;
  if (0 < __BC(int, local_458)) {
    piVar5 = local_400;
    fVar11 = local_458;
    do {
      iVar6 = 0;
      piVar10 = local_440;
      do {
        if (*piVar10 == *piVar5) break;
        iVar6 = iVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar6 < 8);
      if (iVar6 < 8) {
        if (iVar3 < aiStack_420[iVar6]) {
          iVar1 = local_440[iVar6];
          iVar3 = aiStack_420[iVar6];
        }
      }
      piVar5 = piVar5 + 1;
      fVar11 = __BC(float, (__BC(int, fVar11) + -1));
    } while (fVar11 != 0.0);
  }
  if (iVar3 == 0) {
    if (__BC(int, local_458) < 1) {
      return 0;
    }
    uVar2 = FUN_0053a110();
    iVar1 = local_400[(int)uVar2 % __BC(int, local_458)];
  }
  uVar4 = FUN_004a5cb0(this,param_1,param_2,iVar1);
  return uVar4;
#undef local_458
#undef local_454
#undef local_440
#undef aiStack_420
#undef local_400
}
