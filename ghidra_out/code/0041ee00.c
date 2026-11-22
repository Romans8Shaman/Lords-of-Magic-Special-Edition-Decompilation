
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0041ee00(void *this,int param_1)

{
  float fVar1;
  void *this_00;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 unused_reg_1;
  
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (this_00 == (void *)0x0) {
    return 0;
  }
  if ((*(int *)((int)this_00 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     (*(int *)((int)this + 0x135c) != 0)) {
    return -4;
  }
  uVar2 = FUN_00431160((int)this_00,unused_reg_1,0);
  if (uVar2 == 0) {
    if (*(int *)((int)this_00 + 0x48) == DAT_005a7d8c) {
      iVar3 = FUN_00421960(this_00);
      *(float *)((int)this + 0x1350) = *(float *)((int)this + 0x1350) - (float)iVar3;
      goto LAB_0041eea9;
    }
  }
  else if (*(int *)((int)this_00 + 0x48) == DAT_005a7d8c) {
    return -4;
  }
  iVar3 = FUN_00421960(this_00);
  *(float *)((int)this + 0x1354) = *(float *)((int)this + 0x1354) - (float)iVar3;
LAB_0041eea9:
  fVar1 = *(float *)((int)this + 0x1350) / _DAT_00586754;
  if ((NAN(fVar1) || NAN((float)_DAT_0054d458)) || fVar1 < (float)_DAT_0054d458) {
    if ((NAN(fVar1) || NAN((float)_DAT_0054d460)) || fVar1 < (float)_DAT_0054d460) {
      if ((NAN(fVar1) || NAN((float)_DAT_0054d468)) || fVar1 < (float)_DAT_0054d468) {
        iVar3 = -3;
        if ((NAN(fVar1) || NAN((float)_DAT_0054d470)) || fVar1 < (float)_DAT_0054d470) {
          iVar3 = -4;
        }
      }
      else {
        iVar3 = -2;
      }
    }
    else {
      iVar3 = -1;
    }
  }
  else {
    iVar3 = 0;
  }
  fVar1 = *(float *)((int)this + 0x1354) / DAT_00586750;
  if ((!NAN(fVar1) && !NAN((float)_DAT_0054d458)) && (float)_DAT_0054d458 <= fVar1) {
    return iVar3;
  }
  if ((!NAN(fVar1) && !NAN((float)_DAT_0054d460)) && (float)_DAT_0054d460 <= fVar1) {
    return iVar3 + 1;
  }
  if ((!NAN(fVar1) && !NAN((float)_DAT_0054d468)) && (float)_DAT_0054d468 <= fVar1) {
    return iVar3 + 2;
  }
  iVar4 = 3;
  if ((NAN(fVar1) || NAN((float)_DAT_0054d470)) || fVar1 < (float)_DAT_0054d470) {
    iVar4 = 4;
  }
  return iVar4 + iVar3;
}


