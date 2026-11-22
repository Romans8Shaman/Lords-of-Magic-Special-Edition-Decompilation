
undefined4 __thiscall FUN_004d5c10(void *this,LPCSTR param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  LPCSTR pCVar5;
  char *pcVar6;
  
  uVar2 = 0xffffffff;
  pCVar5 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
  } while (cVar1 != '\0');
  if (0x104 < ~uVar2) {
    return 0;
  }
  uVar2 = 0xffffffff;
  pCVar5 = param_1;
  do {
    pcVar4 = pCVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = pCVar5 + 1;
    cVar1 = *pCVar5;
    pCVar5 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar6 = (char *)((int)this + 0x764);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_0053a790(param_1);
  return 1;
}


