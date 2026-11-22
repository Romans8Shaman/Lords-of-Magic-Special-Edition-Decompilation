
void __cdecl op_createtemparmy(void *vm)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  float fStack_1c;
  undefined4 *puStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar2 = vm;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549a8b;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_14 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_00404ab0(vm,6);
    uStack_14 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_14,(uint *)&vm,(uint *)&puStack_18,&fStack_1c);
  if (iVar3 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  }
  else {
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
    if (piVar4 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    pcVar8 = &DAT_00556168;
    pcVar5 = FUN_00505110(&DAT_00584ae8,6,0xffffffff);
    piVar6 = (int *)FUN_00539610(pcVar5,pcVar8);
    if (piVar6 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    (/*IC:0044ce30*/**(code **)(*piVar4 + 0x20))(piVar4,piVar6);
    FUN_005394d0(piVar6);
    pcVar8 = &DAT_005572ec;
    pcVar5 = FUN_00505110(&DAT_00584ae8,6,0xffffffff);
    piVar4 = (int *)FUN_00539610(pcVar5,pcVar8);
    if (piVar4 == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
    DAT_005aa12c = DAT_0055b1b0;
    puStack_18 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (puStack_18 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = FUN_00411610(puStack_18);
    }
    uStack_4 = 0xffffffff;
    (/*IC:0044cea7*/**(code **)(*piVar6 + 0x24))(piVar6,piVar4);
    FUN_005394d0(piVar4);
    iVar3 = piVar6[10];
    if (*(int *)((int)pvVar2 + 0x54) != 0) {
      iVar1 = *(int *)((int)pvVar2 + 0x50);
      iVar7 = *(int *)((int)pvVar2 + 0x54) + -1;
      *(int *)((int)pvVar2 + 0x54) = iVar7;
      *(undefined4 *)(iVar1 + iVar7 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar7 * 8) = iVar3;
      ExceptionList = pvStack_c;
      return;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 3;
  }
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  ExceptionList = pvStack_c;
  return;
}


