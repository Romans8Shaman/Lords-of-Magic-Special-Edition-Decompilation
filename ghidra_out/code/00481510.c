
undefined4 __fastcall FUN_00481510(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar1 = iVar4 + 1 + *(int *)(param_1 + 0x228a8);
    uVar3 = (int)uVar1 >> 0x1f;
    iVar2 = ((uVar1 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
    if ((*(byte *)(param_1 + 0x6640 + iVar2 * 0x1d84) & 0x18) != 0) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  if (*(int *)(param_1 + 0x228a8) != iVar2) {
    *(int *)(param_1 + 0x228a8) = iVar2;
    FUN_0052cef0(&DAT_00584ae8,iVar2,1);
    FUN_004d05e0(DAT_005a7b78,DAT_005a7d44,DAT_005a7d48);
  }
  return 1;
}


