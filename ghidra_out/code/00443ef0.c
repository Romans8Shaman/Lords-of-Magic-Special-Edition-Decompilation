
undefined4 __cdecl FUN_00443ef0(void *param_1,int *param_2)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float local_10;
  uint local_c;
  uint local_8;
  float local_4;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar4 = local_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar4 = (float)((int)local_4 >> 8);
    }
    else {
      if (uVar1 != 4) goto LAB_0044409f;
      lVar5 = __ftol((float10)local_4);
      fVar4 = (float)lVar5;
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    local_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_8 = 0;
  }
  iVar2 = FUN_004026a0(&local_8,(uint *)&param_1,&local_c,&local_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return 0;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    fVar3 = local_4;
  }
  else if (uVar1 == 2) {
    fVar3 = (float)((int)local_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
LAB_0044409f:
      FUN_00404ab0(this,0xe);
      return 0;
    }
    lVar5 = __ftol((float10)local_4);
    fVar3 = (float)lVar5;
  }
  iVar2 = FUN_0043c360(&DAT_005cd310,param_1,(int)param_1,(int)fVar3,(int)fVar4);
  *param_2 = iVar2;
  if (iVar2 == 0) {
    FUN_004d41c0(this,s_buildinginfo_not_found_00556778);
    return 0;
  }
  return 1;
}


