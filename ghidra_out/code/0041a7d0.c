
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0041a7d0(void *this,undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unused_reg_1;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 unused_reg_1_00;
  undefined4 extraout_EDX_06;
  undefined4 unused_reg_1_01;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 unused_reg_1_02;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  undefined4 uVar9;
  undefined4 extraout_EDX_13;
  undefined4 unused_reg_1_03;
  undefined4 extraout_EDX_14;
  undefined4 extraout_EDX_15;
  undefined4 unused_reg_1_04;
  undefined4 unused_reg_1_05;
  uint uVar10;
  int iStack_8;
  int iStack_4;
  
  *(undefined4 *)((int)this + 0x558) = 0xffffffff;
  *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
  if ((*(uint *)((int)this + 0x30) & 0x40000) != 0) {
    return false;
  }
  iVar3 = FUN_00420580((int)this);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x5d4) = 0;
  }
  else if (0 < *(int *)((int)this + 0x5d4)) {
    iVar3 = FUN_00506190(this);
    if (iVar3 < *(int *)((int)this + 0x5d4)) {
      *(undefined4 *)((int)this + 0x5d4) = 1;
    }
    *(int *)((int)this + 0x5d4) = *(int *)((int)this + 0x5d4) + -1;
  }
  uVar4 = FUN_00419440((int)this);
  if (uVar4 != 0) {
    uVar9 = extraout_EDX;
    if ((!NAN(*(float *)((int)this + 0x5a8)) && !NAN(*(float *)((int)this + 0x59c))) &&
        *(float *)((int)this + 0x59c) < *(float *)((int)this + 0x5a8)) {
      fVar1 = *(float *)((int)this + 0x5a8) - _DAT_0054d430;
      *(float *)((int)this + 0x5a8) = fVar1;
      if ((NAN(fVar1) || NAN(*(float *)((int)this + 0x59c))) ||
          fVar1 < *(float *)((int)this + 0x59c)) {
        *(undefined4 *)((int)this + 0x5a8) = *(undefined4 *)((int)this + 0x59c);
      }
      (/*IC:0041a897*/**(code **)(*(int *)this + 0x1c))();
      uVar9 = extraout_EDX_00;
    }
    FUN_0042dbb0((int)this + 0x568,uVar9,param_1);
    return true;
  }
  if ((~*(uint *)((int)this + 0x30) & 0x100) == 0) {
    FUN_00419490(this,param_1,param_1);
    return false;
  }
  iVar3 = FUN_00420580((int)this);
  if ((((iVar3 != 0) && (*(int *)((int)this + 200) < 1)) && (*(int *)((int)this + 0x544) != 8)) &&
     (*(int *)((int)this + 0x544) != 9)) {
    FUN_0041efa0(this,8);
    return true;
  }
  iVar3 = FUN_004209e0(this,*(int *)((int)this + 0x1c));
  if ((DAT_005af134 + *(int *)((int)this + 0x28)) % (iVar3 + 1) != 0) {
    if (((((*(uint *)((int)this + 0x30) & 0x10) == 0) ||
         (((*(uint *)((int)this + 0x30) & 0x1000) != 0 &&
          (iVar3 = FUN_00420560((int)this), iVar3 != 0)))) && (*(int *)((int)this + 0x58) < 1)) &&
       (((*(int *)((int)this + 0x60) < 1 && (*(int *)((int)this + 100) < 1)) &&
        (*(int *)((int)this + 0x20) < 1)))) {
      return false;
    }
    DAT_005aeef4 = 1;
    return false;
  }
  if (0 < *(int *)((int)this + 0x58)) {
    DAT_005aeef4 = 1;
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
      iVar3 = *(int *)((int)this + 0x58) + -1;
      *(int *)((int)this + 0x58) = iVar3;
      uVar9 = 0;
      if (iVar3 < 2) {
        if (0 < *(int *)((int)this + 0x5c)) {
          *(undefined4 *)((int)this + 0x58) = 1;
          FUN_00401fd0((void *)((int)this + 0x68),this);
          *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + -1;
          iVar3 = FUN_004b02a0((int *)((int)this + 0x55c));
          uVar9 = unused_reg_1;
          if (iVar3 != 0) {
            FUN_004b0960((int *)((int)this + 0x55c),unused_reg_1,param_1);
            uVar9 = extraout_EDX_01;
            if (*(void **)((int)this + 0x58c) != (void *)0x0) {
              thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
              uVar9 = extraout_EDX_02;
            }
          }
          FUN_0042dbb0((int)this + 0x568,uVar9,param_1);
          return true;
        }
        *(undefined4 *)((int)this + 0x58) = 0;
        FUN_00401120(this);
        uVar9 = extraout_EDX_03;
      }
      FUN_004b0960((undefined4 *)((int)this + 0x55c),uVar9,param_1);
      uVar9 = extraout_EDX_04;
      if (*(void **)((int)this + 0x58c) != (void *)0x0) {
        thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
        uVar9 = extraout_EDX_05;
      }
      FUN_0042dbb0((int)this + 0x568,uVar9,param_1);
      FUN_004f6830(this,unused_reg_1_00,param_1);
      return true;
    }
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  if (*(int *)((int)this + 100) < 1) {
    uVar9 = 0;
    if (((*(uint *)((int)this + 0x30) & 0x1000) != 0) &&
       (iVar3 = FUN_00420560((int)this), uVar9 = unused_reg_1_01, iVar3 != 0)) {
      FUN_004b0960((undefined4 *)((int)this + 0x55c),unused_reg_1_01,param_1);
      uVar9 = extraout_EDX_07;
      if (*(void **)((int)this + 0x58c) != (void *)0x0) {
        thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
        uVar9 = extraout_EDX_08;
      }
      FUN_0042dbb0((int)this + 0x568,uVar9,param_1);
      FUN_004f6830(this,unused_reg_1_02,param_1);
      return false;
    }
    if (0 < *(int *)((int)this + 0x60)) {
      DAT_005aeef4 = 1;
      iVar3 = *(int *)((int)this + 0x60) + -1;
      *(int *)((int)this + 0x60) = iVar3;
      if (iVar3 == 0) {
        bVar2 = FUN_004f6830(this,param_1,param_1);
        FUN_0041dc10(this,1);
        *(undefined4 *)((int)this + 0x544) = 2;
        FUN_0041ebb0(this,2);
        FUN_004f2470((int *)((int)this + 0x84));
        return bVar2;
      }
    }
    if ((0 < *(int *)((int)this + 0x20)) || (0 < *(int *)((int)this + 0x60))) {
      FUN_004b0960((undefined4 *)((int)this + 0x55c),uVar9,param_1);
      uVar9 = extraout_EDX_14;
      if (*(void **)((int)this + 0x58c) != (void *)0x0) {
        thunk_FUN_0049d9a0(*(void **)((int)this + 0x58c));
        uVar9 = extraout_EDX_15;
      }
      FUN_0042dbb0((int)this + 0x568,uVar9,param_1);
      if ((*(int *)((int)this + 0x2c) == 0) || (*(int *)((int)this + 0x60) < 1)) {
        bVar2 = FUN_004f6830(this,unused_reg_1_04,param_1);
        return bVar2;
      }
      uVar4 = FUN_0049d8f0(*(int *)((int)this + 0x2c));
      iVar3 = *(int *)((int)*(void **)((int)this + 0x2c) + 0xc);
      iVar6 = FUN_0049cb20(*(void **)((int)this + 0x2c),&iStack_4,&iStack_8,2,0xffffffff);
      iVar5 = FUN_0049cb20(*(void **)((int)this + 0x2c),&iStack_4,&iStack_8,4,0xffffffff);
      if (iVar3 < (int)(uVar4 - 1)) {
        bVar2 = FUN_004f6830(this,unused_reg_1_05,param_1);
      }
      else {
        bVar2 = false;
      }
      if (1 < *(int *)((int)this + 0x60)) {
        iVar3 = FUN_0049cb20(*(void **)((int)this + 0x2c),&iStack_4,&iStack_8,2,0xffffffff);
        iVar8 = FUN_0049cb20(*(void **)((int)this + 0x2c),&iStack_4,&iStack_8,4,0xffffffff);
        if ((iVar6 == 0 && iVar5 == 0) || (iVar3 != 0 || iVar8 != 0)) {
          pvVar7 = *(void **)((int)this + 0x2c);
          if (*(int *)((int)pvVar7 + 0xc) == uVar4 - 1) {
            uVar10 = ((int)(uVar4 - 2) < 1) - 1 & uVar4 - 2;
            *(uint *)((int)pvVar7 + 0xc) = uVar10 - 1;
            FUN_0049d9a0(pvVar7);
            *(uint *)((int)this + 0x20) = uVar4 - uVar10;
            if (iVar3 == 0 && iVar8 == 0) {
              *(undefined4 *)((int)this + 0x56c) = 0;
            }
          }
        }
        else {
          uVar10 = 0;
          if (0 < (int)uVar4) {
            while ((iVar3 = FUN_0049cb20(*(void **)((int)this + 0x2c),&iStack_4,&iStack_8,2,uVar10),
                   iVar3 == 0 &&
                   (iVar3 = FUN_0049cb20(*(void **)((int)this + 0x2c),&iStack_4,&iStack_8,4,uVar10),
                   iVar3 == 0))) {
              uVar10 = uVar10 + 1;
              if ((int)uVar4 <= (int)uVar10) {
                return bVar2;
              }
            }
            pvVar7 = *(void **)((int)this + 0x2c);
            *(uint *)((int)pvVar7 + 0xc) = uVar10 - 1;
            FUN_0049d9a0(pvVar7);
            *(uint *)((int)this + 0x20) = uVar4 - uVar10;
            return bVar2;
          }
        }
      }
      return bVar2;
    }
    if ((*(byte *)((int)this + 0x588) & 2) != 0) {
      *(uint *)((int)this + 0x588) = *(uint *)((int)this + 0x588) & 0xfffffffc;
      FUN_0041dc40((int)this);
      uVar9 = extraout_EDX_09;
    }
    if ((*(byte *)((int)this + 0x30) & 0x10) != 0) {
      iVar3 = *(int *)((int)this + 0x1c);
      iVar6 = *(int *)((int)this + 0x28);
      iVar5 = FUN_00419f30(this,uVar9,param_1);
      uVar4 = FUN_00482ac0(&DAT_005aa12c,iVar6,0);
      if (uVar4 == 0) {
        return true;
      }
      if (iVar5 == 1) {
        if (((iVar3 != *(int *)((int)this + 0x1c)) && (iVar6 = FUN_004c1c50((int)this), iVar6 == 1))
           && (pvVar7 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0),
              pvVar7 != (void *)0x0)) {
          FUN_00419af0(pvVar7,param_1,iVar3);
        }
        return true;
      }
      if (((iVar3 != *(int *)((int)this + 0x1c)) && (iVar6 = FUN_004c1c50((int)this), iVar6 == 1))
         && (pvVar7 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0),
            pvVar7 != (void *)0x0)) {
        FUN_00419af0(pvVar7,param_1,iVar3);
      }
    }
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
      FUN_00401100(this);
      uVar9 = extraout_EDX_10;
    }
    else {
      uVar4 = FUN_0047d680(2);
      FUN_004b02c0((void *)((int)this + 0x55c),uVar4);
      FUN_00411b50(this,2);
      FUN_0041ebb0(this,2);
      uVar9 = extraout_EDX_11;
    }
    FUN_004b0960((undefined4 *)((int)this + 0x55c),uVar9,param_1);
    pvVar7 = *(void **)((int)this + 0x58c);
    uVar9 = extraout_EDX_12;
  }
  else {
    DAT_005aeef4 = 1;
    iVar3 = *(int *)((int)this + 100) + -1;
    *(int *)((int)this + 100) = iVar3;
    FUN_004b0960((undefined4 *)((int)this + 0x55c),iVar3,param_1);
    pvVar7 = *(void **)((int)this + 0x58c);
    uVar9 = extraout_EDX_06;
  }
  if (pvVar7 != (void *)0x0) {
    thunk_FUN_0049d9a0(pvVar7);
    uVar9 = extraout_EDX_13;
  }
  FUN_0042dbb0((int)this + 0x568,uVar9,param_1);
  bVar2 = FUN_004f6830(this,unused_reg_1_03,param_1);
  return bVar2;
}


