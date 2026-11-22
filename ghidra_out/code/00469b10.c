
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00469b10(void *this,float *param_1)

{
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10 [4];
  
  local_14 = 0x3f800000;
  local_20 = *param_1;
  local_1c = param_1[1];
  local_18 = param_1[2];
  FUN_004a47c0(&local_20,(int)this + 0x164,local_10);
  FUN_004a47c0(local_10,(int)this + 100,&local_30);
  local_18 = 0.0;
  local_30 = local_30 * _DAT_0054d7d4 - _DAT_0054d7d8;
  local_2c = _DAT_0054d7dc - local_2c * _DAT_0054d7dc;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  FUN_004a47c0(&local_20,(int)this + 0x164,local_10);
  FUN_004a47c0(local_10,(int)this + 100,&local_30);
  param_1[5] = _DAT_0054d7dc - local_2c * _DAT_0054d7dc;
  return;
}


