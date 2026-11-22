
int __fastcall FUN_004b3a40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1240) != 5) {
    iVar3 = FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_neut1a_wav_0055ce9c,
                         *(uint *)(param_1 + 0x1394));
    return iVar3;
  }
  cVar1 = *(char *)(param_1 + 0x1345);
  uVar2 = (uint)DAT_00586644 >> 8;
  if (DAT_00586644 == 0) {
    if (cVar1 == '\0') {
      iVar3 = FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_lose5_wav_0055ce80,
                           *(uint *)(param_1 + 0x1394));
      return iVar3;
    }
  }
  else if (cVar1 == '\0') {
    iVar3 = FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_win5_wav_0055ce90,
                         *(uint *)(param_1 + 0x1394));
    return iVar3;
  }
  *(undefined4 *)(param_1 + 0xfc8) = 1;
  return CONCAT31((int3)uVar2,cVar1);
}


