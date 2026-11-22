
void FUN_004077b0(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  int local_108 [5];
  int local_f3;
  undefined4 local_ef;
  int local_eb;
  undefined4 local_e7;
  undefined1 local_e3;
  undefined1 local_e2 [226];
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return;
  }
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_2,0);
  if (uVar1 == 0) {
    return;
  }
  FUN_0048cc70(local_108,0x44);
  local_f3 = param_1;
  local_eb = param_2;
  local_e7 = 0xffffffff;
  FUN_00407480(local_e2,param_3,param_4);
  local_ef = 0xe;
  local_e3 = 0;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
}


