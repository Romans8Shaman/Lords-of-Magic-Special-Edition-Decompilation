
undefined4 __thiscall FUN_004808e0(void *this,int *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  void *this_00;
  int local_100;
  uint local_fc;
  uint local_f8;
  int local_f4;
  int local_f0;
  int local_ec [4];
  int local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  byte abStack_c8 [200];
  
  piVar2 = param_1;
  piVar5 = local_ec;
  for (iVar6 = 0x3b; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar5 = piVar5 + 1;
  }
  uVar7 = 0;
  local_100 = -1;
  if (0 < local_ec[3]) {
    do {
      if ((uVar7 & 1) == 0) {
        bVar1 = *(byte *)(((int)uVar7 >> 1) + 0x24 + (int)param_1) & 0xf;
      }
      else {
        bVar1 = *(byte *)(((int)uVar7 >> 1) + 0x24 + (int)param_1) >> 4;
      }
      abStack_c8[uVar7] = bVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_ec[3]);
  }
  piVar2 = FUN_00485080(this,local_ec[0],0x2f);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  DAT_005aeef4 = 1;
  iVar6 = piVar2[0x12];
  if ((iVar6 < 0) || (0xf < iVar6)) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)((int)this + iVar6 * 0x1d84 + 0x5068);
  }
  uVar7 = piVar2[0xc];
  piVar2[0xc] = uVar7 & 0xffc43f37;
  piVar2[0xc] = local_d4 & 0x3bc0c8 | uVar7 & 0xffc02f35;
  if (-1 < piVar2[0x14e]) {
    FUN_00427950((void *)((int)this + 0x4dd0),piVar2 + 0x14e);
  }
  if ((piVar2[0xc] & 0x8000U) != 0) {
    FUN_00426b40(piVar2,(int)local_ec);
  }
  piVar2[0x152] = local_d8;
  if (local_cc == 0) {
    piVar2[0x153] = local_ec[1];
  }
  else {
    piVar2[0x153] = -1;
  }
  if (((-1 < piVar2[0x154]) && (piVar2[0x154] != local_d0)) && (this_00 != (void *)0x0)) {
    FUN_004bb140(this_00,(int)piVar2);
  }
  piVar2[0x154] = local_d0;
  if (local_ec[3] < 1) {
    if ((-1 < local_d0) && (this_00 != (void *)0x0)) {
      FUN_004bb140(this_00,(int)piVar2);
    }
    return 0;
  }
  uVar7 = FUN_00482ac0(this,local_ec[0],2);
  local_f8 = uVar7;
  local_fc = FUN_00482ac0(this,local_ec[0],3);
  uVar3 = FUN_00482ac0(this,local_ec[0],1);
  if ((piVar2[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)(piVar2 + 0xc) & 0x20) != 0)) {
    local_f4 = piVar2[10];
  }
  else {
    local_f4 = -1;
  }
  if (uVar7 == 0) {
    if (local_fc == 0) {
      if (uVar3 != 0) {
        *(undefined4 *)(uVar3 + 0x58) = 0;
        piVar2[0xc] = piVar2[0xc] & 0xfeffffff;
        iVar6 = FUN_004a7d50((void *)((int)this + 0x482c),piVar2,*(int *)(uVar3 + 0x1c));
        if (piVar2[0x16d] != -1) {
          uVar7 = FUN_00482ac0(this,piVar2[0x16d],0);
          if (uVar7 != 0) {
            *(int *)(uVar7 + 0x5b0) = iVar6;
          }
        }
      }
    }
    else {
      piVar2[0xc] = piVar2[0xc] & 0xffbfffff;
      iVar6 = FUN_004a7d50((void *)((int)this + 0x482c),piVar2,*(int *)(local_fc + 0x1c));
      if (piVar2[0x16d] != -1) {
        uVar7 = FUN_00482ac0(this,piVar2[0x16d],0);
        if (uVar7 != 0) {
          *(int *)(uVar7 + 0x5b0) = iVar6;
        }
      }
      *(undefined4 *)(local_fc + 0x44) = 0;
    }
  }
  else {
    piVar2[0xc] = piVar2[0xc] & 0xff7fffff;
    iVar6 = FUN_004a7d50((void *)((int)this + 0x482c),piVar2,*(int *)(local_f8 + 0x1c));
    if (piVar2[0x16d] != -1) {
      uVar7 = FUN_00482ac0(this,piVar2[0x16d],0);
      if (uVar7 != 0) {
        *(int *)(uVar7 + 0x5b0) = iVar6;
      }
    }
    *(undefined4 *)(local_f8 + 0x48) = 0;
  }
  local_f0 = FUN_004c1c50((int)piVar2);
  iVar6 = FUN_00414d00(piVar2,(int)local_ec);
  if (iVar6 != 0) {
    iVar6 = FUN_00414e50(piVar2,local_ec[2],&local_100);
    if (iVar6 == 0) {
      (/*IC:00480ce8*/**(code **)(*piVar2 + 0x2c))(piVar2);
    }
    else {
      FUN_00415c20(piVar2,(int *)0x0,-1);
      iVar6 = FUN_00506340((int)piVar2);
      if (iVar6 == 0) {
        piVar2[0x173] = 0;
        piVar2[0xc] = piVar2[0xc] & 0xdfffffff;
      }
      puVar4 = FUN_00485080(this,local_100,0x2f);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_00415c20(puVar4,(int *)0x0,-1);
        if (puVar4 != (undefined4 *)0x0) {
          iVar6 = FUN_00506340((int)piVar2);
          if (iVar6 == 0) {
            puVar4[0x173] = 0;
            puVar4[0xc] = puVar4[0xc] & 0xdfffffff;
          }
        }
      }
      if (local_f8 == 0) {
        if (local_fc == 0) {
          if (uVar3 != 0) {
            *(undefined4 *)(uVar3 + 0x58) = 0;
            if (puVar4 != (undefined4 *)0x0) {
              puVar4[0xc] = puVar4[0xc] | 0x1000000;
              FUN_00422d90(puVar4);
              puVar4[10] = *(undefined4 *)(uVar3 + 0x28);
              local_100 = *(int *)(uVar3 + 0x28);
            }
            *(undefined4 **)(uVar3 + 0x58) = puVar4;
          }
        }
        else {
          *(undefined4 *)(local_fc + 0x44) = 0;
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[0xc] = puVar4[0xc] | 0x400000;
            FUN_00422d90(puVar4);
            puVar4[10] = *(undefined4 *)(local_fc + 0x28);
            local_100 = *(int *)(local_fc + 0x28);
          }
          *(undefined4 **)(local_fc + 0x44) = puVar4;
        }
      }
      else {
        *(undefined4 *)(local_f8 + 0x48) = 0;
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00422d90(puVar4);
          puVar4[0xc] = puVar4[0xc] | 0x800000;
          puVar4[10] = *(undefined4 *)(local_f8 + 0x28);
          local_100 = *(int *)(local_f8 + 0x28);
        }
        *(undefined4 **)(local_f8 + 0x48) = puVar4;
      }
    }
  }
  if (piVar2[7] != local_dc) {
    FUN_004a6dd0(&DAT_005ae958,piVar2,piVar2[7],local_dc);
  }
  iVar6 = FUN_00427820((void *)((int)this + 0x4dd0),(int)local_ec);
  piVar2[0x14e] = iVar6;
  piVar2[0x16] = 0;
  piVar2[0xc] = piVar2[0xc] | 0x10;
  FUN_0041ae90((int)piVar2);
  if (local_cc != 0) {
    puVar4 = FUN_00485080(this,local_ec[1],0x2f);
    if (puVar4 != (undefined4 *)0x0) {
      iVar6 = FUN_004c1c90(puVar4,local_cc);
      if (iVar6 == 0) {
        iVar6 = FUN_00414e50(puVar4,local_cc,&local_100);
        if (iVar6 != 0) {
          FUN_004c1b40(puVar4[10],piVar2[10]);
        }
      }
      else {
        FUN_004c1b40(puVar4[10],piVar2[10]);
      }
    }
    goto LAB_00480e42;
  }
  if ((local_f0 == 0) || (local_100 == -1)) goto LAB_00480e42;
  puVar4 = FUN_00485080(this,piVar2[0x16d],0x2f);
  FUN_004c2370((int)piVar2);
  FUN_00420630((int)piVar2);
  piVar5 = FUN_00485080(this,local_100,0x2f);
  if (piVar5 != (int *)0x0) {
    FUN_004c2370((int)piVar5);
    FUN_00420630((int)piVar5);
  }
  if (puVar4 == (undefined4 *)0x0) goto LAB_00480e42;
  if (piVar5 == (int *)0x0) {
LAB_00480e29:
    FUN_004c1bc0(puVar4,piVar2);
    FUN_00410af0(puVar4,0xffffffff);
    piVar5 = piVar2;
  }
  else {
    iVar6 = FUN_004c1d30((int)piVar5);
    if (iVar6 != 0) goto LAB_00480e29;
    FUN_004c1bc0(puVar4,piVar5);
    FUN_00410af0(puVar4,0xffffffff);
  }
  FUN_004c1c20(piVar5,(int)puVar4);
LAB_00480e42:
  if ((piVar2[10] != local_ec[0]) && ((piVar2[0xc] & 0x8000U) != 0)) {
    puVar4 = FUN_00485080(this,local_ec[1],0x2f);
    if ((puVar4 != (undefined4 *)0x0) &&
       (((puVar4[0xc] & 0x8000) != 0 && (puVar4[0x153] == local_ec[0])))) {
      puVar4[0x153] = piVar2[10];
    }
  }
  DAT_005aeef4 = 1;
  if (-1 < local_f4) {
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,local_f4,piVar2[10]);
  }
  FUN_004ba8d0(&DAT_005a9ddc,(int)piVar2);
  FUN_0052ff40(&DAT_005a7d90 + DAT_005a7d8c * 0x400,piVar2);
  if (piVar2[0x12] == DAT_005a7d8c) {
    FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
  }
  piVar2[8] = 0;
  return 1;
}


