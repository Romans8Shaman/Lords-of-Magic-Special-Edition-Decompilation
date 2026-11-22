
void __thiscall FUN_00430730(void *this,void *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  int local_30;
  int local_2c;
  int local_20 [4];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005496a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00555f34 != 0) {
    uVar5 = *(uint *)((int)this + 0x20);
    piVar3 = *(int **)((int)this + 0x24);
    ExceptionList = &local_c;
    if (((char)uVar5 == '\x06') && (ExceptionList = &local_c, (uVar5 & 0x100) == 0)) {
      ExceptionList = &local_c;
      FUN_004d05e0(DAT_005a7b78,uVar5,piVar3);
      pvVar1 = DAT_005a7b78;
      if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
        piVar3 = (int *)((int)DAT_005a7b78 + 0x50);
        iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
        uVar5 = *(uint *)(*piVar3 + -8 + iVar2 * 8);
        piVar3 = *(int **)(*piVar3 + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
        uVar5 = 0;
      }
      uVar5 = uVar5 & 0xff;
      if (uVar5 == 1) {
        *(int **)((int)this + 0x10) = piVar3;
      }
      else if (uVar5 == 2) {
        *(int *)((int)this + 0x10) = (int)piVar3 >> 8;
      }
      else {
        if (uVar5 != 4) {
          *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
          FUN_004d4550(pvVar1);
          *(undefined4 *)((int)pvVar1 + 0x90) = 0;
          *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          ExceptionList = local_c;
          return;
        }
        lVar10 = __ftol((float10)(float)piVar3);
        *(int *)((int)this + 0x10) = (int)lVar10;
      }
    }
  }
  iVar2 = *(int *)this;
  if ((iVar2 == 0) || (piVar3 = *(int **)((int)this + 8), piVar3 == (int *)0x0)) {
    FUN_005047d0(s_Invalid_BarGraph_00555f6c);
  }
  else {
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x10);
    if (*(int *)((int)this + 0x10) != -99) {
      iVar7 = *(int *)(iVar2 + 0xc) + *(int *)((int)this + 4) * -2;
      iVar2 = *(int *)(iVar2 + 0x10) + *(int *)((int)this + 4) * -2;
      local_30 = iVar7 - piVar3[3];
      local_2c = iVar2 - piVar3[4];
      DAT_0058364c = DAT_0058364c + 0x14;
      piVar9 = local_20;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar9 = piVar9 + 1;
      }
      iVar6 = *(int *)((int)this + 0x14);
      local_4 = 0;
      if (1 < *(int *)((int)this + 0x1c)) {
        iVar6 = iVar6 / *(int *)((int)this + 0x1c);
      }
      if ((*(byte *)((int)this + 0x18) & 1) == 0) {
        FUN_00496340(param_1,*(int **)this,param_2,param_3,0);
        iVar8 = *(int *)((int)this + 0x1c);
        iVar4 = param_3;
        if (local_2c < 0) {
          local_2c = 1;
          local_10 = (iVar2 - iVar8) + 1;
        }
        else if (iVar8 < 2) {
          iVar4 = param_3 + (local_2c >> 1);
        }
        else {
          local_2c = local_2c / (iVar8 + -1);
        }
        iVar2 = 0;
        param_3 = 0;
        if (0 < iVar8) {
          do {
            iVar8 = ((*(int *)((int)this + 0x10) - iVar2) * iVar7) / iVar6;
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (iVar7 < iVar8) {
              iVar8 = iVar7;
            }
            if (iVar8 != 0) {
              FUN_00495f90(param_1,local_20,param_2 + *(int *)((int)this + 4),
                           iVar4 + *(int *)((int)this + 4),iVar8,0);
            }
            iVar4 = iVar4 + local_2c;
            param_3 = param_3 + 1;
            iVar2 = iVar2 + iVar6;
          } while (param_3 < *(int *)((int)this + 0x1c));
        }
      }
      else {
        FUN_00496340(param_1,*(int **)this,param_2,param_3,0);
        iVar8 = *(int *)((int)this + 0x1c);
        if (local_30 < 0) {
          local_30 = 1;
          local_20[3] = (iVar7 - iVar8) + 1;
        }
        else if (iVar8 < 2) {
          param_2 = param_2 + (local_30 >> 1);
        }
        else {
          local_30 = local_30 / (iVar8 + -1);
        }
        iVar7 = 0;
        if (0 < iVar8) {
          iVar8 = 0;
          do {
            iVar4 = ((*(int *)((int)this + 0x10) - iVar8) * iVar2) / iVar6;
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (iVar2 < iVar4) {
              iVar4 = iVar2;
            }
            if (iVar4 != 0) {
              FUN_004960f0(param_1,local_20,*(int *)((int)this + 4) + param_2,
                           param_3 + *(int *)((int)this + 4),iVar4,0);
            }
            param_2 = param_2 + local_30;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + iVar6;
          } while (iVar7 < *(int *)((int)this + 0x1c));
          DAT_0058364c = DAT_0058364c + -0x14;
          ExceptionList = local_c;
          return;
        }
      }
      DAT_0058364c = DAT_0058364c + -0x14;
    }
  }
  ExceptionList = local_c;
  return;
}


