
undefined4 * __thiscall
FUN_004d5ca0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  LPCSTR pCVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  uint local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_104 [260];
  
  if (*(int *)((int)this + 0x88) == 0) {
    *param_3 = 0;
    *param_4 = 0;
    return (undefined4 *)0x0;
  }
  bVar10 = *(int **)((int)this + 0x868) != (int *)0x0;
  if (bVar10) {
    FUN_005394d0(*(int **)((int)this + 0x868));
    *(undefined4 *)((int)this + 0x868) = 0;
  }
  pCVar1 = (LPCSTR)((int)this + 0x764);
  piVar3 = (int *)FUN_00539610(pCVar1,&DAT_005572ec);
  if (piVar3 != (int *)0x0) {
    DAT_005844e8._0_1_ = 0;
    iVar7 = *(int *)(param_1 + 4);
    uVar4 = FUN_005397f0((char *)&local_114,1,1,piVar3);
    while (uVar4 == 1) {
      uVar4 = local_114 & 0xff;
      if (uVar4 == 0) {
        uVar4 = FUN_005397f0(local_104,0x104,1,piVar3);
        if (uVar4 != 1) break;
        *param_3 = 0;
        uVar4 = 0xffffffff;
        pcVar8 = local_104;
        do {
          pcVar9 = pcVar8;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        *param_4 = 0;
        iVar7 = *(int *)(param_1 + 4);
        pcVar8 = pcVar9 + -uVar4;
        pcVar9 = (char *)&DAT_005844e8;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      else if (uVar4 == 1) {
        uVar4 = FUN_005397f0((char *)&local_110,4,1,piVar3);
        if (uVar4 != 1) break;
        iVar7 = *(int *)(param_1 + 4);
        if (local_110 == param_1) {
          uVar4 = 0xffffffff;
          pcVar8 = local_104;
          goto code_r0x004d5ec1;
        }
      }
      else {
        if (uVar4 != 2) {
          OutputDebugStringA(s_Unknown_record_type_in_script_de_0055e7a0);
          break;
        }
        uVar4 = FUN_005397f0((char *)&local_10c,8,1,piVar3);
        if (uVar4 != 1) break;
        iVar7 = iVar7 + -1;
        if (iVar7 == param_2) {
          *param_3 = local_10c;
          *param_4 = local_108;
        }
      }
      uVar4 = FUN_005397f0((char *)&local_114,1,1,piVar3);
    }
    FUN_005394d0(piVar3);
  }
  if (bVar10) {
    uVar5 = FUN_00539610(pCVar1,&DAT_0055c020);
    *(undefined4 *)((int)this + 0x868) = uVar5;
  }
  return (undefined4 *)0x0;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
    if (cVar2 == '\0') break;
code_r0x004d5ec1:
    pcVar9 = pcVar8;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar8 = pcVar9 + -uVar4;
  pcVar9 = (char *)&DAT_005844e8;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_005394d0(piVar3);
  if (bVar10) {
    uVar5 = FUN_00539610(pCVar1,&DAT_0055c020);
    *(undefined4 *)((int)this + 0x868) = uVar5;
  }
  return &DAT_005844e8;
}


