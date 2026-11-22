
undefined4 FUN_0044ac70(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  void *this;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  this = DAT_005d1e84;
  uVar3 = 0xffffffff;
  pcVar5 = *(char **)(param_3 + 8);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = &DAT_005791c8 + *(int *)((int)DAT_005d1e84 + 8) * 0x28;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (this == (void *)0x0) {
    return 0;
  }
  uVar2 = FUN_004b80f0(this,param_1);
  return uVar2;
}


