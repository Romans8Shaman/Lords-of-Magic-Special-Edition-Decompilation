/* Rebuilt from lomse.exe FUN_00532820 @ 0x00532820 (1036 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583100 (*(char *)0x00583100)
#define DAT_005ae918 (*(int *)0x005ae918)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define _DAT_0054ea10 (*(float *)0x0054ea10)
#define _DAT_005ae938 (*(float *)0x005ae938)
#define _DAT_005ae93c (*(float *)0x005ae93c)
#define _DAT_005ae940 (*(float *)0x005ae940)

#define LOM_SELF_00532820 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
rb_00532820(void *this,int param_1,float param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_20;
  typedef uint _t_local_14;
  typedef float _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef float _t_local_4;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  local_8 = 0;
  if (param_1 == param_3) {
    return 0;
  }
  FUN_004a9a60(this,&local_14,param_1);
  if (((local_14 & 0x200000) == 0) &&
     (FUN_004a9a60(this,&local_14,param_3), (local_14 & 0x200000) == 0)) {
    iVar2 = *(int *)((int)this + 0x6c);
    iVar8 = param_1 % iVar2;
    uVar3 = param_3 % iVar2 - iVar8;
    iVar4 = param_1 / iVar2;
    uVar5 = param_3 / iVar2 - iVar4;
    if ((DAT_00583100 == '\x02') && (1 < DAT_005ae918)) {
      local_8 = 1;
    }
    if ((local_8 != 0) ||
       (uVar9 = (int)uVar3 >> 0x1f, uVar10 = (int)uVar5 >> 0x1f,
       (int)((uVar5 ^ uVar10) - uVar10) < (int)((uVar3 ^ uVar9) - uVar9))) {
      uVar3 = param_3 % iVar2 - iVar8;
      if (uVar3 != 0) {
        local_20 = *(float *)(*(int *)((int)this + 0x54) + 4 + param_1 * 8);
        fVar1 = *(float *)(*(int *)((int)this + 0x54) + 4 + param_3 * 8);
        if ((!__LOM_ISNAN(param_2) && !__LOM_ISNAN(local_20)) && local_20 < param_2) {
          local_20 = param_2;
        }
        if ((!__LOM_ISNAN(param_4) && !__LOM_ISNAN(fVar1)) && fVar1 < param_4) {
          fVar1 = param_4;
        }
        iVar8 = iVar8 << 0x10;
        iVar7 = iVar4 << 0x10;
        iVar11 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        local_10 = local_20 + param_5;
        local_4 = (fVar1 - local_20) / (float)iVar11;
        local_c = 0;
        if (-1 < iVar11) {
          do {
            iVar6 = FUN_004a51c0(this,iVar8 >> 0x10,iVar7 >> 0x10);
            fVar1 = *(float *)(*(int *)((int)this + 0x54) + 4 + iVar6 * 8);
            FUN_004a9a60(this,&local_14,iVar6);
            if ((local_14 & 0x400000) == 0) {
              if ((local_14 & 0x38000) == 0) {
                if ((local_14 & 0x200000) == 0) {
                  if ((local_14 & 0x800000) != 0) {
                    fVar1 = fVar1 - _DAT_005ae93c * _DAT_0054ea10;
                  }
                }
                else {
                  fVar1 = fVar1 + _DAT_005ae93c;
                }
              }
              else {
                fVar1 = fVar1 + _DAT_005ae940;
              }
            }
            else {
              fVar1 = fVar1 + _DAT_005ae938;
            }
            if ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN(local_10)) && local_10 < fVar1) {
              return 0;
            }
            local_10 = local_4 + local_10;
            iVar7 = iVar7 + ((param_3 / iVar2 - iVar4) * 0x10000) / iVar11;
            iVar8 = iVar8 + ((((int)uVar3 < 1) - 1 & 2) - 1);
            local_c = local_c + 1;
          } while (local_c <= iVar11);
        }
      }
      if (local_8 == 0) {
        return 1;
      }
    }
    iVar2 = *(int *)((int)this + 0x6c);
    iVar4 = param_1 / iVar2;
    uVar3 = param_3 / iVar2 - iVar4;
    if (uVar3 != 0) {
      local_20 = *(float *)(*(int *)((int)this + 0x54) + 4 + param_1 * 8);
      fVar1 = *(float *)(*(int *)((int)this + 0x54) + 4 + param_3 * 8);
      if ((!__LOM_ISNAN(param_2) && !__LOM_ISNAN(local_20)) && local_20 < param_2) {
        local_20 = param_2;
      }
      if ((!__LOM_ISNAN(param_4) && !__LOM_ISNAN(fVar1)) && fVar1 < param_4) {
        fVar1 = param_4;
      }
      iVar7 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
      local_10 = local_20 + param_5;
      local_4 = (fVar1 - local_20) / (float)iVar7;
      iVar8 = param_1 % iVar2 << 0x10;
      local_c = 0;
      if (-1 < iVar7) {
        while( true ) {
          iVar11 = FUN_004a51c0(this,iVar8 >> 0x10,iVar4);
          fVar1 = *(float *)(*(int *)((int)this + 0x54) + 4 + iVar11 * 8);
          FUN_004a9a60(this,&local_14,iVar11);
          if ((local_14 & 0x400000) == 0) {
            if ((local_14 & 0x38000) == 0) {
              if ((local_14 & 0x200000) == 0) {
                if ((local_14 & 0x800000) != 0) {
                  fVar1 = fVar1 - _DAT_005ae93c * _DAT_0054ea10;
                }
              }
              else {
                fVar1 = fVar1 + _DAT_005ae93c;
              }
            }
            else {
              fVar1 = fVar1 + _DAT_005ae940;
            }
          }
          else {
            fVar1 = fVar1 + _DAT_005ae938;
          }
          if ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN(local_10)) && local_10 < fVar1) break;
          local_10 = local_4 + local_10;
          iVar4 = iVar4 + ((((int)uVar3 < 1) - 1 & 2) - 1);
          iVar8 = iVar8 + ((param_3 % iVar2 - param_1 % iVar2) * 0x10000) / iVar7;
          local_c = local_c + 1;
          if (iVar7 < local_c) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 1;
#undef local_20
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
