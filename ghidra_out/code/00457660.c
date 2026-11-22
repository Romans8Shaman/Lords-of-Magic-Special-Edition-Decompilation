
void __fastcall FUN_00457660(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float fStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  if ((DAT_005ae935 != '\b') && (DAT_005ae935 == '\a')) {
    FUN_00455850(&DAT_005ae8e8,&local_24,&local_28,&local_20,&local_18,&local_1c);
    iVar2 = FUN_004a51c0(param_1,local_24,local_28);
    iVar2 = FUN_004a8300(param_1,iVar2,0);
    if ((iVar2 == -1) || (iVar2 == DAT_005ae92c)) {
      if ((local_20 == 0) || (local_20 == 4)) {
        iVar2 = FUN_004a51c0(param_1,local_24 + -1,local_28);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
        iVar2 = FUN_004a51c0(param_1,local_24 + 1,local_28);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
      }
      else {
        iVar2 = FUN_004a51c0(param_1,local_24,local_28 + -1);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
        iVar2 = FUN_004a51c0(param_1,local_24 + 1,local_28 + 1);
        iVar2 = FUN_004a8300(param_1,iVar2,0);
        if ((iVar2 != -1) && (iVar2 != DAT_005ae92c)) {
          return;
        }
      }
      piVar3 = (int *)FUN_00482ac0(&DAT_005aa12c,DAT_005ae92c,0);
      if (piVar3 != (int *)0x0) {
        FUN_0041efa0(piVar3,0x15);
        DAT_005ae935 = '\x06';
        (/*IC:004577bd*/**(code **)(*piVar3 + 0x2c))(piVar3);
        FUN_00456fe0(param_1,local_24,local_28,local_20);
        FUN_00456670(param_1,local_24,local_28,local_20,1);
        pvVar1 = DAT_005a7b78;
        if (DAT_005a7d84 != 0) {
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
          }
          pvVar1 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0;
          }
          pvVar1 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
            iVar2 = *(int *)((int)pvVar1 + 0x50);
            *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xb;
          }
          FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
          pvVar1 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
            piVar3 = (int *)((int)DAT_005a7b78 + 0x50);
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
            uStack_8 = *(uint *)(*piVar3 + -8 + iVar2 * 8);
            uStack_4 = *(undefined4 *)(*piVar3 + -4 + iVar2 * 8);
          }
          else {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            uStack_8 = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          iVar2 = FUN_004026a0(&uStack_8,&uStack_c,&uStack_10,&fStack_14);
          if (iVar2 == 0) {
            *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
        }
      }
    }
  }
  return;
}


