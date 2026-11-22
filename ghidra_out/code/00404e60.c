
undefined4 __thiscall FUN_00404e60(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int local_ec [4];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  
  local_d4 = 0;
  uVar1 = FUN_00482ac0(this,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  local_ec[0] = param_1;
  local_d8 = param_2;
  local_ec[1] = 0xffffffff;
  local_d0 = 0xffffffff;
  local_dc = *(undefined4 *)(uVar1 + 0x1c);
  local_ec[2] = 0xffffffff;
  local_cc = 0;
  uVar2 = FUN_0047c6e0(&DAT_005aa12c,local_ec,2);
  return uVar2;
}


