
undefined4 __thiscall FUN_00507b60(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *this_00;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  void *pvStack_24;
  void *local_1c;
  int local_14;
  byte *pbStack_10;
  int iStack_c;
  
  iVar1 = param_1[3];
  if (iVar1 == 1) {
    if (param_1[4] == 4) {
      puVar5 = FUN_00485080(&DAT_005aa12c,*param_1,0x2f);
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00507b00(puVar5,param_1[1]);
      }
      this_00 = (int *)FUN_00482ac0(this,param_1[1],3);
      FUN_00485080(this,param_1[1],0x2f);
      iVar1 = DAT_005aee70;
      if (this_00 != (int *)0x0) {
        iVar6 = puVar5[0x12];
        if ((iVar6 < 0) || (0xf < iVar6)) {
          local_1c = (void *)0x0;
        }
        else {
          local_1c = (void *)((int)this + iVar6 * 0x1d84 + 0x5068);
        }
        iVar6 = (/*IC:00507c79*/**(code **)(*this_00 + 0x3c))(this_00);
        if ((iVar6 < 0) || (0xf < iVar6)) {
          pvStack_24 = (void *)0x0;
        }
        else {
          pvStack_24 = (void *)((int)this + iVar6 * 0x1d84 + 0x5068);
        }
        if ((local_1c != (void *)0x0) && (pvStack_24 != (void *)0x0)) {
          iVar6 = (/*IC:00507cc4*/**(code **)(*this_00 + 0x3c))(this_00);
          FUN_004bcb90(local_1c,iVar6);
          FUN_004bcb90(pvStack_24,puVar5[0x12]);
          iVar6 = (/*IC:00507ce3*/**(code **)(*this_00 + 0x3c))(this_00);
          if ((iVar6 < 0) || (0xf < iVar6)) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)local_1c + iVar6 * 0x88 + 0xd28;
          }
          if (iVar6 != 0) {
            iVar11 = 0;
            if (0 < iVar1) {
              do {
                iVar7 = FUN_004beef0((void *)((int)pvStack_24 + 0x34),iVar11);
                if (iVar7 != 0) {
                  iVar7 = FUN_004beef0((void *)(iVar6 + 0x7c),iVar11);
                  if (iVar7 == 0) {
                    FUN_004bef40((void *)(iVar6 + 0x7c),iVar11);
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar1);
            }
            iVar11 = 0;
            do {
              FUN_0049f320((void *)(iVar6 + 0x18),iVar11,100,100);
              iVar11 = iVar11 + 1;
            } while (iVar11 < 5);
            *(undefined4 *)(iVar6 + 0x78) = 0;
          }
          puVar8 = FUN_004fbed0(&DAT_005ae974,0);
          while (puVar3 = puVar8, puVar3 != (undefined4 *)0x0) {
            puVar8 = FUN_004fbed0(&DAT_005ae974,(int)puVar3);
            iVar6 = 0;
            if (0 < (int)puVar5[0x13]) {
              pbStack_10 = (byte *)(puVar3 + 0x38);
              do {
                for (iVar11 = *(int *)pbStack_10; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x14)) {
                  uVar12 = 1 << ((char)puVar5[0x12] + 8U & 0x1f);
                  uVar9 = (/*IC:00507dbe*/**(code **)(*this_00 + 0x3c))(this_00);
                  uVar2 = *(uint *)(iVar11 + 0x10);
                  if (((uVar2 & 1 << ((char)uVar9 + 8U & 0x1f)) != 0) && ((uVar2 & uVar12) == 0)) {
                    *(uint *)(iVar11 + 0x10) = uVar12 | uVar2;
                  }
                }
                iVar6 = iVar6 + 1;
                pbStack_10 = (byte *)((int)pbStack_10 + 0x4c);
              } while (iVar6 < (int)puVar5[0x13]);
            }
          }
          iVar6 = 0;
          pbStack_10 = (byte *)((int)this + 0x6640);
          iStack_c = (int)pvStack_24 + 0xd28;
          do {
            if ((((iVar6 != puVar5[0x12]) &&
                 (iVar11 = (/*IC:00507e47*/**(code **)(*this_00 + 0x3c))(this_00), iVar6 != iVar11)) &&
                ((*pbStack_10 & 1) != 0)) && (iVar6 != 0xf)) {
              iVar11 = FUN_004bcb60(pvStack_24,iVar6);
              iVar7 = 0;
              if (0 < iVar11) {
                FUN_004bcb90(local_1c,iVar6);
              }
              if ((iVar6 < 0) || (0xf < iVar6)) {
                local_14 = 0;
              }
              else {
                local_14 = (int)local_1c + (iStack_c - (int)pvStack_24);
              }
              if ((iVar6 < 0) || (0xf < iVar6)) {
                iVar11 = 0;
              }
              else {
                iVar11 = iStack_c;
              }
              if (((local_14 != 0) && (iVar11 != 0)) && (0 < iVar1)) {
                do {
                  iVar10 = FUN_004beef0((void *)(iVar11 + 0x7c),iVar7);
                  if (iVar10 != 0) {
                    iVar10 = FUN_004beef0((void *)(local_14 + 0x7c),iVar7);
                    if (iVar10 == 0) {
                      FUN_004bef40((void *)(local_14 + 0x7c),iVar7);
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar1);
              }
            }
            iVar6 = iVar6 + 1;
            pbStack_10 = pbStack_10 + 0x1d84;
            iStack_c = iStack_c + 0x88;
          } while (iVar6 < 0x10);
        }
      }
    }
  }
  else if (iVar1 == 3) {
    if ((param_1[4] == -2) &&
       (puVar5 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f), puVar5 != (undefined4 *)0x0)) {
      *(char *)(puVar5 + 0x172) = *(char *)(puVar5 + 0x172) + '\x01';
    }
  }
  else if (((iVar1 == 4) && (param_1[4] == -2)) &&
          (puVar5 = FUN_00485080(&DAT_005aa12c,param_1[1],0x2f), puVar5 != (undefined4 *)0x0)) {
    *(char *)(puVar5 + 0x172) = *(char *)(puVar5 + 0x172) + '\x01';
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = *param_1;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[1];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[2];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[3];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  pvVar4 = DAT_005a7b78;
  iVar1 = param_1[4];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar11 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar11;
    iVar6 = *(int *)((int)pvVar4 + 0x50);
    *(undefined4 *)(iVar6 + iVar11 * 8) = 1;
    *(int *)(iVar6 + 4 + iVar11 * 8) = iVar1;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7cdc,DAT_005a7ce0);
  return 1;
}


