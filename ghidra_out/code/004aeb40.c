
void __thiscall FUN_004aeb40(void *this,undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  int local_60;
  int local_5c;
  float local_58 [4];
  float local_48;
  float local_2c [4];
  float local_1c;
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0049cb20(*(void **)((int)this + 0x2c),&local_5c,&local_60,7,0xffffffff);
  }
  if (iVar1 == 0) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 1.0;
    return;
  }
  local_2c[0] = 0.0;
  local_2c[1] = 0.0;
  local_2c[2] = 0.0;
  FUN_00469ae0(&DAT_005876d0,local_2c);
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 1.0;
  FUN_00469ae0(&DAT_005876d0,local_58);
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = (float)local_60 / (local_48 - local_1c);
  return;
}


