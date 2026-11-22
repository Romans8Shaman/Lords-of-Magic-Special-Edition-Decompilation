
void __thiscall FUN_004b6fc0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  bool bVar9;
  int local_4;
  
  if (*(void **)((int)this + 0x4b2c) == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004b7890(*(void **)((int)this + 0x4b2c),param_1);
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    if (*(int *)((int)this + 0x4b2c) == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
    }
    if (param_1 == iVar3) {
      iVar2 = 1;
      while( true ) {
        iVar3 = *(int *)((int)this + 0x4b2c);
        if ((iVar3 == 0) || (iVar4 = *(int *)(iVar3 + 0x100), iVar4 < 1)) {
          iVar4 = 1;
        }
        if (iVar4 < iVar2) break;
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = FUN_004b7dd0(iVar3);
        }
        if (iVar2 != iVar3) {
          FUN_004b6f50(iVar2);
        }
        iVar2 = iVar2 + 1;
      }
      FUN_004b64d0((int)this);
    }
    else {
      iVar3 = param_1 + -1;
      *(undefined4 *)(iVar2 + 0x21) = 1;
      *(undefined4 *)(iVar2 + 4) = 0;
      if (*(int *)((int)this + 0x4b2c) == 0) {
        bVar9 = true;
      }
      else {
        bVar9 = *(int *)(*(int *)((int)this + 0x4b2c) + 0x390) == param_1;
      }
      if (bVar9) {
        iVar2 = 0;
        iVar4 = 1;
        do {
          pvVar1 = *(void **)((int)this + 0x4b2c);
          if ((pvVar1 == (void *)0x0) || (iVar5 = *(int *)((int)pvVar1 + 0x100), iVar5 < 1)) {
            iVar5 = 1;
          }
          if (iVar5 < iVar4) break;
          if (pvVar1 == (void *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004b7890(pvVar1,iVar4);
          }
          if (((iVar5 != 0) && (*(int *)(iVar5 + 0x21) == 0)) && (*(int *)(iVar5 + 4) != 0)) {
            iVar2 = iVar4;
          }
          iVar4 = iVar4 + 1;
        } while (iVar2 == 0);
        if (*(int *)((int)this + 0x4b2c) != 0) {
          *(int *)(*(int *)((int)this + 0x4b2c) + 0x390) = iVar2;
        }
      }
      iVar2 = FUN_0048a400(0x584ae8);
      if (iVar2 == 2) {
        if ((DAT_005aa784 < 0) || (0xf < DAT_005aa784)) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = &DAT_005af194 + DAT_005aa784 * 0x1d84;
        }
        local_4 = *(int *)(puVar8 + 0x15dc);
        if ((DAT_005aa788 < 0) || (0xf < DAT_005aa788)) {
          iVar2 = iRam000015dc;
        }
        else {
          iVar2 = (&DAT_005b0770)[DAT_005aa788 * 0x761];
        }
      }
      else {
        iVar2 = param_1;
      }
      iVar4 = 0;
      puVar8 = &DAT_005af194;
      iVar5 = 0;
      do {
        if ((iVar5 < 0) || (0x1d83f < iVar5)) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = puVar8;
        }
        if (*(int *)(puVar6 + 0x15dc) == param_1) {
          FUN_00484aa0(&DAT_005aa12c,iVar4,1);
          if (*(int *)((int)this + 0x4b2c) == 0) {
            iVar7 = 1;
          }
          else {
            iVar7 = *(int *)(*(int *)((int)this + 0x4b2c) + 0x390);
          }
          FUN_00482a20(&DAT_005aa12c,iVar4,iVar7,0);
        }
        iVar5 = iVar5 + 0x1d84;
        iVar4 = iVar4 + 1;
        puVar8 = puVar8 + 0x1d84;
      } while (iVar5 < 0x1d840);
      iVar4 = FUN_0048a400(0x584ae8);
      if (iVar4 == 0) {
        iVar2 = *(int *)((int)this + 0x4b2c);
        if (iVar2 == 0) {
          bVar9 = true;
        }
        else {
          iVar4 = *(int *)(iVar2 + 0x390);
          iVar2 = FUN_004b7dd0(iVar2);
          bVar9 = iVar4 == iVar2;
        }
        if (bVar9) {
          iVar2 = FUN_004b6030(iVar3);
          if (-1 < iVar2) {
            FUN_004b6be0(this,iVar3,-1);
          }
          FUN_004b7a20();
        }
      }
      else {
        if (DAT_005cc9d4 == iVar3) {
          FUN_00480f70(&DAT_005aa12c,iVar3);
        }
        iVar4 = FUN_0048a400(0x584ae8);
        if ((iVar4 == 2) && ((local_4 == param_1 || (iVar2 == param_1)))) {
          iVar2 = *(int *)((int)this + 0x4b2c);
          if (iVar2 == 0) {
            bVar9 = true;
          }
          else {
            iVar4 = *(int *)(iVar2 + 0x390);
            iVar2 = FUN_004b7dd0(iVar2);
            bVar9 = iVar4 == iVar2;
          }
          if (bVar9) {
            FUN_0045c7b0(0x5aa12c);
          }
        }
      }
      FUN_004b7380(this,param_1);
      FUN_0048cdf0();
      FUN_0048c4f0((byte)param_1);
      FUN_0048c6a0();
      pvVar1 = DAT_005a7b78;
      if (((char)DAT_00584410 == '\x06') && ((DAT_00584410 & 0x100) == 0)) {
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar1);
          *(undefined4 *)((int)pvVar1 + 0x90) = 0;
          *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
          *(int *)(iVar2 + 4 + iVar4 * 8) = iVar3;
        }
        FUN_004d05e0(DAT_005a7b78,DAT_00584410,DAT_00584414);
      }
    }
  }
  if (*(int *)((int)this + 0x4b2c) != 0) {
    FUN_004b7f90();
  }
  return;
}


