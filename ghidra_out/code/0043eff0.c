
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0043eff0(void *this,void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  void *pvVar9;
  undefined *puVar10;
  int local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549916;
  local_c = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_c;
  if (((param_5 != 0) && (ExceptionList = &local_c, *(int *)((int)this + 0x58) == 0xd)) &&
     (ExceptionList = &local_c, param_1 == (void *)0xe)) {
    ExceptionList = &local_c;
    iVar3 = FUN_0043de80(this,9);
    if (iVar3 == -1) {
      ExceptionList = local_c;
      return 0;
    }
    FUN_00482ac0(&DAT_005aa12c,iVar3,2);
  }
  if ((-1 < param_3) &&
     (iVar3 = FUN_0043e820(this,&local_18,(int)param_1,param_2,param_3), iVar3 == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  if (param_4 < 0) {
    param_4 = (int)*(short *)((int)this + 0x56);
  }
  if (((*(int *)((int)this + 0x58) == 0xd) && (param_1 == (void *)0xe)) &&
     (iVar3 = FUN_0043de80(this,9), iVar3 == -1)) {
    ExceptionList = local_c;
    return 0;
  }
  if (*(void **)((int)this + 0x58) == param_1) {
    iVar3 = *(int *)((int)this + 0x28);
  }
  else {
    iVar3 = FUN_0043de80(this,(int)param_1);
  }
  sVar2 = (short)param_4;
  if (-1 < iVar3) {
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
    piVar4[0x17] = param_2;
    if ((-1 < param_4) && (*(short *)((int)piVar4 + 0x56) != param_4)) {
      *(short *)((int)piVar4 + 0x56) = sVar2;
    }
    if (param_2 == 0) {
      piVar4[0x11] = 0;
      piVar4[0x21] = -1;
      piVar4[0x22] = 0;
    }
    (/*IC:0043f10f*/**(code **)(*piVar4 + 0x2c))(piVar4);
    pvVar9 = DAT_005a7b78;
    if ((char)DAT_005aa180 != '\0') {
      iVar3 = piVar4[10];
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar9);
        *(undefined4 *)((int)pvVar9 + 0x90) = 0;
        *(undefined4 *)((int)pvVar9 + 0xa4) = 0;
      }
      else {
        iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
        iVar1 = *(int *)((int)pvVar9 + 0x50);
        *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
        *(int *)(iVar1 + 4 + iVar5 * 8) = iVar3;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005aa180,DAT_005aa184);
    }
    goto LAB_0043f2f5;
  }
  if (*(int *)((int)this + 0x58) == 0xd) {
    iVar3 = FUN_0043dde0(this,(int)param_1);
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
    if (piVar4 == (int *)0x0) {
      if (param_1 == (void *)0xf) {
LAB_0043f1fb:
        if (piVar4 == (int *)0x0) goto LAB_0043f25d;
      }
      else {
        iVar3 = FUN_0043dde0(this,9);
        piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
        if (piVar4 == (int *)0x0) {
          iVar3 = FUN_0043dde0(this,10);
          piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
          if (piVar4 == (int *)0x0) {
            iVar3 = FUN_0043dde0(this,0xc);
            piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
            goto LAB_0043f1fb;
          }
        }
      }
    }
    if ((piVar4[0x16] == 9) && (param_1 != (void *)0x9)) {
      iVar3 = FUN_0043dd80((int)piVar4);
      uVar6 = FUN_00482ac0(&DAT_005aa12c,iVar3,2);
      if (uVar6 != 0) {
        FUN_0043dd50(uVar6);
      }
    }
    piVar4[0x17] = param_2;
    if (param_2 == 0) {
      piVar4[0x11] = 0;
      piVar4[0x21] = -1;
      piVar4[0x22] = 0;
    }
    piVar4[0x16] = (int)param_1;
    *(short *)((int)piVar4 + 0x56) = sVar2;
    (/*IC:0043f255*/**(code **)(*piVar4 + 0x2c))(piVar4);
  }
  else {
LAB_0043f25d:
    piVar4 = (int *)FUN_0043e680(this,local_14,param_1);
    iVar3 = *piVar4;
    piVar8 = (int *)0x0;
    iVar1 = piVar4[1];
    pvVar9 = (void *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (pvVar9 != (void *)0x0) {
      uVar7 = *(undefined4 *)((int)this + 0x28);
      piVar8 = FUN_0043b990(pvVar9,*(undefined4 *)((int)this + 0x4c),*(short *)((int)this + 0x54),
                            sVar2,(int)param_1,param_2,uVar7,uVar7,uVar7);
    }
    uStack_4 = 0xffffffff;
    iVar3 = FUN_004a51c0(&DAT_005ae958,iVar3,iVar1);
    iVar3 = FUN_004a7d50(&DAT_005ae958,piVar8,iVar3);
    (/*IC:0043f2df*/**(code **)(*piVar8 + 0x2c))(piVar8);
    piVar4 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
  }
LAB_0043f2f5:
  if (piVar4 == (int *)0x0) {
    OutputDebugStringA(s_Building__SetBuildingLevel_b__NU_00556614);
    uVar7 = 0;
  }
  else {
    if (param_1 == (void *)0x9) {
      _DAT_00579118 = piVar4;
      iVar3 = FUN_0043dd80((int)piVar4);
      piVar8 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,2);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)FUN_0043e680(piVar4,local_14,0xe);
        iVar3 = *piVar8;
        iVar1 = piVar8[1];
        pvVar9 = (void *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        uStack_4 = 1;
        if (pvVar9 == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          iVar5 = piVar4[10];
          piVar4 = FUN_0043b990(pvVar9,*(undefined4 *)((int)this + 0x4c),
                                *(short *)((int)this + 0x54),sVar2,0xe,param_2,iVar5,iVar5,iVar5);
        }
        uStack_4 = 0xffffffff;
        iVar3 = FUN_004a51c0(&DAT_005ae958,iVar3,iVar1);
        FUN_004a7d50(&DAT_005ae958,piVar4,iVar3);
        (/*IC:0043f3bd*/**(code **)(*piVar4 + 0x2c))(piVar4);
      }
      else {
        piVar8[0x16] = 0xe;
        piVar8[0x17] = *(int *)((int)this + 0x5c);
        if (*(int *)((int)this + 0x5c) == 0) {
          piVar8[0x11] = 0;
          piVar8[0x21] = -1;
          piVar8[0x22] = 0;
        }
        *(short *)((int)piVar8 + 0x56) = sVar2;
        (/*IC:0043f3f6*/**(code **)(*piVar8 + 0x2c))(piVar8);
      }
    }
    if (-1 < param_3) {
      if ((param_3 < 0) || (0xf < param_3)) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = &DAT_005af194 + param_3 * 0x1d84;
      }
      iVar3 = FUN_0043e7b0((int)this);
      if (iVar3 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      *(int *)(iVar3 + 0xe0) = *(int *)(iVar3 + 0xe0) - (*(int *)(local_18 + 0xc) >> 8);
      *(int *)(puVar10 + 0xcfc) = *(int *)(puVar10 + 0xcfc) - *(int *)(local_18 + 0x10);
      *(uint *)(puVar10 + 0x15d8) = *(uint *)(puVar10 + 0x15d8) | 0x40;
      *(int *)(puVar10 + 0xd04) = *(int *)(puVar10 + 0xd04) - *(int *)(local_18 + 0x14);
      *(uint *)(puVar10 + 0x15d8) = *(uint *)(puVar10 + 0x15d8) | 0x40;
      *(int *)(puVar10 + 0xd08) = *(int *)(puVar10 + 0xd08) - *(int *)(local_18 + 0x18);
      *(uint *)(puVar10 + 0x15d8) = *(uint *)(puVar10 + 0x15d8) | 0x40;
    }
    FUN_004869d0(&DAT_005aa12c,param_3);
    uVar7 = 1;
  }
  ExceptionList = local_c;
  return uVar7;
}


