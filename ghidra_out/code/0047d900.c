
undefined4 __thiscall FUN_0047d900(void *this,uint param_1)

{
  undefined4 *this_00;
  void *this_01;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  void *this_02;
  uint uVar4;
  int iVar5;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
  this_01 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x44),0);
  if (this_01 == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_00420620((int)this_01);
  if (iVar1 != 0) {
    FUN_004f5b30(this,*(uint *)((int)this_01 + 0x544));
  }
  iVar1 = *(int *)((int)this + 0x4c);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x78) < *(int *)((int)this + 0x7c)) {
    iVar2 = FUN_004209e0(this_01,*(int *)((int)this_01 + 0x1c));
    if ((*(byte *)((int)this + 0x30) & 0x20) != 0) {
      if (*(int *)((int)this + 0x5c) != 0) {
        iVar2 = (iVar2 * 100) / *(int *)((int)this + 0x5c);
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
    }
    uVar4 = (uint)((*(int *)((int)this + 0x28) + DAT_005af134) % (iVar2 + 1) == 0);
    *(uint *)((int)this + 0x78) = *(int *)((int)this + 0x78) + uVar4;
    if (((*(uint *)(iVar1 + 0x14) & 0x100000) != 0) || (uVar4 != 0)) {
      if (*(void **)((int)this + 0x2c) != (void *)0x0) {
        FUN_0049d9a0(*(void **)((int)this + 0x2c));
        uVar4 = extraout_EDX;
      }
      FUN_004b0960((undefined4 *)((int)this + 0x88),uVar4,param_1);
      uVar6 = extraout_EDX_00;
      if (*(void **)((int)this + 0xb8) != (void *)0x0) {
        thunk_FUN_0049d9a0(*(void **)((int)this + 0xb8));
        uVar6 = extraout_EDX_01;
      }
      FUN_0042dbb0((int)this + 0x94,uVar6,param_1);
    }
    if (*(int *)((int)this + 0x78) != *(int *)((int)this + 0x7c)) {
      (/*IC:0047da34*/**(code **)(*(int *)this + 0x1c))();
      return 1;
    }
  }
  uVar4 = *(uint *)((int)this + 0x30);
  if ((uVar4 & 2) == 0) {
    iVar1 = *(int *)((int)this_01 + 0x1c) % DAT_005ae9c4 + *(int *)((int)this + 100);
    iVar2 = *(int *)((int)this_01 + 0x1c) / DAT_005ae9c4 + *(int *)((int)this + 0x68);
  }
  else {
    if ((uVar4 & 8) == 0) {
      if ((uVar4 & 4) == 0) {
        uVar7 = *(int *)((int)this + 0x74) - 4;
      }
      else if ((DAT_00583560 & 0x400) == 0) {
        uVar7 = *(int *)((int)this + 0x74) + 3;
      }
      else {
        uVar7 = *(int *)((int)this + 0x74) - 3;
      }
      uVar7 = uVar7 & 7;
    }
    else {
      uVar7 = DAT_005aa7d0;
      if (*(int *)((int)this_01 + 0x48) != DAT_005aa7d4) {
        uVar7 = DAT_005aa7d0 - 4 & 7;
      }
      *(uint *)((int)this + 0x30) = uVar4 & 0xfffffff7;
    }
    iVar1 = *(int *)((int)this + 0x1c);
    puVar3 = FUN_004c6fc0();
    iVar2 = *(int *)((int)this + 0x1c);
    iVar1 = iVar1 % *(int *)(puVar3 + 0x6c) + *(int *)(&DAT_0055b0d0 + uVar7 * 4) * 2;
    puVar3 = FUN_004c6fc0();
    iVar2 = iVar2 / *(int *)(puVar3 + 0x6c) + *(int *)(&DAT_0055b0f0 + uVar7 * 4) * 2;
    if (((iVar1 < 0) || (puVar3 = FUN_004c6fc0(), *(int *)(puVar3 + 0x6c) <= iVar1)) ||
       ((iVar2 < 0 || (puVar3 = FUN_004c6fc0(), *(int *)(puVar3 + 0x70) <= iVar2))))
    goto LAB_0047dd44;
  }
  iVar1 = FUN_004a51c0(&DAT_005ae958,iVar1,iVar2);
  if (iVar1 == *(int *)((int)this + 0x1c)) {
    uVar6 = extraout_EDX_02;
    if ((*(uint *)((int)this + 0x30) & 0x20) != 0) {
      if (((*(uint *)((int)this + 0x30) & 0x100) == 0) ||
         (*(int *)((int)this + 0x74) == *(int *)((int)this_01 + 0x44))) {
        this_02 = (void *)FUN_004efe80(&DAT_005aee6c,*(int *)((int)this + 0x58));
        if (this_02 != (void *)0x0) {
          FUN_004f1710(this_02,this,*(undefined4 *)((int)this_01 + 0x28));
        }
LAB_0047dd44:
        FUN_00483be0(&DAT_005aa12c,this);
        return 1;
      }
      FUN_0047d8a0(this,(char)*(int *)((int)this_01 + 0x44));
      uVar6 = extraout_EDX_03;
    }
    if (*(void **)((int)this + 0x2c) != (void *)0x0) {
      FUN_0049d9a0(*(void **)((int)this + 0x2c));
      uVar6 = extraout_EDX_04;
    }
    this_00 = (undefined4 *)((int)this + 0x88);
    FUN_004b0960(this_00,uVar6,param_1);
    uVar6 = extraout_EDX_05;
    if (*(void **)((int)this + 0xb8) != (void *)0x0) {
      thunk_FUN_0049d9a0(*(void **)((int)this + 0xb8));
      uVar6 = extraout_EDX_06;
    }
    FUN_0042dbb0((int)this + 0x94,uVar6,param_1);
    if (*(int *)((int)this + 0x7c) == 0) {
      if (*(int *)((int)this + 0x2c) == 0) {
        return 0;
      }
      if (*(int *)(*(int *)((int)this + 0x2c) + 4) == 2) {
        return 0;
      }
      iVar1 = FUN_00420620((int)this_01);
      if (iVar1 != 0) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x1c);
    FUN_004f5b30(this,2);
    uVar4 = FUN_0047d680(2);
    FUN_004b02c0(this_00,uVar4);
    FUN_0047d630(this,2);
    FUN_004f5b70(this,*(int *)((int)this_01 + 0x44));
    iVar1 = *(int *)((int)this_01 + 0x44);
    *(int *)((int)this + 0x74) = iVar1;
    FUN_004b0310(this_00,iVar1);
    if (*(void **)((int)this + 0xb8) != (void *)0x0) {
      FUN_0049dcc0(*(void **)((int)this + 0xb8),*(int *)((int)this + 0x74));
    }
    if (*(void **)((int)this + 0xc0) != (void *)0x0) {
      FUN_0049dcc0(*(void **)((int)this + 0xc0),*(int *)((int)this + 0x74));
    }
    *(undefined4 *)((int)this + 0x7c) = 0;
    (/*IC:0047dc7b*/**(code **)(*(int *)this + 0x1c))();
    return 1;
  }
  uVar4 = 0;
  iStack_60 = 9999;
  iStack_5c = -1;
  param_1 = 0;
  do {
    iVar2 = *(int *)(DAT_005ae970 + (uVar4 + *(int *)((int)this + 0x1c) * 8) * 4);
    if (iVar2 == iVar1) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004a8960(&DAT_005ae958,iVar2,iVar1);
    }
    if (iVar5 < iStack_60) {
      param_1 = uVar4;
      iStack_60 = iVar5;
      iStack_5c = iVar2;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 8);
  if ((*(byte *)((int)this + 0x30) & 2) != 0) {
    iVar1 = FUN_00420910(this_01,*(int *)((int)this + 0x1c),param_1);
    if (iVar1 == 0) {
      *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 4;
      *(uint *)((int)this + 0x74) = param_1;
      FUN_004f5b30(this,2);
      uVar4 = FUN_0047d680(2);
      FUN_004b02c0((void *)((int)this + 0x88),uVar4);
      FUN_0047d630(this,2);
      iVar1 = *(int *)((int)this + 0x84) + 1;
      *(int *)((int)this + 0x84) = iVar1;
      if (iVar1 < 0xb) {
        return 1;
      }
      goto LAB_0047dd44;
    }
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffffb;
  }
  *(int *)((int)this + 0x80) = iStack_5c;
  *(uint *)((int)this + 0x74) = param_1;
  DAT_005aeef4 = 1;
  FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),*(int *)((int)this + 0x80));
  *(undefined4 *)((int)this + 0x78) = 0;
  iVar5 = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
  iVar1 = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
  iVar2 = *(int *)((int)this + 0x74) * 4;
  FUN_004a6600(&DAT_005ae958,&fStack_58,*(int *)(&DAT_0055b0d0 + iVar2) + iVar5,
               *(int *)(&DAT_0055b0f0 + iVar2) + iVar1);
  FUN_004a6600(&DAT_005ae958,&fStack_2c,iVar5,iVar1);
  FUN_004f5b30(this,0);
  uVar4 = FUN_0047d680(0);
  FUN_004b02c0((void *)((int)this + 0x88),uVar4);
  FUN_0047d630(this,0);
  FUN_004f5b70(this,*(int *)((int)this + 0x74));
  FUN_004b0310((void *)((int)this + 0x88),*(int *)((int)this + 0x74));
  if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xb8),*(int *)((int)this + 0x74));
  }
  if (*(void **)((int)this + 0xc0) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xc0),*(int *)((int)this + 0x74));
  }
  iVar1 = FUN_004209c0((int)this_01);
  lVar8 = __ftol((float10)iVar1 *
                 (float10)SQRT((fStack_50 - fStack_24) * (fStack_50 - fStack_24) +
                               (fStack_54 - fStack_28) * (fStack_54 - fStack_28) +
                               (fStack_58 - fStack_2c) * (fStack_58 - fStack_2c)));
  *(int *)((int)this + 0x7c) = (int)lVar8;
  if ((int)lVar8 < 1) {
    *(undefined4 *)((int)this + 0x7c) = 1;
  }
  (/*IC:0047deac*/**(code **)(*(int *)this + 0x1c))();
  return 1;
}


