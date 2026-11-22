
uint __thiscall FUN_004373e0(void *this,int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *this_00;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float local_4;
  
  *param_2 = 0;
  uVar6 = *(uint *)((int)this + 0x50);
  if ((uVar6 & 0xff) == 0) {
    if ((param_1[0xc] & 0x1c00000U) != 0) {
      uVar4 = uVar6 & 0x38000;
      if (uVar4 == 0) {
        return 0;
      }
      if (uVar4 != 0x38000) {
        iVar5 = FUN_004f6000(&DAT_005ae974,param_1[10]);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = *(int *)(iVar5 + 4);
        if (iVar5 == 1) {
          if ((char)(uVar4 >> 8) == '\0') {
            return 0;
          }
        }
        else if (iVar5 == 2) {
          if ((uVar6 & 0x10000) == 0) {
            return 0;
          }
        }
        else if ((iVar5 == 3) && ((uVar6 & 0x20000) == 0)) {
          return 0;
        }
      }
    }
    iVar5 = FUN_0051c170(param_1);
    if ((iVar5 != 0) && (iVar5 = FUN_00420890(param_1,*(int *)((int)this + 0x68)), iVar5 != 0)) {
      uVar6 = FUN_00437680(this,(int)param_1);
      *param_2 = uVar6;
      return (uint)(uVar6 != 0);
    }
  }
  else if (((uVar6 & 0xff) == 1) &&
          ((this_00 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x48),0x2f),
           this_00 == (undefined4 *)0x0 || (iVar5 = FUN_00420890(this_00,param_1[7]), iVar5 != 0))))
  {
    pvVar3 = DAT_005a7b78;
    uVar2 = *(undefined4 *)((int)this + 0x48);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    uVar2 = *(undefined4 *)((int)this + 100);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      iVar5 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 8) = uVar2;
    }
    pvVar3 = DAT_005a7b78;
    iVar5 = param_1[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
      iVar7 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar7 + iVar8 * 8) = 1;
      *(int *)(iVar7 + 4 + iVar8 * 8) = iVar5;
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x54),*(int **)((int)this + 0x58));
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uVar6 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
      local_4 = *(float *)(*piVar1 + -4 + iVar5 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar6 = uVar6 & 0xff;
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        local_4 = (float)((int)local_4 >> 8);
      }
      else {
        if (uVar6 != 4) {
          *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
          FUN_004d4550(pvVar3);
          *(undefined4 *)((int)pvVar3 + 0x90) = 0;
          *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
          return 0;
        }
        lVar9 = __ftol((float10)local_4);
        local_4 = (float)lVar9;
      }
    }
    if (local_4 != 0.0) {
      *param_2 = 0xffffffff;
      return (uint)local_4;
    }
  }
  return 0;
}


