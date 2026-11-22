
void __thiscall FUN_0044a840(void *this,char *param_1,undefined4 *param_2,byte *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  char acStack_34 [52];
  
  pbVar4 = FUN_00505f10();
  do {
    bVar3 = *pbVar4;
    bVar10 = bVar3 < *param_3;
    if (bVar3 != *param_3) {
LAB_0044a87f:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0044a884;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar4[1];
    bVar10 = bVar3 < param_3[1];
    if (bVar3 != param_3[1]) goto LAB_0044a87f;
    pbVar4 = pbVar4 + 2;
    param_3 = param_3 + 2;
  } while (bVar3 != 0);
  iVar5 = 0;
LAB_0044a884:
  if (iVar5 == 0) {
    uVar6 = 0xffffffff;
    do {
      pcVar8 = param_1;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = param_1 + 1;
      cVar2 = *param_1;
      param_1 = pcVar8;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    pcVar9 = acStack_34;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    FUN_0053a090(acStack_34,&DAT_00556b24,(uint)param_1);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x36c) * 0x10 + 0x3b4 + (int)this);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  FUN_004b7c80(this,acStack_34);
  return;
}


