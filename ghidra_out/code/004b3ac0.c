
BOOL __fastcall FUN_004b3ac0(int param_1)

{
  char cVar1;
  int iVar2;
  HDC hdc;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  char *pcVar6;
  
  if (DAT_00586644 == 0) {
    iVar2 = *(int *)(param_1 + 0x1240);
    if (*(char *)(param_1 + 0x1345) == '\0') {
      if (iVar2 == 5) {
        FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_lose5_wav_0055ce80,
                     *(uint *)(param_1 + 0x1394));
        goto LAB_004b3c0c;
      }
      uVar4 = *(uint *)(param_1 + 0x1394);
      pcVar6 = s__s_lose_da_wav_0055cebc;
    }
    else {
      if (iVar2 == 5) {
        *(undefined4 *)(param_1 + 0xfc8) = 1;
        goto LAB_004b3c0c;
      }
      uVar4 = *(uint *)(param_1 + 0x1394);
      pcVar6 = s__s_lose_db_wav_0055ceac;
    }
  }
  else if (DAT_00586644 == 1) {
    iVar2 = *(int *)(param_1 + 0x1240);
    if (*(char *)(param_1 + 0x1345) == '\0') {
      if (iVar2 == 5) {
        FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_win5_wav_0055ce90,
                     *(uint *)(param_1 + 0x1394));
        goto LAB_004b3c0c;
      }
      uVar4 = *(uint *)(param_1 + 0x1394);
      pcVar6 = s__s_win_da_wav_0055cedc;
    }
    else {
      if (iVar2 == 5) {
        *(undefined4 *)(param_1 + 0xfc8) = 1;
        goto LAB_004b3c0c;
      }
      uVar4 = *(uint *)(param_1 + 0x1394);
      pcVar6 = s__s_win_db_wav_0055cecc;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x1394);
    iVar2 = (int)*(char *)(param_1 + 0x1344);
    if (*(char *)(param_1 + 0x1345) != '\0') {
      FUN_0053a090((undefined1 *)(param_1 + 0x1244),s__s_neut_db_wav_0055ceec,uVar4,iVar2);
      *(char *)(param_1 + 0x1344) = (*(char *)(param_1 + 0x1344) == '\x01') + '\x01';
      goto LAB_004b3c0c;
    }
    pcVar6 = s__s_neut_da_wav_0055cefc;
  }
  FUN_0053a090((undefined1 *)(param_1 + 0x1244),pcVar6,uVar4,iVar2);
LAB_004b3c0c:
  BVar3 = 0;
  if (*(int *)(param_1 + 0x1390) != 0) {
    hdc = GetDC(DAT_00584d54);
    uVar4 = 0xffffffff;
    pCVar5 = (LPCSTR)(param_1 + 0x1244);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pCVar5;
      pCVar5 = pCVar5 + 1;
    } while (cVar1 != '\0');
    BVar3 = TextOutA(hdc,10,0x15e,(LPCSTR)(param_1 + 0x1244),~uVar4 - 1);
  }
  return BVar3;
}


