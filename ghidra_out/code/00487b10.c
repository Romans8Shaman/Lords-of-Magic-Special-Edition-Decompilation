
void __fastcall FUN_00487b10(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x228a8);
  iVar3 = 0;
  do {
    uVar2 = uVar2 + 1;
    uVar1 = (int)uVar2 >> 0x1f;
    if ((*(byte *)(param_1 + 0x6640 + (((uVar2 ^ uVar1) - uVar1 & 0xf ^ uVar1) - uVar1) * 0x1d84) &
        1) != 0) {
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}


