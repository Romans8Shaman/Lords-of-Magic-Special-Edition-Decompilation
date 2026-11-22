
undefined4 FUN_004051f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((~*(uint *)(param_1 + 0x30) & 0x100) != 0) && ((~*(uint *)(param_2 + 0x30) & 0x100) != 0))
     && (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    iVar2 = FUN_004c2330(param_1);
    if (0 < iVar2) {
      iVar2 = FUN_00525fc0((int *)(param_2 + 0xc4));
      if (-1 < iVar2) {
        uVar1 = *(undefined4 *)(param_2 + 0x28);
        *(undefined1 *)(param_1 + 0xc0) = 6;
        *(undefined1 *)(param_1 + 0xc1) = 0;
        *(short *)(param_1 + 0xc2) = (short)uVar1;
        return 1;
      }
    }
  }
  return 0;
}


