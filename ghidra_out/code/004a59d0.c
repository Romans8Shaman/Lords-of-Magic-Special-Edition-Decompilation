
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a59d0(void *this,int param_1,int param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  float local_18;
  float local_14;
  float local_10;
  
  iVar7 = FUN_004a5170(this,param_1,param_2);
  fVar2 = *(float *)(*(int *)((int)this + 0x54) + 4 + iVar7 * 8);
  *(float *)(*(int *)((int)this + 0x54) + 4 + iVar7 * 8) = param_3;
  FUN_00517a50(&DAT_005876d0,param_1,param_2);
  FUN_004a55d0(this,param_1,param_2);
  FUN_004a55d0(this,param_1 + -1,param_2);
  FUN_004a55d0(this,param_1,param_2 + -1);
  FUN_004a55d0(this,param_1 + -1,param_2 + -1);
  local_10 = (float)*(int *)((int)this + 0x60);
  if (*(int *)((int)this + 0x60) <= *(int *)((int)this + 0x5c)) {
    local_10 = (float)*(int *)((int)this + 0x5c);
  }
  local_18 = 1.0;
  fVar3 = (float)(int)local_10 * (float)_DAT_0054da88;
  if ((!NAN(_DAT_0054da90) && !NAN(fVar3)) && fVar3 <= _DAT_0054da90) {
    return 1;
  }
  do {
    fVar4 = _DAT_0054da94 / (float)(*(int *)((int)this + 0x5c) + *(int *)((int)this + 0x60));
    fVar5 = (float)_DAT_0054da98;
    if ((NAN(fVar2) || NAN(param_3)) || fVar2 < param_3) {
      local_14 = param_3 - *(float *)((int)this + 0xc) * (local_18 - (float)_DAT_0054da88);
      if ((NAN(local_14) || NAN((float)_DAT_0054daa0)) || local_14 < (float)_DAT_0054daa0) {
        return 1;
      }
    }
    else {
      local_14 = *(float *)((int)this + 0xc) * (local_18 - (float)_DAT_0054da88) + param_3;
    }
    bVar6 = false;
    local_10 = 0.0;
    do {
      fVar10 = (float10)fcos((float10)local_10);
      lVar11 = __ftol(fVar10 * (float10)local_18);
      fVar10 = (float10)fsin((float10)local_10);
      iVar8 = (int)lVar11 + param_1;
      lVar11 = __ftol(fVar10 * (float10)local_18);
      iVar9 = (int)lVar11 + param_2;
      iVar7 = FUN_004a5170(this,iVar8,iVar9);
      pfVar1 = (float *)(*(int *)((int)this + 0x54) + 4 + iVar7 * 8);
      if ((NAN(fVar2) || NAN(param_3)) || fVar2 < param_3) {
        if ((!NAN(local_14 - _DAT_0054daac) && !NAN(*pfVar1)) && *pfVar1 < local_14 - _DAT_0054daac)
        goto LAB_004a5b58;
      }
      else if ((NAN(local_14 - _DAT_0054daa8) || NAN(*pfVar1)) || local_14 - _DAT_0054daa8 < *pfVar1
              ) {
LAB_004a5b58:
        *pfVar1 = local_14;
        FUN_00517a50(&DAT_005876d0,iVar8,iVar9);
        FUN_004a55d0(this,iVar8,iVar9);
        FUN_004a55d0(this,iVar8 + -1,iVar9);
        FUN_004a55d0(this,iVar8,iVar9 + -1);
        FUN_004a55d0(this,iVar8 + -1,iVar9 + -1);
        bVar6 = true;
      }
      local_10 = fVar4 * fVar5 + local_10;
    } while ((NAN(local_10) || NAN(_DAT_0054da94)) || local_10 < _DAT_0054da94);
    if (!bVar6) {
      return 1;
    }
    local_18 = local_18 - _DAT_0054dab0;
    if ((!NAN(local_18) && !NAN(fVar3)) && fVar3 <= local_18) {
      return 1;
    }
  } while( true );
}


