
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a6200(void *this,int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int local_18;
  float local_14;
  float local_c;
  int local_8;
  
  if (param_1 < 0) {
    return 0;
  }
  *(float *)((int)this + 0x44) = param_2;
  iVar2 = param_1 % *(int *)((int)this + 0x5c);
  local_c = 1.0;
  local_14 = -1.0;
  local_18 = 0;
  iVar1 = param_1 / *(int *)((int)this + 0x5c);
  do {
    local_8 = 2;
    iVar4 = iVar1;
    do {
      fVar5 = FUN_004a5210(this,local_18 + iVar2,iVar4);
      fVar5 = fVar5 + (float10)param_3;
      param_2 = (float)fVar5;
      if ((NAN(fVar5) || NAN((float10)_DAT_0054dac8)) || fVar5 < (float10)_DAT_0054dac8) {
        param_2 = 0.0;
      }
      FUN_004a59d0(this,local_18 + iVar2,iVar4,param_2);
      if ((!NAN(local_c) && !NAN(param_2)) && param_2 <= local_c) {
        local_c = param_2;
      }
      if ((NAN(local_14) || NAN(param_2)) || local_14 < param_2) {
        local_14 = param_2;
      }
      iVar4 = iVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_18 = local_18 + 1;
  } while (local_18 < 2);
  if (((!NAN(param_3) && !NAN((float)_DAT_0054daa0)) && (float)_DAT_0054daa0 <= param_3) ||
     ((!NAN(local_14) && !NAN((float)_DAT_0054dac8)) && (float)_DAT_0054dac8 <= local_14)) {
    if (((!NAN(param_3) && !NAN((float)_DAT_0054daa0)) && (float)_DAT_0054daa0 < param_3) &&
       ((!NAN(local_14) && !NAN((float)_DAT_0054dac8)) && (float)_DAT_0054dac8 <= local_14)) {
      FUN_00508f10((void *)((int)this + 0xd8),
                   (int)*(short *)(*(int *)((int)this + 0x54) + param_1 * 8));
      if (iVar1 + -1 <= iVar1 + 1) {
        param_3 = (float)(((iVar1 + 1) - (iVar1 + -1)) + 1);
        do {
          if (iVar2 + -1 <= iVar2 + 1) {
            iVar4 = ((iVar2 + 1) - (iVar2 + -1)) + 1;
            do {
              FUN_004a55d0(this,iVar2,iVar1);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          param_3 = (float)((int)param_3 + -1);
        } while (param_3 != 0.0);
      }
    }
  }
  else {
    local_18 = 0;
    do {
      iVar3 = 2;
      iVar4 = iVar1;
      do {
        FUN_004a5210(this,local_18 + iVar2,iVar4);
        FUN_004a59d0(this,local_18 + iVar2,iVar4,0.0);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    FUN_004a55d0(this,iVar2,iVar1);
  }
  FUN_00519b30(&DAT_005876d0,0);
  FUN_004a6470((int)this);
  return 1;
}


