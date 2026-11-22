
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00532820(void *this,int param_1,float param_2,int param_3,float param_4,float param_5)

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
  float local_20;
  uint local_14;
  float local_10;
  int local_c;
  int local_8;
  float local_4;
  
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
        if ((!NAN(param_2) && !NAN(local_20)) && local_20 < param_2) {
          local_20 = param_2;
        }
        if ((!NAN(param_4) && !NAN(fVar1)) && fVar1 < param_4) {
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
            if ((!NAN(fVar1) && !NAN(local_10)) && local_10 < fVar1) {
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
      if ((!NAN(param_2) && !NAN(local_20)) && local_20 < param_2) {
        local_20 = param_2;
      }
      if ((!NAN(param_4) && !NAN(fVar1)) && fVar1 < param_4) {
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
          if ((!NAN(fVar1) && !NAN(local_10)) && local_10 < fVar1) break;
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
}


