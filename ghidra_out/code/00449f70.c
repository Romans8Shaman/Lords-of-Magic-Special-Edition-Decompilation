
undefined4 * __fastcall FUN_00449f70(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_004b66c0(param_1);
  uVar2 = 0xffffffff;
  *param_1 = &PTR_FUN_0054d548;
  param_1[0x106] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x127] = 0xffffffff;
  pcVar4 = &DAT_00579274;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x107);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[0x105] = 1;
  return param_1;
}


