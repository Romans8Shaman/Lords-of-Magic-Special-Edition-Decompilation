
void __fastcall FUN_00504810(int param_1)

{
  undefined4 *this;
  int local_c0 [6];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98 [6];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [6];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [6];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054c134;
  local_c = ExceptionList;
  if (DAT_00586798 == 0) {
    local_c0[0] = param_1 + 0x5e8;
    local_a8 = 0xa1;
    local_a4 = 0x1c;
    local_a0 = 0x48;
    local_9c = 0x81;
    local_58 = 0x177;
    local_54 = 0x15;
    local_50 = 0x6f;
    local_4c = 0x7a;
    local_80 = 0x210;
    local_7c = 0x4a;
    local_78 = 0x28;
    local_74 = 0x4f;
    local_30 = 0x1e5;
    local_2c = 0x99;
    local_28 = 0x5c;
    local_24 = 0xa8;
    local_c0[1] = 0x153;
    local_c0[2] = 0xdd;
    local_c0[3] = 0x93;
    local_c0[4] = 0x80;
    local_98[1] = 0xa4;
    local_98[2] = 0xd6;
    local_98[3] = 0x87;
    local_98[4] = 0x8f;
    local_70[1] = 0x43;
    local_70[2] = 0xc3;
    local_70[3] = 0x40;
    local_70[4] = 0x6f;
    local_48[1] = 0x34;
    local_48[2] = 0x50;
    local_48[3] = 0x4b;
    local_48[4] = 0x73;
    DAT_0058364c = DAT_0058364c + 0xb4;
    local_20[1] = 0x11b;
    local_20[2] = 0x187;
    local_20[3] = 0x3e;
    local_20[4] = 0x47;
    local_4 = 8;
    ExceptionList = &local_c;
    local_c0[5] = local_c0[0];
    local_98[0] = local_c0[0];
    local_98[5] = local_c0[0];
    local_70[0] = local_c0[0];
    local_70[5] = local_c0[0];
    local_48[0] = local_c0[0];
    local_48[5] = local_c0[0];
    local_20[0] = local_c0[0];
    this = (undefined4 *)FUN_004754c0(0x584ae8);
    FUN_00496340(this,local_c0 + 5,0xa1,0x1c,0);
    FUN_00496340(this,local_70 + 5,0x177,0x15,0);
    FUN_00496340(this,local_98 + 5,0x210,0x4a,0);
    FUN_00496340(this,local_48 + 5,0x1e5,0x99,0);
    FUN_00496340(this,local_c0,0x153,0xdd,0);
    FUN_00496340(this,local_98,0xa4,0xd6,0);
    FUN_00496340(this,local_70,0x43,0xc3,0);
    FUN_00496340(this,local_48,0x34,0x50,0);
    if ((*(int *)(*(int *)(param_1 + 0xb8) + 0x70) != 0) &&
       (*(int *)(*(int *)(param_1 + 0xb8) + 0xa4) != 0)) {
      FUN_00496340(this,local_20,0x204,0x98,0);
    }
    FUN_004755a0(&DAT_00584ae8,this);
    FUN_005007e0(&DAT_00584ae8,1);
    FUN_004753d0(0x584ae8);
    DAT_0058364c = DAT_0058364c + -0xb4;
  }
  ExceptionList = local_c;
  return;
}


