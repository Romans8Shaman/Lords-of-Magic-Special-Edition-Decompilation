
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f5440(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b96b;
  pvStack_c = ExceptionList;
  DAT_00584aac = param_1;
  _DAT_00584ad4 = param_1;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined4 *)Ordinal_401(0x3e84,s_c__NEWERSTORM_H_storm_h_00573258,0x3fa,0);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar2 + 1;
    *puVar2 = 500;
    FUN_00539ff0(puVar6,0x20,500,FUN_004f56f0,FUN_004f5770);
  }
  *(undefined4 **)(param_1 + 0x114) = puVar6;
  puVar3 = (uint *)Ordinal_401(0xc,s_c__NEWERSTORM_H_storm_h_00573258,0x3ef,0);
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x114);
    uVar4 = Ordinal_401(2000,s_c__NEWERSTORM_H_storm_h_00573258,0x3fa,0);
    puVar3[2] = uVar4;
    uVar5 = uVar4 + 2000;
    puVar3[1] = uVar5;
    *puVar3 = uVar5;
    if (uVar4 < uVar5) {
      do {
        *puVar3 = uVar5 - 4;
        *(int *)(uVar5 - 4) = iVar8;
        uVar5 = *puVar3;
        iVar8 = iVar8 + 0x20;
      } while (puVar3[2] < uVar5);
    }
  }
  uVar5 = 0xffffffff;
  *(uint **)(param_1 + 0x118) = puVar3;
  pcVar7 = &DAT_00579274;
  do {
    pcVar9 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar9 + -uVar5;
  pcVar9 = (char *)(param_1 + 0x10);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  ExceptionList = pvStack_c;
  return;
}


