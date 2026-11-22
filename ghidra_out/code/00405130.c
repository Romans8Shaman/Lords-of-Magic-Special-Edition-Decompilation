
undefined4 FUN_00405130(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((((~*(uint *)(param_1 + 0x30) & 0x100) != 0) && ((~*(uint *)(param_2 + 0x30) & 0x100) != 0))
     && (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    uVar2 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(param_1 + 0x48));
    if (((uVar2 == 0) || ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) ||
       ((*(int *)(param_1 + 0x68) != 0x12 || (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x28)))
       )) {
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      *(undefined1 *)(param_1 + 0xc0) = 0x12;
      *(undefined1 *)(param_1 + 0xc1) = 0;
      *(short *)(param_1 + 0xc2) = (short)uVar1;
      return 1;
    }
  }
  return 0;
}


