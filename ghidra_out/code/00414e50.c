
undefined4 __thiscall FUN_00414e50(void *this,uint param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *this_00;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puStack_18;
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054944b;
  local_c = ExceptionList;
  iVar6 = 0;
  this_00 = (int *)0x0;
  ExceptionList = &local_c;
  *param_2 = -1;
  iVar3 = *(int *)((int)this + 0x4c);
  if (0 < iVar3) {
    uVar1 = param_1;
    iVar8 = iVar3;
    do {
      if ((uVar1 & 1) != 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = uVar1 >> 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((iVar6 == iVar3) || (iVar6 == 0)) {
    uVar5 = 0;
  }
  else {
    puVar2 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      this_00 = FUN_00411610(puVar2);
    }
    uStack_4 = 0xffffffff;
    FUN_004a7d50(&DAT_005ae958,this_00,*(int *)((int)this + 0x1c));
    piStack_14 = (int *)param_1;
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xffffefff;
    this_00[0xc] = this_00[0xc] & 0xffffefff;
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0x9fffffff;
    *(undefined4 *)((int)this + 0x5cc) = 0;
    this_00[0x173] = 0;
    this_00[0xc] = this_00[0xc] & 0x9fffffff;
    this_00[0x11] = *(int *)((int)this + 0x44);
    this_00[0x12] = *(int *)((int)this + 0x48);
    this_00[0x16c] = *(int *)((int)this + 0x5b0);
    this_00[0x16d] = *(int *)((int)this + 0x5b4);
    this_00[0x16e] = *(int *)((int)this + 0x5b8);
    this_00[0x16f] = *(int *)((int)this + 0x5bc);
    this_00[0x170] = *(int *)((int)this + 0x5c0);
    this_00[0x171] = *(int *)((int)this + 0x5c4);
    *(undefined1 *)(this_00 + 0x172) = *(undefined1 *)((int)this + 0x5c8);
    param_1 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      puStack_18 = (undefined4 *)((int)this + 0xe0);
      do {
        if (((uint)piStack_14 & 1) == 0) {
          iVar3 = FUN_004f6590(&DAT_005ae974,*(int *)((int)this + 0x28),param_1);
          piVar4 = puStack_18 + -7;
          piVar7 = this_00 + this_00[0x13] * 0x13 + 0x31;
          for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar7 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar7 = piVar7 + 1;
          }
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0x44) = this_00[10];
            *(int *)(iVar3 + 0x48) = this_00[0x13];
          }
          this_00[0x13] = this_00[0x13] + 1;
          puStack_18[-1] = 0;
          *puStack_18 = 0;
          puStack_18[-2] = 0;
          puStack_18[-7] = -1;
        }
        puStack_18 = puStack_18 + 0x13;
        piStack_14 = (int *)((uint)piStack_14 >> 1);
        param_1 = param_1 + 1;
      } while ((int)param_1 < *(int *)((int)this + 0x4c));
    }
    iVar3 = *(int *)((int)this + 0x4c);
    puVar2 = (undefined4 *)0x0;
    puStack_18 = (undefined4 *)0x0;
    param_1 = 0;
    if (0 < iVar3) {
      piStack_14 = (int *)((int)this + 0xc4);
      do {
        if (*piStack_14 < 0) {
          iVar6 = (int)puVar2 + 1;
          piVar4 = piStack_14;
          if (iVar6 < *(int *)((int)this + 0x4c)) {
            do {
              iVar6 = iVar6 + 1;
              piVar7 = piVar4 + 0x13;
              piVar9 = piVar4;
              for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
                *piVar9 = *piVar7;
                piVar7 = piVar7 + 1;
                piVar9 = piVar9 + 1;
              }
              piVar4 = piVar4 + 0x13;
            } while (iVar6 < *(int *)((int)this + 0x4c));
            puVar2 = puStack_18;
          }
          iVar6 = *(int *)((int)this + 0x4c) + -1;
          *(int *)((int)this + 0x4c) = iVar6;
          iVar6 = iVar6 * 0x4c;
          *(undefined4 *)((int)this + iVar6 + 0xdc) = 0;
          *(undefined4 *)((int)this + iVar6 + 0xe0) = 0;
          *(undefined4 *)((int)this + iVar6 + 0xd8) = 0;
        }
        else {
          if (((undefined4 *)param_1 != puVar2) &&
             (iVar6 = FUN_004f6590(&DAT_005ae974,*(int *)((int)this + 0x28),param_1), iVar6 != 0)) {
            *(undefined4 **)(iVar6 + 0x48) = puVar2;
          }
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          piStack_14 = piStack_14 + 0x13;
          puStack_18 = puVar2;
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < iVar3);
    }
    if (((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
        ((*(byte *)((int)this + 0x30) & 0x20) != 0)) ||
       ((this_00[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) &&
        ((*(byte *)(this_00 + 0xc) & 0x20) != 0)))) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    }
    (/*IC:00415133*/**(code **)(*(int *)this + 0x2c))(this);
    (/*IC:0041513a*/**(code **)(*this_00 + 0x2c))(this_00);
    uVar5 = 1;
    *param_2 = this_00[10];
  }
  ExceptionList = local_c;
  return uVar5;
}


