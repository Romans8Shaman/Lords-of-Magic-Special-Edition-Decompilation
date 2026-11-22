
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045b550(void *this,int *param_1)

{
  bool bVar1;
  int *this_00;
  int *piVar2;
  int *this_01;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  float10 fVar14;
  int *local_700;
  int aiStack_6f0 [66];
  int local_5e8 [7];
  undefined4 local_5cc;
  undefined4 local_5c0;
  uint local_5b8;
  undefined4 local_5a0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549d8b;
  local_c = ExceptionList;
  if ((*param_1 != param_1[2]) && (param_1[1] != param_1[3])) {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + 0x230c0) = 0;
    *(undefined4 *)((int)this + 0x4fec) = 0;
    *(undefined4 *)((int)this + 0x4ff0) = 0;
    *(undefined4 *)((int)this + 0x4ff4) = 0;
    *(undefined4 *)((int)this + 0x4ff8) = 0xffffffff;
    *(undefined4 *)((int)this + 0x5060) = 1;
    FUN_004a2e30(&DAT_00584ca8);
    *(undefined4 *)((int)this + 0x478c) = 0;
    *(undefined4 *)((int)this + 0x4790) = 0;
    *(undefined4 *)((int)this + 0x4794) = 0;
    *(undefined4 *)((int)this + 0x4798) = 0xffffffff;
    *(undefined4 *)((int)this + 0x479c) = 0;
    FUN_0048c130();
    DAT_00573428 = param_1[6];
    *(undefined4 *)((int)this + 0x5008) = 0;
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      FUN_004372e0((undefined4 *)((int)this + 0x22db0));
      FUN_0047c4b0((int *)((int)this + 0x228bc));
    }
    *(undefined4 *)((int)this + 0x4778) = 0;
    *(undefined4 *)((int)this + 0x477c) = 0;
    *(int *)((int)this + 0x4774) = param_1[2];
    iVar9 = param_1[3];
    iVar4 = *param_1;
    if (iVar9 < 0) {
      iVar9 = 0xf;
    }
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      *(uint *)((int)this + param_1[1] * 0x1d84 + 0x6640) =
           *(uint *)((int)this + param_1[1] * 0x1d84 + 0x6640) | 8;
      *(uint *)((int)this + iVar9 * 0x1d84 + 0x6640) =
           *(uint *)((int)this + iVar9 * 0x1d84 + 0x6640) | 0x10;
    }
    DAT_005878f4 = DAT_00587874;
    DAT_005878f8 = DAT_00587878;
    pvVar10 = (void *)((int)this + 0x482c);
    *(undefined4 *)((int)this + 0xa8) = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
    fVar14 = FUN_004a6460((int)pvVar10);
    *(float *)((int)this + 0xac) = (float)fVar14;
    this_00 = FUN_00485080(this,iVar4,0x2f);
    if (this_00 != (int *)0x0) {
      piVar2 = (int *)FUN_00482ac0(this,*(int *)((int)this + 0x4774),1);
      if ((*(byte *)(param_1 + 7) & 1) == 0) {
        this_01 = FUN_00485080(this,*(int *)((int)this + 0x4774),0xf);
        if (piVar2 != (int *)0x0) {
          FUN_004a8700((short)piVar2[10]);
        }
      }
      else {
        if (piVar2 != (int *)0x0) {
          FUN_00485670(this,piVar2,0);
        }
        this_01 = FUN_00485080(this,*(int *)((int)this + 0x4774),0x2f);
      }
      FUN_00411610(local_5e8);
      local_4 = 0;
      if (this_01 == (int *)0x0) {
        this_01 = local_5e8;
        FUN_004117f0(local_5e8,0);
        uVar3 = FUN_00482ac0(this,*(int *)((int)this + 0x4774),1);
        local_5a0 = *(undefined4 *)(uVar3 + 0x5c);
        local_5cc = *(undefined4 *)(uVar3 + 0x1c);
        local_5c0 = *(undefined4 *)(uVar3 + 0x28);
        local_5b8 = local_5b8 | 0x1000000;
      }
      iVar9 = 0;
      this_00[0xc] = this_00[0xc] & 0xfffbffff;
      *(undefined4 *)((int)this + 0x4780) = 0;
      *(undefined4 *)((int)this + 0x4784) = 0;
      if (0 < this_00[0x13]) {
        local_700 = this_00 + 0x31;
        do {
          uVar3 = FUN_00525f10((int)local_700);
          if (uVar3 != 0) {
            *(undefined4 *)((int)this + 0x4780) = 1;
            break;
          }
          iVar9 = iVar9 + 1;
          local_700 = local_700 + 0x13;
        } while (iVar9 < this_00[0x13]);
      }
      iVar9 = 0;
      if (0 < this_01[0x13]) {
        local_700 = this_01 + 0x31;
        do {
          uVar3 = FUN_00525f10((int)local_700);
          if (uVar3 != 0) {
            *(undefined4 *)((int)this + 0x4784) = 1;
            break;
          }
          iVar9 = iVar9 + 1;
          local_700 = local_700 + 0x13;
        } while (iVar9 < this_01[0x13]);
      }
      local_700 = (int *)0xf;
      piVar2 = this_00;
      piVar13 = (int *)((int)this + 0x660);
      for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar13 = piVar13 + 1;
      }
      *(undefined4 *)((int)this + 0x68c) = 0;
      *(int *)((int)this + 0x6a4) = this_00[0x11];
      *(int *)((int)this + 0x6a8) = this_00[0x12];
      *(int *)((int)this + 0x6ac) = this_00[0x13];
      *(int *)((int)this + 0x6b0) = this_00[0x14];
      *(int *)((int)this + 0x6b4) = this_00[0x15];
      *(int *)((int)this + 0x6b8) = this_00[0x16];
      *(int *)((int)this + 0x6bc) = this_00[0x17];
      *(int *)((int)this + 0x6c0) = this_00[0x18];
      *(int *)((int)this + 0x6c4) = this_00[0x19];
      piVar2 = this_00 + 0x1a;
      piVar13 = (int *)((int)this + 0x6c8);
      for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar13 = piVar13 + 1;
      }
      *(int *)((int)this + 0x720) = this_00[0x30];
      puVar5 = (undefined4 *)((int)this + 0x724);
      do {
        puVar11 = (undefined4 *)(((int)this_00 - ((int)this + 0x660)) + (int)puVar5);
        puVar12 = puVar5;
        for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar5 = puVar5 + 0x13;
        local_700 = (int *)((int)local_700 + -1);
      } while (local_700 != (int *)0x0);
      *(int *)((int)this + 0xb98) = this_00[0x14e];
      *(int *)((int)this + 0xb9c) = this_00[0x14f];
      *(int *)((int)this + 0xba0) = this_00[0x150];
      *(int *)((int)this + 0xba4) = this_00[0x151];
      *(int *)((int)this + 0xba8) = this_00[0x152];
      *(int *)((int)this + 0xbac) = this_00[0x153];
      *(int *)((int)this + 0xbb0) = this_00[0x154];
      *(int *)((int)this + 0xbb4) = this_00[0x155];
      *(int *)((int)this + 3000) = this_00[0x156];
      *(int *)((int)this + 0xbbc) = this_00[0x157];
      *(int *)((int)this + 0xbc0) = this_00[0x158];
      *(int *)((int)this + 0xbc4) = this_00[0x159];
      piVar2 = this_00 + 0x15a;
      piVar13 = (int *)((int)this + 0xbc8);
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar13 = piVar13 + 1;
      }
      *(int *)((int)this + 0xbec) = this_00[0x163];
      *(int *)((int)this + 0xbf0) = this_00[0x164];
      *(int *)((int)this + 0xbf4) = this_00[0x165];
      *(int *)((int)this + 0xbf8) = this_00[0x166];
      *(int *)((int)this + 0xbfc) = this_00[0x167];
      *(int *)((int)this + 0xc00) = this_00[0x168];
      *(int *)((int)this + 0xc04) = this_00[0x169];
      *(int *)((int)this + 0xc08) = this_00[0x16a];
      *(char *)((int)this + 0xc0c) = (char)this_00[0x16b];
      *(int *)((int)this + 0xc10) = this_00[0x16c];
      *(int *)((int)this + 0xc14) = this_00[0x16d];
      *(int *)((int)this + 0xc18) = this_00[0x16e];
      *(int *)((int)this + 0xc1c) = this_00[0x16f];
      *(int *)((int)this + 0xc20) = this_00[0x170];
      *(int *)((int)this + 0xc24) = this_00[0x171];
      *(char *)((int)this + 0xc28) = (char)this_00[0x172];
      *(int *)((int)this + 0xc2c) = this_00[0x173];
      *(char *)((int)this + 0xc30) = (char)this_00[0x174];
      *(int *)((int)this + 0xc34) = this_00[0x175];
      *(char *)((int)this + 0xc38) = (char)this_00[0x176];
      piVar2 = this_01;
      piVar13 = (int *)((int)this + 0xc3c);
      for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar13 = piVar13 + 1;
      }
      *(undefined4 *)((int)this + 0xc68) = 0;
      *(int *)((int)this + 0xc80) = this_01[0x11];
      *(int *)((int)this + 0xc84) = this_01[0x12];
      *(int *)((int)this + 0xc88) = this_01[0x13];
      *(int *)((int)this + 0xc8c) = this_01[0x14];
      *(int *)((int)this + 0xc90) = this_01[0x15];
      *(int *)((int)this + 0xc94) = this_01[0x16];
      *(int *)((int)this + 0xc98) = this_01[0x17];
      *(int *)((int)this + 0xc9c) = this_01[0x18];
      *(int *)((int)this + 0xca0) = this_01[0x19];
      local_700 = (int *)0xf;
      piVar2 = this_01 + 0x1a;
      piVar13 = (int *)((int)this + 0xca4);
      for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar13 = piVar13 + 1;
      }
      *(int *)((int)this + 0xcfc) = this_01[0x30];
      puVar5 = (undefined4 *)((int)this + 0xd00);
      do {
        puVar11 = (undefined4 *)(((int)this_01 - ((int)this + 0xc3c)) + (int)puVar5);
        puVar12 = puVar5;
        for (iVar9 = 0x13; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar5 = puVar5 + 0x13;
        local_700 = (int *)((int)local_700 + -1);
      } while (local_700 != (int *)0x0);
      *(int *)((int)this + 0x1174) = this_01[0x14e];
      *(int *)((int)this + 0x1178) = this_01[0x14f];
      *(int *)((int)this + 0x117c) = this_01[0x150];
      *(int *)((int)this + 0x1180) = this_01[0x151];
      *(int *)((int)this + 0x1184) = this_01[0x152];
      *(int *)((int)this + 0x1188) = this_01[0x153];
      *(int *)((int)this + 0x118c) = this_01[0x154];
      *(int *)((int)this + 0x1190) = this_01[0x155];
      *(int *)((int)this + 0x1194) = this_01[0x156];
      *(int *)((int)this + 0x1198) = this_01[0x157];
      *(int *)((int)this + 0x119c) = this_01[0x158];
      *(int *)((int)this + 0x11a0) = this_01[0x159];
      piVar2 = this_01 + 0x15a;
      piVar13 = (int *)((int)this + 0x11a4);
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar13 = piVar13 + 1;
      }
      iVar9 = 0;
      *(int *)((int)this + 0x11c8) = this_01[0x163];
      *(int *)((int)this + 0x11cc) = this_01[0x164];
      *(int *)((int)this + 0x11d0) = this_01[0x165];
      *(int *)((int)this + 0x11d4) = this_01[0x166];
      *(int *)((int)this + 0x11d8) = this_01[0x167];
      *(int *)((int)this + 0x11dc) = this_01[0x168];
      *(int *)((int)this + 0x11e0) = this_01[0x169];
      *(int *)((int)this + 0x11e4) = this_01[0x16a];
      *(char *)((int)this + 0x11e8) = (char)this_01[0x16b];
      *(int *)((int)this + 0x11ec) = this_01[0x16c];
      *(int *)((int)this + 0x11f0) = this_01[0x16d];
      *(int *)((int)this + 0x11f4) = this_01[0x16e];
      *(int *)((int)this + 0x11f8) = this_01[0x16f];
      *(int *)((int)this + 0x11fc) = this_01[0x170];
      *(int *)((int)this + 0x1200) = this_01[0x171];
      *(char *)((int)this + 0x1204) = (char)this_01[0x172];
      *(int *)((int)this + 0x1208) = this_01[0x173];
      *(char *)((int)this + 0x120c) = (char)this_01[0x174];
      *(int *)((int)this + 0x1210) = this_01[0x175];
      *(char *)((int)this + 0x1214) = (char)this_01[0x176];
      local_700 = (int *)0x0;
      if (0 < this_00[0x13]) {
        piVar2 = this_00 + 0x31;
        do {
          iVar4 = FUN_00462be0(piVar2,this_00[10],iVar9);
          piVar2 = piVar2 + 0x13;
          local_700 = (int *)((int)local_700 + iVar4);
          iVar9 = iVar9 + 1;
        } while (iVar9 < this_00[0x13]);
      }
      iVar9 = 0;
      *(int **)((int)this + 0x4764) = local_700;
      local_700 = (int *)0x0;
      if (0 < this_01[0x13]) {
        piVar2 = this_01 + 0x31;
        do {
          iVar4 = FUN_00462be0(piVar2,this_01[10],iVar9);
          piVar2 = piVar2 + 0x13;
          local_700 = (int *)((int)local_700 + iVar4);
          iVar9 = iVar9 + 1;
        } while (iVar9 < this_01[0x13]);
      }
      *(int **)((int)this + 0x4768) = local_700;
      iVar9 = FUN_00421960(&DAT_005aa78c);
      *(int *)((int)this + 0x476c) = iVar9;
      iVar9 = FUN_00421960(&DAT_005aad68);
      *(int *)((int)this + 0x4770) = iVar9;
      *(int *)((int)this + 0x658) = this_00[0x12];
      *(int *)((int)this + 0x65c) = this_01[0x12];
      if (DAT_005aa1c4 != '\0') {
        FUN_0041d1d0(DAT_005a7b78,1,0xffffffff);
        FUN_004d05e0(DAT_005a7b78,_DAT_005aa1c4,DAT_005aa1c8);
      }
      iVar9 = this_00[0x12];
      if ((iVar9 < 0) || (0xf < iVar9)) {
        iVar9 = 0;
      }
      else {
        iVar9 = (int)this + iVar9 * 0x1d84 + 0x5068;
      }
      DAT_00583580 = *(undefined4 *)(iVar9 + 0x15dc);
      iVar9 = this_01[0x12];
      if ((iVar9 < 0) || (0xf < iVar9)) {
        iVar9 = 0;
      }
      else {
        iVar9 = (int)this + iVar9 * 0x1d84 + 0x5068;
      }
      DAT_00583584 = *(undefined4 *)(iVar9 + 0x15dc);
      bVar1 = false;
      iVar9 = FUN_0048c7c0();
      if ((iVar9 != 0) || ((*(byte *)(param_1 + 7) & 1) != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_00488640((int)this);
        *(undefined4 *)((int)this + 0x230c4) = 1;
        puVar5 = (undefined4 *)((int)this + 0x230ac);
        iVar9 = 5;
        do {
          puVar5[-5] = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar3 = FUN_00482ac0(this,*(int *)((int)this + 0x4774),2);
        uVar6 = FUN_00482ac0(this,*(int *)((int)this + 0x4774),3);
        pvVar7 = (void *)FUN_00482ac0(this,*(int *)((int)this + 0x4774),1);
        FUN_004176d0(this_00,0);
        if (uVar3 == 0) {
          if (uVar6 == 0) {
            if (pvVar7 == (void *)0x0) {
              DAT_00583100 = 1;
              FUN_004ecc90((undefined4 *)((int)this + 0x22944));
              FUN_004176d0(this_01,0);
            }
            else {
              DAT_00583100 = 3;
              FUN_0050ca30(pvVar7,param_1[7] & 1);
            }
          }
          else {
            FUN_004ecc90((undefined4 *)((int)this + 0x22944));
            DAT_00583100 = 2;
            FUN_00455170((int)this + 0x47bc);
            iVar9 = FUN_0044ec80(uVar6);
            *(int *)((int)this + 0x47ec) = iVar9;
            FUN_00455820((void *)((int)this + 0x47bc),*(int *)(uVar6 + 0x344));
            *(undefined4 *)((int)this + 0x47e8) = *(undefined4 *)(uVar6 + 0x80);
          }
        }
        else {
          DAT_00583100 = 1;
          FUN_004ef070(uVar3);
        }
        if (this_00[7] != param_1[4]) {
          FUN_004a6dd0(pvVar10,this_00,this_00[7],param_1[4]);
        }
        if (this_01[7] != param_1[5]) {
          FUN_004a6dd0(pvVar10,this_01,this_01[7],param_1[5]);
        }
        if ((this_00[0xc] & 0x1c00000U) != 0) {
          iVar9 = FUN_004a8b50(pvVar10,this_00[7],this_01[7]);
          uVar3 = iVar9 - 3U & 7;
          this_00[0x11] = uVar3;
          iVar9 = FUN_00420910(this_00,this_00[7],uVar3);
          if (iVar9 == 0) {
            iVar9 = FUN_004a8b50(pvVar10,this_00[7],this_01[7]);
            this_00[0x11] = iVar9 + 3U & 7;
          }
          iVar9 = FUN_00420910(this_00,this_00[7],this_00[0x11]);
          if (iVar9 == 0) {
            iVar9 = FUN_004a8b50(pvVar10,this_00[7],this_01[7]);
            this_00[0x11] = iVar9 - 4U & 7;
          }
          FUN_004245a0(this_00);
          *param_1 = this_00[10];
          param_1[4] = this_00[7];
        }
        iVar9 = FUN_004a8b50(pvVar10,this_01[7],this_00[7]);
        this_01[0x11] = iVar9;
        this_00[0x11] = iVar9 - 4U & 7;
        if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == this_00[0x12]) {
          iVar9 = this_00[10];
          iVar4 = FUN_0052d140((int)(&DAT_005a7d90 +
                                    *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) * 0x400));
          if (iVar4 != iVar9) {
            FUN_0052b6f0(&DAT_005a7d90 + *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) * 0x400,
                         iVar9,0);
          }
        }
        if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == this_01[0x12]) {
          iVar9 = this_01[10];
          iVar4 = FUN_0052d140((int)(&DAT_005a7d90 +
                                    *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) * 0x400));
          if (iVar4 != iVar9) {
            FUN_0052b6f0(&DAT_005a7d90 + *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) * 0x400,
                         iVar9,0);
          }
        }
        if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == this_01[0x12]) {
          DAT_005830ec = this_01[7] % *(int *)((int)this + 0x4898);
          DAT_005830e8 = this_01[7] / *(int *)((int)this + 0x4898);
          FUN_0041fda0((int)this_01);
          FUN_00504ce0(&DAT_00584ae8,1,0);
        }
        if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == this_01[0x12]) {
          iVar4 = *(int *)((int)this + 0x4770);
          iVar9 = *(int *)((int)this + 0x476c);
        }
        else {
          iVar4 = *(int *)((int)this + 0x476c);
          iVar9 = *(int *)((int)this + 0x4770);
        }
        _DAT_00586754 = (float)iVar4;
        DAT_00586750 = (float)iVar9;
        _DAT_00586758 = _DAT_00586754;
        _DAT_0058675c = DAT_00586750;
        if ((*(byte *)(param_1 + 7) & 1) == 0) {
          FUN_0047a7b0(0x585408);
          FUN_00479640(0x585408);
          FUN_0048cd80();
          FUN_004605b0(this);
          FUN_004f76b0((int)this + 0x4848);
          *(undefined4 *)((int)this + 0x5048) = 0;
          uVar3 = FUN_00460fb0((int)this);
          *(uint *)((int)this + 0x5028) = uVar3;
          FUN_00460eb0(this,*(int *)((int)this + 0x501c));
          if ((*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) != *(int *)((int)this + 0x6a8)) &&
             (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) != *(int *)((int)this + 0xc84))) {
            (/*IC:0045c273*/**(code **)(DAT_005876d0 + 0x28))
                      (&DAT_005876d0,DAT_005a7990 / 2,DAT_005a7994 / 2,0x140,0xc0);
          }
          if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0x6a8)) {
            iVar9 = FUN_00406a80(&DAT_005ae958,*(int *)((int)this + 0x6a8),-1);
            FUN_0051ab30(&DAT_005876d0,iVar9 % DAT_005ae9c4,iVar9 / DAT_005ae9c4,0x140,0xc0);
          }
          if (*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) == *(int *)((int)this + 0xc84)) {
            iVar9 = FUN_00406a80(&DAT_005ae958,*(int *)((int)this + 0xc84),-1);
            FUN_0051ab30(&DAT_005876d0,iVar9 % DAT_005ae9c4,iVar9 / DAT_005ae9c4,0x140,0xc0);
          }
          FUN_004a9f50(pvVar10);
          FUN_004aac90((int)pvVar10);
          FUN_0048c6a0();
          iVar9 = *(int *)((int)this + 0x658);
          if ((iVar9 < 0) || (0xf < iVar9)) {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)this + iVar9 * 0x1d84 + 0x5068;
          }
          if (iVar9 != 0) {
            iVar4 = *(int *)(iVar9 + 0x15dc);
            if (DAT_005d1e84 == 0) {
              iVar8 = 1;
            }
            else {
              iVar8 = FUN_004b7dd0(DAT_005d1e84);
            }
            if (iVar4 != iVar8) {
              iVar9 = 0;
            }
            if (iVar9 != 0) {
              FUN_0048cc70(aiStack_6f0,0x3e);
              FUN_00489b70(&DAT_00584ae8,aiStack_6f0);
            }
          }
          iVar9 = *(int *)((int)this + 0x6a8);
          if ((iVar9 < 0) || (0xf < iVar9)) {
            pvVar10 = (void *)0x0;
          }
          else {
            pvVar10 = (void *)((int)this + iVar9 * 0x1d84 + 0x5068);
          }
          iVar9 = *(int *)((int)this + 0xc84);
          if ((iVar9 < 0) || (0xf < iVar9)) {
            pvVar7 = (void *)0x0;
          }
          else {
            pvVar7 = (void *)((int)this + iVar9 * 0x1d84 + 0x5068);
          }
          if (pvVar10 != (void *)0x0) {
            FUN_004bb160(pvVar10,1);
          }
          if (pvVar7 != (void *)0x0) {
            FUN_004bb160(pvVar7,2);
          }
          FUN_00519b30(&DAT_005876d0,1);
          FUN_004a6470(0x5ae958);
          FUN_00504ce0(&DAT_00584ae8,1,0);
          FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0xe8),*(int **)((int)this + 0xec));
        }
        else {
          FUN_0042f120((void *)((int)this + 0x3b24),DAT_005a7b78,this_00,this_01);
          *(undefined4 *)((int)this + 0x22c3c) = 0;
          FUN_0045d2e0(this,(int *)this_00[10],this_01[10],(void *)0x1,0,0,(byte *)0x0,(byte *)0x0,0
                       ,0);
        }
        local_4 = 0xffffffff;
        FUN_00411910(local_5e8);
        ExceptionList = local_c;
        return 1;
      }
      local_4 = 0xffffffff;
      FUN_00411910(local_5e8);
    }
  }
  ExceptionList = local_c;
  return 0;
}


