
void __fastcall FUN_004476c0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *this;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  iVar4 = FUN_004c1c50(*(int *)(param_1 + 0x48));
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  iVar8 = -1;
  iVar9 = 0;
  local_8 = -1;
  local_4 = 0;
  if (0 < *(int *)(iVar4 + 0x4c)) {
    do {
      iVar5 = *(int *)(iVar10 + 0xc4 + iVar4);
      if (((iVar5 < 0) || (DAT_005cd2f0 <= iVar5)) || (DAT_005cd2f4 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_005cd2f4 + iVar5 * 1000;
      }
      if (iVar5 != 0) {
        if (*(int *)(iVar5 + 0x1c) == 1) {
          uVar6 = FUN_00529180((int *)(iVar10 + 0xc4 + iVar4));
          if (uVar6 != 0) {
            local_4 = local_4 + 1;
            iVar4 = FUN_0052b0e0((void *)(iVar10 + 0xc4 + *(int *)(param_1 + 0x48)),1);
            local_c = iVar9;
            if (iVar4 == 0) {
              if ((iVar8 == -1) ||
                 (*(int *)(*(int *)(param_1 + 0x48) + 0xd4 + iVar8 * 0x4c) <
                  *(int *)(iVar10 + 0xd4 + *(int *)(param_1 + 0x48)))) {
                iVar8 = iVar9;
              }
            }
            else if (local_8 == -1) {
              local_8 = iVar9;
            }
            else if (*(int *)(*(int *)(param_1 + 0x48) + 0xd4 + local_8 * 0x4c) <
                     *(int *)(iVar10 + 0xd4 + *(int *)(param_1 + 0x48))) {
              local_8 = iVar9;
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
      *(undefined4 *)(iVar10 + 0xd0 + *(int *)(param_1 + 0x48)) = 0;
      iVar4 = *(int *)(param_1 + 0x48);
      iVar10 = iVar10 + 0x4c;
    } while (iVar9 < *(int *)(iVar4 + 0x4c));
  }
  if (local_4 != 1) {
    if (iVar8 == -1) {
      local_c = local_8;
    }
    else {
      local_c = iVar8;
    }
  }
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(*(int *)(param_1 + 0x48) + 0x5b4),0);
  if (this != (void *)0x0) {
    iVar10 = local_c * 0x4c;
    *(int *)(iVar10 + 0xd4 + *(int *)(param_1 + 0x48)) =
         *(int *)(iVar10 + 0xd4 + *(int *)(param_1 + 0x48)) + 0x3e800;
    pvVar3 = DAT_005a7b78;
    if ((char)DAT_005aa188 != '\0') {
      sVar1 = *(short *)(param_1 + 0x56);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
        iVar4 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar4 + iVar8 * 8) = 1;
        *(int *)(iVar4 + 4 + iVar8 * 8) = (int)sVar1;
      }
      pvVar3 = DAT_005a7b78;
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28);
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
        iVar4 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar4 + iVar8 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar8 * 8) = uVar2;
      }
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
        iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
        *(undefined4 *)(iVar4 + iVar8 * 8) = 1;
        *(int *)(iVar4 + 4 + iVar8 * 8) = local_c;
      }
      iVar4 = FUN_00522870((int)this);
      pvVar3 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar3);
        *(undefined4 *)((int)pvVar3 + 0x90) = 0;
        *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      }
      else {
        iVar9 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar9;
        iVar8 = *(int *)((int)pvVar3 + 0x50);
        *(undefined4 *)(iVar8 + iVar9 * 8) = 1;
        *(int *)(iVar8 + 4 + iVar9 * 8) = iVar4;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005aa188,DAT_005aa18c);
    }
    FUN_0052b090((void *)(iVar10 + 0xc4 + *(int *)(param_1 + 0x48)),1,1);
    iVar10 = *(int *)((int)this + 0x5b8);
    if ((iVar10 < 0) || (0xf < iVar10)) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = &DAT_005af194 + iVar10 * 0x1d84;
    }
    if (puVar7 != (undefined *)0x0) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x48) + 0x48);
      if ((iVar10 < 0) || (0xf < iVar10)) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar7 + iVar10 * 0x88 + 0xd28;
      }
      if (puVar7 != (undefined *)0x0) {
        if (0x50 < *(int *)(puVar7 + 0xc)) {
          *(undefined4 *)(puVar7 + 0xc) = 0x50;
        }
        pvVar3 = DAT_005a7b78;
        uVar2 = *(undefined4 *)((int)this + 0x5b8);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar10 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar10 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar10 + 4 + iVar4 * 8) = uVar2;
        }
        pvVar3 = DAT_005a7b78;
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x48);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar10 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar10 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar10 + 4 + iVar4 * 8) = uVar2;
        }
        pvVar3 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
        }
        else {
          iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
          iVar10 = *(int *)((int)pvVar3 + 0x50);
          *(undefined4 *)(iVar10 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar10 + 4 + iVar4 * 8) = 0;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7d0c,DAT_005a7d10,-3);
      }
    }
    FUN_004c2450((int)this);
    FUN_0041e170(this,0xffffffff);
  }
  return;
}


