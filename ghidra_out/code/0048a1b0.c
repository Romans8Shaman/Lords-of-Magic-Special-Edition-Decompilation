
undefined4 __fastcall FUN_0048a1b0(void *param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iStack_8;
  int iStack_4;
  
  bVar2 = false;
  DAT_00583558 = 0;
  piVar1 = *(int **)((int)param_1 + 0x4d39c);
  if (piVar1 != (int *)0x0) {
    (/*IC:0048a1cd*/**(code **)(*piVar1 + 0x30))(piVar1);
  }
  FUN_0048d000();
  FUN_0047c8b0((void *)((int)param_1 + 0x25644));
  FUN_00437930((void *)((int)param_1 + 0x483f4));
  FUN_004b48e0();
  FUN_0048a510();
  piVar1 = (int *)((int)param_1 + 0x487dc);
  iStack_4 = FUN_005262b0(piVar1);
  iStack_8 = FUN_004c4d00(piVar1);
  if (0 < iStack_8) {
    do {
      piVar3 = (int *)FUN_004c4cb0(piVar1,&iStack_4);
      if ((piVar3 != (int *)0x0) && (FUN_0048c860(piVar3), (char)piVar3[1] == '=')) {
        bVar2 = true;
      }
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  if ((bVar2) && (iVar4 = FUN_004c4d00(piVar1), 0 < iVar4)) {
    do {
      piVar3 = (int *)FUN_004c4cf0(piVar1);
      if ((char)piVar3[1] == '=') {
        FUN_0048c2b0((int)piVar3);
        iVar5 = FUN_0048cca0(piVar3);
        if (iVar5 == 0) goto LAB_0048a276;
      }
      else {
LAB_0048a276:
        FUN_004c4c10(piVar1,piVar3);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004c4d40(piVar1,&LAB_00489ee0);
  uVar6 = FUN_005262b0(piVar1);
  puVar7 = (undefined4 *)FUN_004c4cf0(piVar1);
  if (puVar7 != (undefined4 *)0x0) {
    while ((uVar8 = FUN_0048c960((int)puVar7), uVar8 != 0 &&
           ((*(int *)((int)param_1 + 0x29dfc) != 1 || (*(char *)(puVar7 + 1) == '\\'))))) {
      iVar4 = *(int *)((int)puVar7 + 0x101);
      iVar5 = FUN_00489b50((uint)*(byte *)(puVar7 + 1));
      if (iVar4 < iVar5) {
        iVar4 = FUN_00489b50((uint)*(byte *)(puVar7 + 1));
      }
      *(int *)((int)puVar7 + 0x101) = iVar4;
      FUN_0048a450(param_1,puVar7);
      if (DAT_005d2ca0 != 0) {
        return 0;
      }
      uVar6 = FUN_005262b0(piVar1);
      puVar7 = (undefined4 *)FUN_004c4cf0(piVar1);
      if (puVar7 == (undefined4 *)0x0) {
        FUN_0048c6a0();
        return 0;
      }
    }
    FUN_004c4d30(piVar1,uVar6);
  }
  FUN_0048c6a0();
  return 0;
}


