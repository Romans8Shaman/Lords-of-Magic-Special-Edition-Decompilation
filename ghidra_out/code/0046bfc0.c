
int __fastcall FUN_0046bfc0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  void *this;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(int *)(param_1 + 0x34) < 1) {
    return 0;
  }
  pvVar4 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)(param_1 + 0x28));
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  this = (void *)FUN_00492de0(&DAT_005a7b50,*(int *)(param_1 + 8));
  pvVar3 = DAT_005a7b78;
  if (this != (void *)0x0) {
    pcVar9 = *(char **)(param_1 + 0x24);
    if (((char)*(uint *)(param_1 + 0x20) == '\x06') && ((*(uint *)(param_1 + 0x20) & 0x100) == 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar6 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar6 + 4 + iVar5 * 8) = uVar2;
      }
      pvVar3 = DAT_005a7b78;
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar6 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar6 + 4 + iVar5 * 8) = uVar2;
      }
      pvVar3 = DAT_005a7b78;
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar6 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar6 + 4 + iVar5 * 8) = uVar2;
      }
      FUN_004d05e0(DAT_005a7b78,*(uint *)(param_1 + 0x20),*(int **)(param_1 + 0x24));
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
        cVar7 = (char)*(undefined4 *)(*piVar1 + -8 + iVar6 * 8);
        pcVar9 = *(char **)(*piVar1 + -4 + iVar6 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        cVar7 = '\0';
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      iVar6 = *(int *)((int)pvVar3 + 0x90);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      if (iVar6 == 0) {
        if (cVar7 != '\b') {
          *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          pcVar9 = (char *)0x0;
        }
      }
      else {
        pcVar9 = (char *)0x0;
      }
      if (pcVar9 != (char *)0x0) {
        uVar8 = 0xffffffff;
        pcVar10 = pcVar9;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar7 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar7 != '\0');
        iVar6 = FUN_0047ef30(this,(int)pcVar9,~uVar8 - 1);
        iVar5 = FUN_004918d0(pvVar4);
        if (iVar5 < iVar6) {
          iVar6 = FUN_0047ef30(this,(int)pcVar9,~uVar8 - 1);
          return iVar6;
        }
        iVar6 = FUN_004918d0(pvVar4);
        return iVar6;
      }
    }
  }
  iVar6 = FUN_004918d0(pvVar4);
  return iVar6;
}


