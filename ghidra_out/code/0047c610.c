
undefined4 __thiscall FUN_0047c610(void *this,int *param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined *puVar2;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_004176d0(this_00,0);
  iVar1 = this_00[0x12];
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 != (undefined *)0x0) {
    iVar1 = FUN_004bb5a0((int)puVar2);
    if (iVar1 != 0) {
      local_ec = *param_1;
      local_e8 = param_1[1];
      local_e4 = param_1[2];
      local_e0 = param_1[3];
      local_d8 = param_1[5];
      local_dc = this_00[7];
      local_d4 = param_1[6];
      local_d0 = param_1[7];
      local_cc = param_1[8];
      FUN_0047c6e0(this,&local_ec,param_1[9]);
    }
  }
  return 1;
}


