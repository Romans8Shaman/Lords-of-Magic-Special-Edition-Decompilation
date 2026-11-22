
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004aec10(int *param_1)

{
  float *unused_stack_8;
  float *unused_stack_8_00;
  double dVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  void *this;
  void *this_00;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  int local_30;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1[0x14],0);
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1[0x17],0);
  local_10 = this_00;
  if (this == (void *)0x0) {
    param_1[0x1c] = param_1[0x1c] | 0xc0;
  }
  else {
    FUN_004ae7e0(this,&local_1c,&local_18,&local_14,(short)param_1[0x20]);
    local_20 = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
    local_24 = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    local_1c = 0.0;
    local_18 = 0.0;
    local_20 = param_1[0x11] % DAT_005ae9c4;
    local_24 = param_1[0x11] / DAT_005ae9c4;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x80) != 0) {
    local_14 = (float)param_1[0x12];
  }
  if (this_00 == (void *)0x0) {
    iVar7 = param_1[0x13];
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = *(float *)(DAT_005ae9ac + 4 + iVar7 * 8);
  }
  else {
    FUN_004aeb40(this_00,&local_c,&local_8,&local_4);
    iVar7 = *(int *)((int)this_00 + 0x1c);
  }
  local_30 = iVar7 % DAT_005ae9c4;
  iVar7 = iVar7 / DAT_005ae9c4;
  iVar9 = local_30 - local_20;
  iVar8 = iVar7 - local_24;
  if (DAT_005ae96c == 0) goto LAB_004aed84;
  iVar6 = DAT_005ae9c4 + iVar9;
  iVar2 = DAT_005ae9c4;
  if (DAT_005ae9c4 + iVar9 < -iVar9) {
LAB_004aed5f:
    iVar9 = iVar6;
    local_30 = local_30 + iVar2;
  }
  else if (-iVar9 < iVar9 - DAT_005ae9c4) {
    iVar6 = iVar9 - DAT_005ae9c4;
    iVar2 = -DAT_005ae9c4;
    goto LAB_004aed5f;
  }
  iVar6 = DAT_005ae9c4 + iVar8;
  iVar2 = DAT_005ae9c4;
  if (-iVar8 <= DAT_005ae9c4 + iVar8) {
    if (iVar8 - DAT_005ae9c4 <= -iVar8) goto LAB_004aed84;
    iVar6 = iVar8 - DAT_005ae9c4;
    iVar2 = -DAT_005ae9c4;
  }
  iVar8 = iVar6;
  iVar7 = iVar7 + iVar2;
LAB_004aed84:
  dVar1 = (double)(SQRT((float)(iVar9 * iVar9 + iVar8 * iVar8)) / (float)param_1[0x1a] -
                  (float)_DAT_0054dba8);
  fVar10 = FUN_0053a7a0(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar11 = __ftol(fVar10);
  param_1[0x51] = (int)lVar11;
  unused_stack_8 = (float *)(param_1 + 0x3b);
  if (this == (void *)0x0) {
    FUN_004a6600(&DAT_005ae958,unused_stack_8,local_20,local_24);
  }
  else {
    FUN_004ae5e0(this,unused_stack_8,0);
  }
  *unused_stack_8 = local_1c + *unused_stack_8;
  unused_stack_8_00 = (float *)(param_1 + 0x46);
  param_1[0x3c] = (int)(local_18 + (float)param_1[0x3c]);
  param_1[0x3d] = (int)(local_14 + (float)param_1[0x3d]);
  if (local_10 == (void *)0x0) {
    FUN_004a6600(&DAT_005ae958,unused_stack_8_00,local_30,iVar7);
  }
  else {
    FUN_004ae5e0(local_10,unused_stack_8_00,param_1[0x51]);
  }
  fVar3 = local_c + *unused_stack_8_00;
  fVar4 = local_8 + (float)param_1[0x47];
  fVar5 = local_4 + (float)param_1[0x48];
  local_10 = (void *)param_1[0x1b];
  *unused_stack_8_00 = fVar3;
  param_1[0x47] = (int)fVar4;
  param_1[0x2b] = param_1[0x3d];
  param_1[0x48] = (int)fVar5;
  param_1[0x29] = (int)*unused_stack_8;
  param_1[0x31] = (int)local_10;
  param_1[0x2a] = param_1[0x3c];
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if (param_1[0x51] < 1) {
    fVar5 = fVar5 - (float)param_1[0x3d];
    param_1[0x2c] = (int)(fVar3 - *unused_stack_8);
    param_1[0x2d] = (int)(fVar4 - (float)param_1[0x3c]);
  }
  else {
    param_1[0x2c] = (int)((fVar3 - *unused_stack_8) / (float)fVar10);
    param_1[0x2d] = (int)((fVar4 - (float)param_1[0x3c]) / (float)fVar10);
    if ((*(byte *)(param_1 + 0x1c) & 4) == 0) {
      fVar5 = (fVar5 - (float)param_1[0x3d]) -
              (float)local_10 * _DAT_0054db7c * (float)fVar10 * (float)fVar10;
    }
    else {
      fVar5 = fVar5 - (float)param_1[0x3d];
    }
    fVar5 = fVar5 / (float)fVar10;
  }
  param_1[0x2e] = (int)fVar5;
  fVar10 = (float10)fpatan((float10)(float)param_1[0x2d],(float10)(float)param_1[0x2c]);
  param_1[0x28] = 0;
  param_1[0xc] = param_1[0xc] | 2;
  param_1[0x32] = (int)(float)fVar10;
  if (-1 < param_1[0x23]) {
    _DAT_005867b0 = 0;
    _DAT_005867a8 = DAT_00586774;
    DAT_005867a4 = param_1[0x23];
    _DAT_005867a0 = 0xfffffc18;
    _DAT_005867b4 = 0;
    FUN_00478c00(&DAT_00585408,param_1[0x23]);
  }
  (/*IC:004aefda*/**(code **)(*param_1 + 0x2c))(param_1);
  return;
}


