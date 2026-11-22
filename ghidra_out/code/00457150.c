
void __fastcall FUN_00457150(void *param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  undefined4 uStack_4;
  
  cVar2 = DAT_005ae935;
  if ((DAT_005ae935 != '\b') && ((DAT_005ae935 == '\x06' || (DAT_005ae935 == '\a')))) {
    FUN_00455850(&DAT_005ae8e8,&local_18,&local_1c,&local_14,local_c,&local_10);
    iVar3 = FUN_004a51c0(param_1,local_18,local_1c);
    iVar3 = FUN_004a8300(param_1,iVar3,0);
    if ((iVar3 == -1) || (iVar3 == DAT_005ae92c)) {
      if (local_14 == 0) {
        iVar3 = FUN_004a51c0(param_1,local_18 + -1,local_1c);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = FUN_004a51c0(param_1,local_18 + 1,local_1c);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = 0;
        do {
          iVar4 = FUN_004a51c0(param_1,local_18 + -2 + iVar3,local_1c + 1);
          iVar4 = FUN_004a8300(param_1,iVar4,0);
          if ((iVar4 != -1) && (iVar4 != DAT_005ae92c)) {
            return;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
      }
      else if (local_14 == 4) {
        iVar3 = FUN_004a51c0(param_1,local_18 + -1,local_1c);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = FUN_004a51c0(param_1,local_18 + 1,local_1c);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = 0;
        do {
          iVar4 = FUN_004a51c0(param_1,local_18 + -2 + iVar3,local_1c + -1);
          iVar4 = FUN_004a8300(param_1,iVar4,0);
          if ((iVar4 != -1) && (iVar4 != DAT_005ae92c)) {
            return;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
      }
      else if (local_14 == 2) {
        iVar3 = FUN_004a51c0(param_1,local_18,local_1c + -1);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = FUN_004a51c0(param_1,local_18 + 1,local_1c + 1);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = 0;
        do {
          iVar4 = FUN_004a51c0(param_1,local_18 + -1,local_1c + -2 + iVar3);
          iVar4 = FUN_004a8300(param_1,iVar4,0);
          if ((iVar4 != -1) && (iVar4 != DAT_005ae92c)) {
            return;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
      }
      else {
        iVar3 = FUN_004a51c0(param_1,local_18,local_1c + -1);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = FUN_004a51c0(param_1,local_18 + 1,local_1c + 1);
        iVar3 = FUN_004a8300(param_1,iVar3,0);
        if ((iVar3 != -1) && (iVar3 != DAT_005ae92c)) {
          return;
        }
        iVar3 = 0;
        do {
          iVar4 = FUN_004a51c0(param_1,local_18 + 1,local_1c + -2 + iVar3);
          iVar4 = FUN_004a8300(param_1,iVar4,0);
          if ((iVar4 != -1) && (iVar4 != DAT_005ae92c)) {
            return;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
      }
      if (cVar2 == '\x06') {
        piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,DAT_005ae92c,0);
        if (piVar5 != (int *)0x0) {
          FUN_0041efa0(piVar5,0xf);
          DAT_005ae935 = 7;
          (/*IC:0045746c*/**(code **)(*piVar5 + 0x2c))(piVar5);
          FUN_00456e70(param_1,local_18,local_1c,local_14);
          FUN_00456670(param_1,local_18,local_1c,local_14,0);
          return;
        }
      }
      else {
        piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,DAT_005ae92c,0);
        if (piVar5 != (int *)0x0) {
          FUN_0041efa0(piVar5,0x15);
          DAT_005ae935 = '\x06';
          (/*IC:004574c7*/**(code **)(*piVar5 + 0x2c))(piVar5);
          FUN_00456fe0(param_1,local_18,local_1c,local_14);
          FUN_00456670(param_1,local_18,local_1c,local_14,1);
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
              iVar3 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
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
              iVar3 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0;
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
              iVar3 = *(int *)((int)pvVar1 + 0x50);
              *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
              *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = 0xb;
            }
            FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
            pvVar1 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
              piVar5 = (int *)((int)DAT_005a7b78 + 0x50);
              iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
              uVar6 = *(uint *)(*piVar5 + -8 + iVar3 * 8);
              uStack_4 = *(undefined4 *)(*piVar5 + -4 + iVar3 * 8);
            }
            else {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
              FUN_004d4550(pvVar1);
              *(undefined4 *)((int)pvVar1 + 0x90) = 0;
              *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
              uVar6 = 0;
            }
            uVar6 = uVar6 & 0xff;
            if (((uVar6 != 1) && (uVar6 != 2)) && (uVar6 != 4)) {
              *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
              FUN_004d4550(pvVar1);
              *(undefined4 *)((int)pvVar1 + 0x90) = 0;
              *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
            }
          }
        }
      }
    }
  }
  return;
}


