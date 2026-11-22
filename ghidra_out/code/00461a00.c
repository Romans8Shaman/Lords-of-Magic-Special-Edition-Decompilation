
/* WARNING: Removing unreachable block (ram,0x00461d54) */
/* WARNING: Removing unreachable block (ram,0x00461d83) */
/* WARNING: Removing unreachable block (ram,0x00461d8d) */
/* WARNING: Removing unreachable block (ram,0x00461db4) */
/* WARNING: Removing unreachable block (ram,0x00461da4) */
/* WARNING: Removing unreachable block (ram,0x00461dd1) */

void __fastcall FUN_00461a00(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this;
  uint uVar6;
  int iVar7;
  float local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10 [4];
  
  if ((*(int *)((int)param_1 + 0x4ff0) == 0 && *(int *)((int)param_1 + 0x4fec) == 0) &&
     (iVar7 = 0, DAT_005830f4 == 0)) {
    local_20 = 0.0;
    local_10[2] = 1;
    local_10[3] = 1;
    local_1c = 0;
    if (0 < *(int *)((int)param_1 + 0x5048)) {
      *(int *)((int)param_1 + 0x5048) = *(int *)((int)param_1 + 0x5048) + -1;
      return;
    }
    local_18 = 0;
    do {
      if (iVar7 == 0) {
        iVar5 = *(int *)((int)param_1 + 0x65c);
      }
      else {
        iVar5 = *(int *)((int)param_1 + 0x658);
      }
      iVar3 = FUN_00420340((void *)((int)param_1 + 0x4848),iVar5);
      if (iVar3 == 0) {
        if ((iVar5 < 0) || (0xf < iVar5)) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)param_1 + iVar5 * 0x1d84 + 0x5068;
        }
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 0x15dc);
          if (DAT_005d1e84 == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_004b7dd0(DAT_005d1e84);
          }
          if (iVar3 == iVar4) {
            local_18 = 1;
          }
        }
      }
      else {
        local_10[iVar7 + 2] = 0;
        local_20 = (float)((int)local_20 + 1);
      }
      pvVar2 = (void *)((int)param_1 + 0x4848);
      iVar5 = FUN_004203c0(pvVar2,iVar5);
      if ((iVar5 != 0) && (local_10[iVar7 + 2] != 0)) {
        local_10[iVar7] = 1;
        local_1c = local_1c + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    if (local_20 == 0.0) {
      *(undefined4 *)((int)param_1 + 0x5048) = 10;
      DAT_005830f0 = 0;
    }
    else {
      if (DAT_005830f0 == 0) {
        for (this = (void *)FUN_004fbe60(pvVar2,0,0); this != (void *)0x0;
            this = (void *)FUN_004fbe60(pvVar2,(int)this,0)) {
          if ((~*(uint *)((int)this + 0x30) & 0x100) != 0) {
            FUN_004176d0(this,0);
          }
        }
        *(undefined4 *)((int)param_1 + 0x5048) = 10;
        DAT_005830f0 = 1;
        return;
      }
      if ((int)local_20 < 2) {
        if ((local_18 != 0) && (*(char *)((int)param_1 + 0x5040) != '\0')) {
          if (*(int *)((int)param_1 + 0x4794) == 0) {
            DAT_005830f4 = 1;
            FUN_004d05e0(DAT_005a7b78,*(uint *)((int)param_1 + 0x5040),
                         *(int **)((int)param_1 + 0x5044));
            pvVar2 = DAT_005a7b78;
            if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
              piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
              iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
              local_10[0] = *(uint *)(*piVar1 + -8 + iVar7 * 8);
              local_10[1] = *(int *)(*piVar1 + -4 + iVar7 * 8);
            }
            else {
              FUN_00404ab0(DAT_005a7b78,6);
              local_10[0] = 0;
              local_10[1] = local_10[3];
            }
            iVar7 = FUN_004026a0(local_10,&local_18,&local_14,&local_20);
            if (iVar7 == 0) {
              *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            DAT_005830f4 = 0;
            DAT_005ae8c0 = 1;
          }
          if (((local_18 != 0) || (iVar7 = FUN_00481b40((int)param_1), iVar7 != 0)) ||
             (*(int *)((int)param_1 + 0x478c) != 0)) {
            if (*(int *)((int)param_1 + 0x4798) < 0) {
              if (local_10[3] != 0) {
                *(undefined4 *)((int)param_1 + 0x230c0) = 1;
              }
              if ((*(int *)((int)param_1 + 0x478c) == 0) || (local_10[3] == 0)) goto LAB_00461e8e;
              if (DAT_005ae8bc == 0) {
                DAT_005ae8bc = 1;
                FUN_004885e0((int)param_1);
                return;
              }
            }
            else if (local_1c == 0) {
              FUN_00488540((int)param_1);
              return;
            }
          }
        }
      }
      else {
        uVar6 = FUN_00482ac0(param_1,*(int *)((int)param_1 + 0x4774),1);
        if ((uVar6 != 0) && (iVar7 = FUN_0050c7f0(uVar6), iVar7 == 0)) {
          iVar5 = 0;
          iVar7 = -9999;
          for (iVar3 = FUN_004fbe60((void *)((int)param_1 + 0x4848),0,0); iVar3 != 0;
              iVar3 = FUN_004fbe60((void *)((int)param_1 + 0x4848),iVar3,0)) {
            if ((*(int *)(iVar3 + 0x48) == *(int *)((int)param_1 + 0x658)) &&
               ((iVar5 == 0 || (iVar7 < *(int *)(iVar3 + 200))))) {
              iVar7 = *(int *)(iVar3 + 200);
              iVar5 = iVar3;
            }
          }
        }
        if ((DAT_005aa784 < 0) || (0xf < DAT_005aa784)) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)param_1 + DAT_005aa784 * 0x1d84 + 0x5068;
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(iVar7 + 0x15dc);
          if (DAT_005d1e84 == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = FUN_004b7dd0(DAT_005d1e84);
          }
          if (iVar7 == iVar5) {
            if (-1 < *(int *)((int)param_1 + 0x4798)) {
              FUN_00488540((int)param_1);
              return;
            }
            if (DAT_005ae8b8 == 0) {
              FUN_0045c7b0((int)param_1);
              return;
            }
            if (DAT_005ae8bc == 0) {
              DAT_005ae8bc = 1;
              FUN_004885e0((int)param_1);
              return;
            }
LAB_00461e8e:
            FUN_0045c7b0((int)param_1);
            return;
          }
        }
      }
    }
  }
  return;
}


