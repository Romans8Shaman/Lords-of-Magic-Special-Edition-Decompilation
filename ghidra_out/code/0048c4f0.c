
void __cdecl FUN_0048c4f0(byte param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005262b0((undefined4 *)&DAT_005cd2c4);
  iVar2 = FUN_004c4cf0(&DAT_005cd2c4);
  while (iVar2 != 0) {
    iVar2 = FUN_0048c2b0(iVar2);
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & ~(1 << (param_1 & 0x1f));
    }
    iVar2 = FUN_004c4cf0(&DAT_005cd2c4);
  }
  FUN_004c4d30(&DAT_005cd2c4,uVar1);
  return;
}


