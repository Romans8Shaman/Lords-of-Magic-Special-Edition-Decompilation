
undefined4
FUN_004c3280(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_3,0);
  if ((uVar1 == 0) || (uVar2 == 0)) {
    return 0;
  }
  local_dc = *(undefined4 *)(uVar2 + 0x1c);
  local_d8 = param_5;
  local_cc = param_2;
  local_ec = param_3;
  local_e8 = param_1;
  local_d0 = 0xffffffff;
  local_e4 = param_4;
  local_d4 = 0x40;
  FUN_0047c570(&local_ec,0);
  return 1;
}


