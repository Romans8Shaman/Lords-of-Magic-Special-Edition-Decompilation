
void __thiscall FUN_00403eb0(void *this,void *param_1)

{
  uint uVar1;
  int local_ec [4];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  
  *(undefined4 *)this = 1;
  *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 2;
  if ((*(int *)((int)param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) ||
     (uVar1 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)param_1 + 0x48)), uVar1 != 0)) {
    FUN_00401730(param_1);
    local_d8 = *(undefined4 *)((int)this + 8);
    local_ec[0] = *(int *)((int)param_1 + 0x28);
    local_ec[1] = 0xffffffff;
    local_d0 = 0xffffffff;
    local_ec[2] = 0xffffffff;
    local_dc = *(undefined4 *)((int)param_1 + 0x1c);
    local_d4 = 0;
    local_cc = 0;
    FUN_0047c6e0(&DAT_005aa12c,local_ec,0);
    return;
  }
  return;
}


