
void FUN_00487ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *this;
  int iVar3;
  void *local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4 [42];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a82b;
  local_c = ExceptionList;
  local_b4[8] = 0x25;
  local_b4[9] = 0x25;
  local_b4[0xc] = 0xf;
  local_b4[0xd] = 0x3c;
  local_b4[0xe] = 0x3c;
  local_b4[5] = 0x3c;
  local_b4[7] = 0x3c;
  local_b4[0xf] = 0xf;
  local_b4[0x24] = 0x11a;
  local_b4[0x28] = 0x11a;
  local_b4[0x29] = 0x11a;
  local_b4[4] = 0xf;
  local_b4[6] = 0xf;
  local_b4[0x1c] = 0x6c;
  local_b4[0x1d] = 0x6c;
  local_b4[0x1e] = 0x6c;
  local_b4[0x1f] = 0x6c;
  local_b4[2] = 0x26;
  local_b4[3] = 0x26;
  iVar3 = 0;
  local_b4[0x23] = 0xbc;
  local_b4[0x27] = 0xbc;
  local_b4[10] = 5;
  local_b4[0xb] = 0x45;
  local_b4[0] = 6;
  local_b4[1] = 0x46;
  local_b4[0x21] = 0;
  local_b4[0x22] = 0x5e;
  local_b4[0x25] = 0;
  local_b4[0x26] = 0x5e;
  local_b4[0x18] = 0;
  local_b4[0x19] = 0;
  local_b4[0x1a] = 0;
  local_b4[0x1b] = 0;
  local_b4[0x20] = 0xd8;
  local_b4[0x10] = 0x58;
  local_b4[0x11] = 0xa0;
  local_b4[0x12] = 0xc4;
  local_b4[0x13] = 0x7c;
  local_b4[0x14] = 0xd6;
  local_b4[0x15] = 0x8e;
  local_b4[0x16] = 0x6a;
  local_b4[0x17] = 0xb2;
  ExceptionList = &local_c;
  this = (void *)FUN_00491ec0(&DAT_005a7b50,param_2);
  if (this != (void *)0x0) {
    DAT_0058364c = DAT_0058364c + 0x14;
    local_c4 = local_b4[param_1 + 0x10];
    local_c0 = 0x112;
    local_bc = 0x12;
    local_b8 = 0x12;
    iVar1 = local_b4[param_1];
    iVar2 = local_b4[param_1 + 8];
    local_4 = 0;
    local_c8 = this;
    do {
      FUN_00496340(this,(int *)&local_c8,*(int *)((int)local_b4 + iVar3 + 0x84) + iVar2,
                   *(int *)((int)local_b4 + iVar3 + 0x60) + iVar1,0);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x24);
    DAT_0058364c = DAT_0058364c + -0x14;
  }
  ExceptionList = local_c;
  return;
}


