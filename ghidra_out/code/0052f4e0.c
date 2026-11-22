
void FUN_0052f4e0(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  puVar4 = FUN_00485080(&DAT_005aa12c,iVar3,0x2f);
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = FUN_004c1cf0((int)puVar4);
    if (iVar3 != 0) {
      puVar5 = FUN_00485080(&DAT_005aa12c,puVar4[0x16c],0x2f);
      if (puVar5 != (undefined4 *)0x0) {
        iVar3 = FUN_004c1c50((int)puVar5);
        pvVar2 = DAT_005a7b78;
        if (iVar3 != 0) {
          uVar1 = puVar5[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar2);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          }
          else {
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = uVar1;
          }
          pvVar2 = DAT_005a7b78;
          uVar1 = puVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar2);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          }
          else {
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            *(undefined4 *)(iVar3 + iVar6 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = uVar1;
          }
          FUN_004d05e0(DAT_005a7b78,DAT_005a7ccc,DAT_005a7cd0);
        }
      }
    }
  }
  return;
}


