
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004c1ed0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *this_00;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int local_10;
  
  this_00 = (int *)FUN_00482ac0(this,*param_1,0);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  iVar1 = this_00[0x16c];
  FUN_004117f0((void *)((int)this + 0x660),0);
  FUN_004117f0((void *)((int)this + 0xc3c),0);
  FUN_004117f0((void *)((int)this + 0x1dd0),0);
  FUN_004117f0((void *)((int)this + 0x23ac),0);
  FUN_004117f0((void *)((int)this + 0x2988),0);
  FUN_004117f0((void *)((int)this + 0x2f64),0);
  FUN_00411760((int)this + 0x1218);
  FUN_00411760((int)this + 0x17f4);
  *(undefined4 *)((int)this + 0x1240) = 0xfffffffa;
  *(undefined4 *)((int)this + 0x688) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1df8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x29b0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc64) = 0xffffffff;
  *(undefined4 *)((int)this + 0x23d4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2f8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x181c) = 0xfffffff9;
  this_00[0x12] = this_00[0x16e];
  iVar5 = FUN_00416a30((int)this_00);
  iVar2 = this_00[0x12];
  piVar10 = this_00;
  piVar12 = &DAT_005ab920;
  for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar12 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar12 = piVar12 + 1;
  }
  _DAT_005ab94c = 0;
  _DAT_005ab964 = this_00[0x11];
  _DAT_005ab968 = this_00[0x12];
  _DAT_005ab96c = this_00[0x13];
  _DAT_005ab970 = this_00[0x14];
  _DAT_005ab974 = this_00[0x15];
  _DAT_005ab978 = this_00[0x16];
  _DAT_005ab97c = this_00[0x17];
  _DAT_005ab980 = this_00[0x18];
  _DAT_005ab984 = this_00[0x19];
  piVar10 = this_00 + 0x1a;
  piVar12 = &DAT_005ab988;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar12 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar12 = piVar12 + 1;
  }
  _DAT_005ab9e0 = this_00[0x30];
  local_10 = 0xf;
  puVar6 = &DAT_005ab9e4;
  do {
    puVar9 = (undefined4 *)((int)(this_00 + -0x16ae48) + (int)puVar6);
    puVar11 = puVar6;
    for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_10 = local_10 + -1;
    puVar6 = puVar6 + 0x13;
  } while (local_10 != 0);
  _DAT_005abe58 = this_00[0x14e];
  _DAT_005abe5c = this_00[0x14f];
  _DAT_005abe60 = this_00[0x150];
  _DAT_005abe64 = this_00[0x151];
  _DAT_005abe68 = this_00[0x152];
  _DAT_005abe6c = this_00[0x153];
  _DAT_005abe70 = this_00[0x154];
  _DAT_005abe74 = this_00[0x155];
  _DAT_005abe78 = this_00[0x156];
  _DAT_005abe7c = this_00[0x157];
  _DAT_005abe80 = this_00[0x158];
  _DAT_005abe84 = this_00[0x159];
  piVar10 = this_00 + 0x15a;
  piVar12 = &DAT_005abe88;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar12 = *piVar10;
    piVar10 = piVar10 + 1;
    piVar12 = piVar12 + 1;
  }
  _DAT_005abeac = this_00[0x163];
  _DAT_005abeb0 = this_00[0x164];
  _DAT_005abeb4 = this_00[0x165];
  _DAT_005abeb8 = this_00[0x166];
  _DAT_005abebc = this_00[0x167];
  _DAT_005abec0 = this_00[0x168];
  _DAT_005abec4 = this_00[0x169];
  _DAT_005abec8 = this_00[0x16a];
  DAT_005abecc = (undefined1)this_00[0x16b];
  _DAT_005abed0 = this_00[0x16c];
  _DAT_005abed4 = this_00[0x16d];
  _DAT_005abed8 = this_00[0x16e];
  _DAT_005abedc = this_00[0x16f];
  _DAT_005abee0 = this_00[0x170];
  _DAT_005abee4 = this_00[0x171];
  DAT_005abee8 = (undefined1)this_00[0x172];
  _DAT_005abeec = this_00[0x173];
  DAT_005abef0 = (undefined1)this_00[0x174];
  _DAT_005abef4 = this_00[0x175];
  DAT_005abef8 = (undefined1)this_00[0x176];
  _DAT_005ab948 = 0xfffffff9;
  FUN_004117f0(this_00,0);
  if ((this_00[0xc] & 0x1c00000U) != 0) {
    FUN_004245a0(this_00);
  }
  FUN_004176d0(this_00,0);
  FUN_00483be0(&DAT_005aa12c,this_00);
  puVar6 = FUN_00485080(this,iVar1,0x2f);
  if (puVar6 != (undefined4 *)0x0) {
    FUN_00419d00(&DAT_005aa78c,puVar6);
    pvVar4 = DAT_005a7b78;
    if (param_1[1] == 0x25) {
      uVar3 = puVar6[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
        iVar1 = *(int *)((int)pvVar4 + 0x50);
        *(undefined4 *)(iVar1 + iVar8 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar8 * 8) = uVar3;
      }
      pvVar4 = DAT_005a7b78;
      iVar1 = *param_1;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        FUN_00404ab0(DAT_005a7b78,3);
      }
      else {
        iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
        iVar8 = *(int *)((int)pvVar4 + 0x50);
        *(undefined4 *)(iVar8 + iVar7 * 8) = 1;
        *(int *)(iVar8 + 4 + iVar7 * 8) = iVar1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7cec,DAT_005a7cf0);
    }
  }
  pvVar4 = DAT_005a7b78;
  if (((iVar5 != 0) && (-1 < iVar2)) && (iVar2 < 8)) {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar1 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar5 * 8) = iVar2;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c4c,DAT_005a7c50);
  }
  return 1;
}


