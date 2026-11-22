
void __thiscall FUN_004237d0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_4;
  
  if (param_1 < 0) {
    return;
  }
  if ((*(uint *)((int)this + 0x30) & 0x1c00000) == 0) goto LAB_00423919;
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),2);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),3);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),1);
  if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    local_4 = *(int *)((int)this + 0x28);
  }
  else {
    local_4 = -1;
  }
  iVar4 = FUN_00413180(this,*(int *)(DAT_005ae970 +
                                    ((*(int *)((int)this + 0x44) - 4U & 7) + param_1 * 8) * 4));
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      *(undefined4 *)(uVar2 + 0x44) = 0;
      uVar1 = *(uint *)((int)this + 0x30) & 0xffbfffff;
      goto LAB_004238a9;
    }
    if (uVar3 != 0) {
      *(undefined4 *)(uVar3 + 0x58) = 0;
      uVar1 = *(uint *)((int)this + 0x30) & 0xfeffffff;
      goto LAB_004238a9;
    }
    iVar4 = param_1;
  }
  else {
    *(undefined4 *)(uVar1 + 0x48) = 0;
    uVar1 = *(uint *)((int)this + 0x30) & 0xff7fffff;
LAB_004238a9:
    *(uint *)((int)this + 0x30) = uVar1;
    iVar4 = FUN_004a7d50(&DAT_005ae958,this,iVar4);
  }
  if ((*(int *)((int)this + 0x5b4) != -1) &&
     (puVar5 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0x2f),
     puVar5 != (undefined4 *)0x0)) {
    puVar5[0x16c] = iVar4;
  }
  (/*IC:004238e6*/**(code **)(*(int *)this + 0x2c))(this);
  if (-1 < local_4) {
    if (*(int *)((int)this + 0x4c) < 1) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)((int)this + 0x28);
    }
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,local_4,iVar4);
  }
LAB_00423919:
  piVar6 = *(int **)(DAT_005ae9bc + param_1 * 8);
  if (piVar6 == (int *)0x0) {
    FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),param_1);
    iVar4 = DAT_005ae98c;
    if ((1 < *(int *)((int)this + 0x4c)) && (iVar8 = DAT_005ae998, DAT_005ae998 <= DAT_005ae98c)) {
      do {
        piVar6 = (int *)FUN_004f6000(&DAT_005ae974,iVar8);
        if ((iVar8 != *(int *)((int)this + 0x28)) &&
           (((piVar6 != (int *)0x0 && (piVar6[1] == 7)) &&
            (piVar6[0x11] == *(int *)((int)this + 0x28))))) {
          FUN_004a6dd0(&DAT_005ae958,piVar6,piVar6[7],param_1);
          (/*IC:0042398e*/**(code **)(*piVar6 + 0x2c))(piVar6);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar4);
      return;
    }
  }
  else {
    bVar9 = false;
    iVar4 = (/*IC:004239a8*/**(code **)(*piVar6 + 0x3c))(piVar6);
    iVar8 = (/*IC:004239b1*/**(code **)(*(int *)this + 0x3c))(this);
    if (iVar4 == iVar8) {
      iVar4 = piVar6[1];
      if (iVar4 == 1) {
        if ((piVar6[0x15] < 0) ||
           (puVar5 = FUN_00485080(&DAT_005aa12c,piVar6[10],0x2f), puVar5 != (undefined4 *)0x0)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
      }
      else if ((1 < iVar4) && (iVar4 < 4)) {
        puVar5 = FUN_00485080(&DAT_005aa12c,piVar6[10],0x2f);
        bVar9 = puVar5 == (undefined4 *)0x0;
      }
    }
    if (bVar9) {
      FUN_004225a0(this,piVar6,1);
      return;
    }
    iVar7 = FUN_004a6f60(&DAT_005ae958,param_1,0x40000);
    FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),iVar7);
    (/*IC:00423a44*/**(code **)(*(int *)this + 0x2c))(this);
    iVar8 = DAT_005ae98c;
    iVar4 = DAT_005ae998;
    if (1 < *(int *)((int)this + 0x4c)) {
      for (; iVar4 <= iVar8; iVar4 = iVar4 + 1) {
        piVar6 = (int *)FUN_004f6000(&DAT_005ae974,iVar4);
        if ((((iVar4 != *(int *)((int)this + 0x28)) && (piVar6 != (int *)0x0)) && (piVar6[1] == 7))
           && (piVar6[0x11] == *(int *)((int)this + 0x28))) {
          piVar6[7] = iVar7;
          (/*IC:00423a85*/**(code **)(*piVar6 + 0x2c))(piVar6);
        }
      }
    }
  }
  return;
}


