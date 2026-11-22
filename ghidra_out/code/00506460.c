
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00506460(void *this,void *param_1,int param_2)

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
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  uint local_84;
  uint local_80;
  float local_7c;
  float local_78;
  uint local_74;
  float local_70;
  float local_68;
  float local_60;
  uint local_5c [2];
  float local_54;
  uint local_50 [2];
  float local_48;
  float local_40;
  uint local_3c [2];
  uint local_34 [3];
  float local_28;
  float local_20;
  float local_18;
  float local_14 [2];
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = FUN_00420580((int)this);
  if (iVar3 == 0) {
    local_90 = (float)FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c));
    local_88 = (float)(int)local_90;
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = (float)FUN_005063b0(param_1,0);
    local_90 = 0.0;
    fVar1 = (float)iVar3 / (float)(int)local_8c;
    if (*(int *)((int)this + 0x4c) < 1) {
      return 0;
    }
    lVar11 = __ftol((float10)local_88);
    local_78 = (float)lVar11;
    piVar8 = (int *)((int)this + 0xc4);
    do {
      iVar3 = FUN_00525fe0(piVar8);
      if ((int)local_78 <= iVar3) {
        iVar3 = FUN_005228b0(piVar8,*(undefined4 *)((int)this + 0x28),local_90);
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
          FUN_0041d1d0(DAT_005a7b78,4,local_8c);
          local_18 = fVar1;
          FUN_0041d1d0(DAT_005a7b78,4,fVar1);
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
      local_90 = (float)((int)local_90 + 1);
      piVar8 = piVar8 + 0x13;
      if (*(int *)((int)this + 0x4c) <= (int)local_90) {
        return 0;
      }
    } while( true );
  }
  iVar3 = FUN_004c2330((int)this);
  if ((iVar3 < 1) || (uVar4 = FUN_00506100((int)this), uVar4 != 0)) {
    iVar3 = FUN_00522870((int)this);
    local_90 = (float)iVar3;
    local_8c = (float)FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c));
    local_88 = (float)(int)local_8c;
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = (float)FUN_005063b0(param_1,0);
    pvVar7 = DAT_005a7b78;
    local_94 = (float)iVar3 / (float)(int)local_8c;
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
    local_8c = (float)FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c));
    local_88 = (float)(int)local_8c;
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = (float)FUN_005063b0(param_1,0);
    pvVar7 = DAT_005a7b78;
    local_94 = (float)iVar3 / (float)(int)local_8c;
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
    local_8c = (float)FUN_004a8960(&DAT_005ae958,*(int *)((int)this + 0x1c),
                                   *(int *)((int)param_1 + 0x1c));
    local_88 = (float)(int)local_8c;
    iVar3 = FUN_005063b0(param_1,1);
    local_8c = (float)FUN_005063b0(param_1,0);
    pvVar7 = DAT_005a7b78;
    local_94 = (float)iVar3 / (float)(int)local_8c;
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
}


