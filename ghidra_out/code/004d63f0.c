
bool FUN_004d63f0(void *param_1,uint param_2,float param_3,int param_4)

{
  float fVar1;
  void *this;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uint local_8 [2];
  
  this = param_1;
  pfVar4 = (float *)(param_2 + param_4);
  switch(param_3) {
  case 0.0:
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar3 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      param_2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar3 * 8);
      param_3 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      param_2 = 0;
    }
    iVar3 = FUN_004026a0(&param_2,(uint *)pfVar4,(uint *)&param_4,(float *)&param_1);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    break;
  case 1.4013e-45:
    FUN_0040adb0(param_1,local_8);
    iVar3 = FUN_004026a0(local_8,(uint *)&param_1,&param_2,(float *)&param_4);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    *(undefined2 *)pfVar4 = param_1._0_2_;
    return true;
  case 2.8026e-45:
    FUN_0040adb0(param_1,local_8);
    iVar3 = FUN_004026a0(local_8,(uint *)&param_1,&param_2,(float *)&param_4);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    *(undefined1 *)pfVar4 = param_1._0_1_;
    return true;
  case 4.2039e-45:
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar3 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      param_2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar3 * 8);
      param_3 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar3 * 8);
    }
    else {
      FUN_00404ab0(param_1,6);
      param_2 = 0;
    }
    iVar3 = FUN_004026a0(&param_2,(uint *)&param_4,(uint *)&param_1,pfVar4);
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return false;
    }
    break;
  case 5.60519e-45:
    FUN_0040adb0(param_1,&param_2);
    iVar3 = FUN_004026a0(&param_2,(uint *)&param_4,(uint *)pfVar4,(float *)&param_1);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return false;
    }
    break;
  case 7.00649e-45:
    FUN_0040adb0(param_1,&param_2);
    iVar3 = FUN_0041da00((int)this);
    if (iVar3 == 0) {
      if ((char)param_2 != '\b') {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        param_3 = 0.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    if (param_3 == 0.0) {
      return false;
    }
    *pfVar4 = param_3;
    break;
  case 8.40779e-45:
    pfVar2 = (float *)FUN_0040adb0(param_1,&param_2);
    *pfVar4 = *pfVar2;
    pfVar4[1] = pfVar2[1];
    return SUB41(*pfVar4,0) != '\0';
  case 9.80909e-45:
    if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
      iVar3 = *(int *)((int)param_1 + 0x54) + 1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      fVar1 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar3 * 8);
      *pfVar4 = *(float *)(*(int *)((int)param_1 + 0x50) + -8 + iVar3 * 8);
      pfVar4[1] = fVar1;
      return SUB41(*pfVar4,0) != '\0';
    }
    FUN_00404ab0(param_1,6);
    *pfVar4 = 0.0;
    pfVar4[1] = param_3;
    return SUB41(*pfVar4,0) != '\0';
  default:
    return false;
  }
  return true;
}


