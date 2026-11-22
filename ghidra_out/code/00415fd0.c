
undefined4 __thiscall FUN_00415fd0(void *this,int *param_1)

{
  bool bVar1;
  bool bVar2;
  int *this_00;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  
  this_00 = param_1;
  iVar3 = FUN_00415610(this,(int)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_0041efa0(this,2);
  param_1 = (int *)0x0;
  if (0 < *(int *)((int)this + 0x4c)) {
    puVar9 = (undefined4 *)((int)this + 0xe0);
    do {
      iVar3 = FUN_004f6590(&DAT_005ae974,*(int *)((int)this + 0x28),(int)param_1);
      piVar5 = puVar9 + -7;
      piVar4 = this_00 + this_00[0x13] * 0x13 + 0x31;
      for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar4 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar4 = piVar4 + 1;
      }
      puVar9[-1] = 0;
      *puVar9 = 0;
      puVar9[-2] = 0;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x44) = this_00[10];
        *(int *)(iVar3 + 0x48) = this_00[0x13];
      }
      this_00[0x13] = this_00[0x13] + 1;
      param_1 = (int *)((int)param_1 + 1);
      puVar9 = puVar9 + 0x13;
    } while ((int)param_1 < *(int *)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x5cc) = 0;
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0x9fffefff;
  this_00[0xc] = this_00[0xc] & 0xffffefff;
  FUN_00415a60((int)this_00);
  FUN_00415c20(this_00,(int *)0x0,-1);
  this_00[0xc] = this_00[0xc] & 0x9fffffff;
  this_00[0x173] = 0;
  if (((-1 < this_00[0x154]) || (-1 < *(int *)((int)this + 0x550))) &&
     (this_00[0x154] != *(int *)((int)this + 0x550))) {
    iVar3 = *(int *)((int)this + 0x48);
    if ((iVar3 < 0) || (0xf < iVar3)) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = &DAT_005af194 + iVar3 * 0x1d84;
    }
    if (puVar8 != (undefined *)0x0) {
      FUN_004bb140(puVar8,(int)this);
    }
  }
  piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0);
  piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,this_00[0x16d],0);
  if (piVar4 == (int *)0x0) {
LAB_004161a7:
    if (piVar5 == (int *)0x0) goto LAB_004161dc;
    FUN_004c2450((int)piVar5);
    this_00[0x16d] = -1;
    FUN_004c1bc0(piVar5,this_00);
    FUN_00410af0(piVar5,0xffffffff);
  }
  else if (piVar5 == (int *)0x0) {
    if (piVar4 == (int *)0x0) goto LAB_004161a7;
    FUN_004c2450((int)piVar4);
    *(undefined4 *)((int)this + 0x5b4) = 0xffffffff;
    FUN_004c1bc0(piVar4,this_00);
    FUN_00410af0(piVar4,0xffffffff);
    piVar5 = piVar4;
  }
  else {
    FUN_004c23b0(piVar4,(int)piVar5);
    (/*IC:0041613d*/**(code **)(*piVar4 + 0x2c))(piVar4);
    FUN_00420630((int)piVar4);
    FUN_00416400(&DAT_005aa12c,piVar5[10]);
    this_00[0x16d] = -1;
    FUN_004c2450((int)piVar4);
    *(undefined4 *)((int)this + 0x5b4) = 0xffffffff;
    FUN_004c1bc0(piVar4,this_00);
    FUN_00410af0(piVar4,0xffffffff);
    piVar5 = piVar4;
  }
  FUN_004c1c20(this_00,(int)piVar5);
  FUN_00420630((int)this_00);
LAB_004161dc:
  bVar2 = false;
  if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    iVar3 = *(int *)((int)this + 0x28);
    bVar2 = true;
  }
  else {
    iVar3 = -1;
  }
  FUN_00483be0(&DAT_005aa12c,this);
  FUN_00526300((int)this_00);
  (/*IC:00416229*/**(code **)(*this_00 + 0x2c))(this_00);
  if (((this_00[0xc] & 0x80000U) != 0) && (-1 < this_00[0x154])) {
    iVar7 = this_00[0x12];
    if ((iVar7 < 0) || (0xf < iVar7)) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = &DAT_005af194 + iVar7 * 0x1d84;
    }
    if (puVar8 != (undefined *)0x0) {
      FUN_004bb120(puVar8,(int)this_00);
    }
  }
  if ((this_00[0xc] & 0x200000U) != 0) {
    piVar5 = (int *)FUN_004fbe60(&DAT_005ae974,0,0);
    bVar1 = false;
    for (; piVar5 != (int *)0x0; piVar5 = (int *)FUN_004fbe60(&DAT_005ae974,(int)piVar5,0)) {
      if ((((piVar5 != this_00) && (piVar5[0x12] == this_00[0x12])) &&
          ((piVar5[0xc] & 0x100000U) != 0)) && (piVar5[0x152] == this_00[7])) {
        bVar1 = true;
        break;
      }
    }
    if (!bVar1) {
      iVar7 = FUN_004f6000(&DAT_005ae974,this_00[0x153]);
      if (iVar7 == 0) {
        FUN_004176d0(this_00,0);
      }
      else {
        iVar6 = FUN_0041b670((int)this_00);
        if (iVar6 == 0) {
          this_00[0xc] = this_00[0xc] | 2;
        }
        else {
          FUN_00420b80(this_00,*(int *)(iVar7 + 0x1c),0x10040,0xffffffff,this_00[0x153],
                       this_00[0x154],0);
        }
      }
    }
  }
  if (-1 < iVar3) {
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,iVar3,this_00[10]);
  }
  if ((this_00[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     (((*(byte *)(this_00 + 0xc) & 0x20) != 0 || (bVar2)))) {
    FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
  }
  FUN_004ba870(&DAT_005a9ddc);
  return 1;
}


