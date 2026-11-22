
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004adce0(int param_1)

{
  float *unused_stack_8;
  float fVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  void *this;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  longlong lVar12;
  int local_20;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  double local_8;
  
  local_c = *(int *)(param_1 + 0x1c) % DAT_005ae9c4;
  local_8 = (double)CONCAT44(local_8._4_4_,*(int *)(param_1 + 0x1c) / DAT_005ae9c4);
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5c),0);
  if (this == (void *)0x0) {
    iVar6 = *(int *)(param_1 + 0x4c);
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = *(float *)(DAT_005ae9ac + 4 + iVar6 * 8);
  }
  else {
    FUN_004aeb40(this,&local_18,&local_14,&local_10);
    iVar6 = *(int *)((int)this + 0x1c);
  }
  local_20 = iVar6 % DAT_005ae9c4;
  iVar6 = iVar6 / DAT_005ae9c4;
  iVar8 = local_20 - local_c;
  local_8._0_4_ = iVar6 - local_8._0_4_;
  if (DAT_005ae96c == 0) goto LAB_004addd1;
  iVar7 = DAT_005ae9c4 + iVar8;
  iVar5 = DAT_005ae9c4;
  if (iVar7 < -iVar8) {
LAB_004addac:
    local_20 = local_20 + iVar5;
    iVar8 = iVar7;
  }
  else {
    iVar7 = iVar8 - DAT_005ae9c4;
    if (-iVar8 < iVar7) {
      iVar5 = -DAT_005ae9c4;
      goto LAB_004addac;
    }
  }
  iVar5 = DAT_005ae9c4 + local_8._0_4_;
  iVar7 = DAT_005ae9c4;
  if (-local_8._0_4_ <= DAT_005ae9c4 + local_8._0_4_) {
    if (local_8._0_4_ - DAT_005ae9c4 <= -local_8._0_4_) goto LAB_004addd1;
    iVar5 = local_8._0_4_ - DAT_005ae9c4;
    iVar7 = -DAT_005ae9c4;
  }
  local_8._0_4_ = iVar5;
  iVar6 = iVar6 + iVar7;
LAB_004addd1:
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xac);
  unused_stack_8 = (float *)(param_1 + 0x118);
  fVar1 = SQRT((float)(iVar8 * iVar8 + local_8._0_4_ * local_8._0_4_)) / *(float *)(param_1 + 0x68);
  local_8 = (double)fVar1;
  if (this == (void *)0x0) {
    FUN_004a6600(&DAT_005ae958,unused_stack_8,local_20,iVar6);
  }
  else {
    lVar12 = __ftol((float10)fVar1);
    FUN_004ae5e0(this,unused_stack_8,(int)lVar12);
  }
  local_18 = local_18 + *unused_stack_8;
  bVar2 = NAN(_DAT_0054db70);
  bVar3 = _DAT_0054db70 <= local_8;
  local_14 = local_14 + *(float *)(param_1 + 0x11c);
  *unused_stack_8 = local_18;
  *(float *)(param_1 + 0x11c) = local_14;
  *(float *)(param_1 + 0x120) = local_10 + *(float *)(param_1 + 0x120);
  if ((!NAN(local_8) && !bVar2) && bVar3) {
    local_18 = (local_18 - *(float *)(param_1 + 0xec)) / (float)local_8;
    local_10 = (local_14 - *(float *)(param_1 + 0xf0)) / (float)local_8;
  }
  else {
    local_18 = local_18 - *(float *)(param_1 + 0xec);
    local_10 = local_14 - *(float *)(param_1 + 0xf0);
  }
  fVar1 = *(float *)(param_1 + 0x68) * _DAT_0054db78;
  local_18 = local_18 - *(float *)(param_1 + 0xb0);
  local_10 = local_10 - *(float *)(param_1 + 0xb4);
  fVar4 = -fVar1;
  *(float *)(param_1 + 0xbc) = local_18;
  *(float *)(param_1 + 0xc0) = local_10;
  if ((!NAN(local_18) && !NAN(fVar4)) && fVar4 <= local_18) {
    if ((!NAN(local_18) && !NAN(fVar1)) && fVar1 < local_18) {
      *(float *)(param_1 + 0xbc) = fVar1;
    }
  }
  else {
    *(float *)(param_1 + 0xbc) = fVar4;
  }
  if ((!NAN(local_10) && !NAN(fVar4)) && fVar4 <= local_10) {
    if ((!NAN(local_10) && !NAN(fVar1)) && fVar1 < local_10) {
      *(float *)(param_1 + 0xc0) = fVar1;
    }
  }
  else {
    *(float *)(param_1 + 0xc0) = fVar4;
  }
  fVar9 = (float10)*(float *)(param_1 + 0xbc) + (float10)*(float *)(param_1 + 0xb0);
  fVar10 = (float10)*(float *)(param_1 + 0xc0) + (float10)*(float *)(param_1 + 0xb4);
  fVar1 = (float)fVar9;
  fVar11 = (float10)fpatan(fVar10,fVar9);
  fVar4 = fVar1 + *(float *)(param_1 + 0xa4);
  fVar9 = fVar10 + (float10)*(float *)(param_1 + 0xa8);
  *(float *)(param_1 + 0xb0) = fVar1;
  *(float *)(param_1 + 0xb4) = (float)fVar10;
  *(float *)(param_1 + 0xa4) = fVar4;
  *(float *)(param_1 + 0xa8) = (float)fVar9;
  *(float *)(param_1 + 0xcc) = fVar4;
  *(float *)(param_1 + 0xd0) = (float)fVar9;
  *(float *)(param_1 + 200) = (float)fVar11;
  return;
}


