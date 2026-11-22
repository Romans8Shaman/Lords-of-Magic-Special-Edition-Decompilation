
undefined4 FUN_00522350(uint param_1,undefined4 param_2,uint *param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint local_8;
  undefined4 local_4;
  
  puVar5 = param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar4 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar3 * 8) = param_1;
  }
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    FUN_00404ab0(DAT_005a7b78,3);
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar4 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = param_2;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2f40,DAT_005d2f44);
  pvVar2 = DAT_005a7b78;
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
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 4,(float *)&param_3);
  if (iVar4 == 0) {
    FUN_00404ab0(pvVar2,0xe);
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 3,(float *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 2,(float *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5 + 1,(float *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  pvVar2 = DAT_005a7b78;
  FUN_0040adb0(DAT_005a7b78,&local_8);
  iVar4 = FUN_004026a0(&local_8,&param_1,puVar5,(float *)&param_3);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  iVar4 = 5;
  do {
    *puVar5 = -*puVar5;
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar4 != 0);
  return 1;
}


