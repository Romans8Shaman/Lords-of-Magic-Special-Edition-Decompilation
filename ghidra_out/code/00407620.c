
undefined4 FUN_00407620(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
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
  iVar2 = FUN_004a51c0(&DAT_005ae958,param_3,param_4);
  local_e7 = FUN_00413530(this,iVar2);
  if (local_e7 == -1) {
    return 0;
  }
  FUN_0048cc70(local_108,0x44);
  local_f3 = param_1;
  local_eb = param_2;
  local_ef = 0x10;
  local_e3 = 0;
  uVar3 = FUN_00489b70(&DAT_00584ae8,local_108);
  return uVar3;
}


