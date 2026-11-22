
void __cdecl op_setplayerintelinfo(void *vm)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint auStack_8 [2];
  
  pvVar2 = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar3 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
  if (iVar3 != 0) {
    FUN_0040adb0(pvVar2,auStack_8);
    iVar3 = FUN_004026a0(auStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar3 != 0) {
      FUN_0040adb0(pvVar2,auStack_8);
      iVar3 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
      if (iVar3 != 0) {
        FUN_0040adb0(pvVar2,auStack_8);
        iVar3 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
        pvVar1 = DAT_005a7b78;
        if (iVar3 != 0) {
          if (((int)uStack_1c < 0) || (0xf < (int)uStack_1c)) {
            puVar5 = (undefined *)0x0;
          }
          else {
            puVar5 = &DAT_005af194 + uStack_1c * 0x1d84;
          }
          if (puVar5 == (undefined *)0x0) {
            FUN_004d41c0(pvVar2,s_getplayerintelinfo___no__me__pla_0055c908);
            return;
          }
          if (((int)vm < 0) || (0xf < (int)vm)) {
            puVar5 = (undefined *)0x0;
          }
          else {
            puVar5 = puVar5 + (int)vm * 0x88 + 0xd28;
          }
          if (puVar5 == (undefined *)0x0) {
            FUN_004d41c0(pvVar2,s_getplayerintelinfo___no__you__pl_0055c8e0);
            return;
          }
          uStack_20 = 0x32;
          if (DAT_005a7d84 != 0) {
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
              iVar3 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(uint *)(iVar3 + 4 + iVar4 * 8) = uStack_1c;
            }
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
              iVar3 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(void **)(iVar3 + 4 + iVar4 * 8) = vm;
            }
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
            }
            else {
              iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
              iVar3 = *(int *)((int)pvVar2 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 10;
            }
            FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
            pvVar2 = DAT_005a7b78;
            FUN_0040adb0(DAT_005a7b78,auStack_8);
            iVar3 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
            if (iVar3 == 0) {
              *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
          }
          FUN_0049f370(puVar5 + 0x18,uStack_14,uStack_18,uStack_20);
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
  FUN_004d4550(pvVar2);
  *(undefined4 *)((int)pvVar2 + 0x90) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  return;
}


