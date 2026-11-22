
undefined4 FUN_004076f0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  int local_108 [5];
  int local_f3;
  undefined4 local_ef;
  int local_eb;
  int local_e7;
  undefined1 local_e3;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_2,0);
  if (this == (void *)0x0) {
    return 0;
  }
  local_e7 = FUN_00413530(this,param_3);
  if (local_e7 == -1) {
    return 0;
  }
  FUN_0048cc70(local_108,0x44);
  local_f3 = param_1;
  local_eb = param_2;
  local_ef = 0x10;
  local_e3 = 0;
  uVar2 = FUN_00489b70(&DAT_00584ae8,local_108);
  return uVar2;
}


