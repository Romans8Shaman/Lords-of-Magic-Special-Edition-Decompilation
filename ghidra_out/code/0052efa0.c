
void FUN_0052efa0(void)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  float local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  iVar4 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  puVar5 = FUN_00485080(&DAT_005aa12c,iVar4,0x2f);
  if ((((puVar5 != (undefined4 *)0x0) && (iVar4 = FUN_004c1cf0((int)puVar5), iVar4 != 0)) &&
      (*(char *)(puVar5 + 0x172) < '\x03')) &&
     ((puVar6 = FUN_00485080(&DAT_005aa12c,puVar5[0x16c],0x2f), puVar6 != (undefined4 *)0x0 &&
      (iVar4 = FUN_004c1c50((int)puVar6), pvVar3 = DAT_005a7b78, iVar4 != 0)))) {
    uVar2 = puVar6[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    uVar2 = puVar5[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = uVar2;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005a7cbc,DAT_005a7cc0);
  }
  if (((puVar5 != (undefined4 *)0x0) &&
      (iVar4 = FUN_004c1cf0((int)puVar5), pvVar3 = DAT_005a7b78, iVar4 != 0)) &&
     (('\x02' < *(char *)(puVar5 + 0x172) && (DAT_005a7d84 != 0)))) {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = 0xffffffff;
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = 0xffffffff;
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar4 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar4 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = 0xc;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      local_8 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
      local_4 = *(undefined4 *)(*piVar1 + -4 + iVar4 * 8);
    }
    else {
      FUN_00404ab0(DAT_005a7b78,6);
      local_8 = 0;
    }
    iVar4 = FUN_004026a0(&local_8,&local_c,&local_10,&local_14);
    if (iVar4 == 0) {
      FUN_00404ab0(pvVar3,0xe);
    }
  }
  return;
}


