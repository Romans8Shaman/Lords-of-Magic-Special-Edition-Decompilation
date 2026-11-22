
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00482230(void *param_1)

{
  void *this;
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unused_reg_1;
  bool bVar6;
  int local_8;
  byte local_4 [4];
  
  DVar1 = GetTickCount();
  if ((int)(DVar1 - *(int *)((int)param_1 + 0x228b0)) < *(int *)((int)param_1 + 0x228ac)) {
    iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
    if ((iVar2 == 0) && (-1 < DAT_005a79e4)) {
      FUN_0051a930(&DAT_005876d0);
      return 0;
    }
  }
  else {
    *(int *)((int)param_1 + 0x228b0) =
         *(int *)((int)param_1 + 0x228ac) + *(int *)((int)param_1 + 0x228b0);
    DAT_005834f4 = DAT_005834f4 + 1;
    if (0x32 < DAT_005834f4) {
      DAT_005834f4 = 0;
      *(undefined4 *)((int)param_1 + 0x4fac) = *(undefined4 *)((int)param_1 + 0x4fb0);
      uVar3 = FUN_004c5ca0((void *)((int)param_1 + 0x4dd8),0x140,0xc0);
      *(uint *)((int)param_1 + 0x4fb0) = uVar3;
    }
    if (DAT_005834e8 != 0) {
      DAT_005834f0 = DAT_005834f0 + 1;
    }
    local_8 = 0;
    if (*(uint *)((int)param_1 + 0x228b0) < DVar1) {
      iVar2 = (int)(DVar1 - *(uint *)((int)param_1 + 0x228b0)) / *(int *)((int)param_1 + 0x228ac);
      local_8 = iVar2;
      iVar4 = FUN_00482180((int)param_1);
      if (iVar4 == 0) {
        if ((DAT_005d1e84 == 0) || (iVar2 = *(int *)(DAT_005d1e84 + 0x100), iVar2 < 1)) {
          iVar2 = 1;
        }
        if (iVar2 < 2) {
          *(DWORD *)((int)param_1 + 0x228b0) = DVar1;
        }
      }
      else if (iVar2 == 0) {
        DAT_005834e8 = 0;
      }
      else if (DAT_005834e8 == 0) {
        DAT_005834e8 = 1;
        DAT_005834f0 = 0;
        DAT_005834ec = DVar1;
      }
      else if (10 < (int)DAT_005834f0) {
        DAT_005834e8 = 0;
        iVar2 = (DVar1 - DAT_005834ec) / DAT_005834f0 + 2;
        if ((*(int *)((int)param_1 + 0x228ac) <= iVar2) && (iVar2 < 0x1f5)) {
          FUN_004819c0(iVar2);
        }
      }
    }
    _DAT_005834dc = DVar1;
    FUN_004b4610(&DAT_005cd358);
    if (DAT_005d2ca0 != 0) {
      return 0;
    }
    DVar1 = GetTickCount();
    _DAT_00583578 = 0;
    iVar2 = FUN_00484e10((int)param_1);
    bVar6 = iVar2 != 0;
    if (!bVar6) {
      if (*(int *)((int)param_1 + 0x5024) < 1) {
        _DAT_00583578 = FUN_0048c150();
        if (_DAT_00583578 == 0) {
          return 0;
        }
        FUN_0040afc0(param_1);
      }
      else {
        FUN_00460eb0(param_1,*(int *)((int)param_1 + 0x5024) + -1);
        bVar6 = true;
      }
    }
    if (!bVar6) {
      if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
        FUN_00461a00(param_1);
      }
      uVar3 = *(int *)((int)param_1 + 0x5008) + 1;
      *(uint *)((int)param_1 + 0x5008) = uVar3;
      FUN_0040b620((void *)((int)param_1 + 0x4d4c),DAT_005a7b78,uVar3,0);
      GetTickCount();
      FUN_00481a30((int)param_1,unused_reg_1,DVar1);
      iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
      if ((iVar2 == 0) && (DAT_005a79e4 == -1)) {
        FUN_004a6850((int)param_1 + 0x482c);
      }
      this = (void *)((int)param_1 + 0x4848);
      *(undefined4 *)((int)param_1 + 0x4dcc) = *(undefined4 *)((int)param_1 + 0x4dc8);
      *(undefined4 *)((int)param_1 + 0x4dc8) = 0;
      uVar3 = FUN_004f66a0(this,DVar1);
      if (uVar3 != 0) {
        iVar2 = FUN_004f6270((int)this);
        if (iVar2 == 0) {
          FUN_004f62f0((int)this);
        }
      }
      iVar2 = FUN_00481f80((int)param_1);
      if (iVar2 != 0) {
        FUN_00482020((int)param_1);
      }
      FUN_0048a0e0((int)param_1);
      if ((0 < local_8) && ((*(byte *)((int)param_1 + 0x5008) & 1) != 0)) {
        iVar2 = FUN_00482180((int)param_1);
        if (iVar2 != 0) {
          DAT_005834e0 = DAT_005834e0 + 1;
          FUN_004a2e60(&DAT_00584ca8);
          return uVar3;
        }
      }
      DAT_005834e4 = DAT_005834e4 + 1;
      iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
      if (iVar2 == 0) {
        if (DAT_005a79e4 < '\0') {
          if (DAT_005a7adc != 0) {
            FUN_0051ac00(&DAT_005876d0,&DAT_005a7a14);
            FUN_004a6a10((void *)((int)param_1 + 0x482c),(int *)0x0);
            if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 8) {
              FUN_00504810((int)param_1);
            }
            FUN_005007e0(&DAT_00584ae8,0);
            FUN_00476c20(&DAT_00584ae8);
          }
        }
        else {
          FUN_0051a930(&DAT_005876d0);
        }
      }
      FUN_004a2e60(&DAT_00584ca8);
      if ((DAT_00585b8c != (int *)0x0) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 2)) {
        (/*IC:00482646*/**(code **)(*DAT_00585b8c + 0x24))(DAT_00585b8c,local_4);
        if ((local_4[0] & 5) != 0) {
          (/*IC:0048265d*/**(code **)(*DAT_00585b8c + 0x1c))(DAT_00585b8c,&local_8);
          local_8 = local_8 + DAT_00586788 * 1000;
          (/*IC:00482683*/**(code **)(*DAT_00585b8c + 0x40))(DAT_00585b8c,DAT_00585b8c,local_8);
        }
      }
      if ((DAT_005876d4 != -1) && (DAT_00585b88 != (int *)0x0)) {
        (/*IC:004826a0*/**(code **)(*DAT_00585b88 + 0x18))(DAT_00585b88,&DAT_00586780);
        DAT_00586780 = DAT_00586780 + -200;
        (/*IC:004826bc*/**(code **)(*DAT_00585b88 + 0x3c))(DAT_00585b88,DAT_00585b88,DAT_00586780);
      }
      if ((DAT_005876d4 == -1) && (DAT_00585b88 != (int *)0x0)) {
        (/*IC:004826d8*/**(code **)(*DAT_00585b88 + 0x18))(DAT_00585b88,&DAT_00586780);
        if (DAT_00586780 < DAT_0058677c) {
          DAT_00586780 = DAT_00586780 + 200;
          if (DAT_0058677c < DAT_00586780) {
            DAT_00586780 = DAT_0058677c;
          }
          (/*IC:00482709*/**(code **)(*DAT_00585b88 + 0x3c))(DAT_00585b88,DAT_00585b88,DAT_00586780);
        }
      }
      uVar5 = FUN_0053a110();
      if ((int)(uVar5 * 100 + ((int)(uVar5 * 100) >> 0x1f & 0x7fffU)) >> 0xf == 0x2a) {
        FUN_0047aed0(&DAT_00585408,DAT_00585b90);
      }
      if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
        FUN_00417930(param_1);
      }
      return uVar3;
    }
    iVar2 = FUN_004c9810((undefined4 *)&DAT_00584d60);
    if ((iVar2 == 0) && (-1 < DAT_005a79e4)) {
      FUN_0051a930(&DAT_005876d0);
      return 0;
    }
    if (DAT_005a7adc != 0) {
      FUN_004a6850((int)param_1 + 0x482c);
      FUN_0051ac00(&DAT_005876d0,&DAT_005a7a14);
      FUN_004a6a10((void *)((int)param_1 + 0x482c),(int *)0x0);
      FUN_005007e0(&DAT_00584ae8,0);
      FUN_00476c20(&DAT_00584ae8);
    }
  }
  return 0;
}


