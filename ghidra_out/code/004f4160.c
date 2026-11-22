
undefined4 __cdecl FUN_004f4160(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar2 = param_2 + param_3;
  do {
    iVar6 = (int)*param_1;
    pcVar5 = param_1 + 1;
    if (iVar6 < 0) {
      pcVar7 = pcVar5;
      pcVar8 = param_2;
      for (uVar3 = (uint)-iVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      uVar3 = -iVar6;
      for (uVar4 = -iVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      param_1 = pcVar5 + -iVar6;
    }
    else {
      cVar1 = *pcVar5;
      uVar3 = iVar6 + 3;
      pcVar5 = param_2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)pcVar5 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
        pcVar5 = pcVar5 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      }
      param_1 = param_1 + 2;
    }
    param_2 = param_2 + uVar3;
  } while (param_2 < pcVar2);
  return 0;
}


