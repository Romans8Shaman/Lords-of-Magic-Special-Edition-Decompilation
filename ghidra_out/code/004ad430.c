
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ad430(void *this)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int iStack_8;
  int iStack_4;
  
  DAT_005aeef4 = 1;
  if ((*(uint *)((int)this + 0x30) & 4) != 0) {
    if (*(int *)((int)this + 0x2c) == 0) goto LAB_004ad51b;
    uVar2 = FUN_0049d8f0(*(int *)((int)this + 0x2c));
    pvVar4 = *(void **)((int)this + 0x2c);
    if (*(int *)((int)pvVar4 + 0xc) == uVar2 - 1) goto LAB_004ad51b;
    goto LAB_004ad46c;
  }
  if ((*(uint *)((int)this + 0x30) & 2) == 0) {
    if (((*(uint *)((int)this + 0x70) & 0x10000) == 0) && (-1 < *(int *)((int)this + 0x7c))) {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x50),0);
      if ((uVar2 == 0) || (pvVar4 = *(void **)(uVar2 + 0x2c), pvVar4 == (void *)0x0))
      goto LAB_004ad51b;
      iVar5 = *(int *)((int)pvVar4 + 4);
      if (iVar5 == *(int *)((int)this + 0x7c)) {
        iVar5 = FUN_0049cb20(pvVar4,&iStack_4,&iStack_8,*(int *)((int)this + 0x80),0xffffffff);
        if (iVar5 == 0) {
          return 1;
        }
      }
      else if ((iVar5 != 2) && (iVar5 != 1)) {
        FUN_00483be0(&DAT_005aa12c,this);
        return 1;
      }
    }
    FUN_004aec10(this);
    return 1;
  }
  iVar5 = *(int *)((int)this + 0xa0) + 1;
  *(int *)((int)this + 0xa0) = iVar5;
  if ((*(int *)((int)this + 0x88) != 0) && (*(int *)((int)this + 0x88) < iVar5)) {
    FUN_00483be0(&DAT_005aa12c,this);
    return 1;
  }
  if (((*(uint *)((int)this + 0x70) & 0x100) != 0) &&
     (*(int *)((int)this + 0x1c) == *(int *)((int)this + 0x4c))) {
    FUN_00483be0(&DAT_005aa12c,this);
    return 1;
  }
  (/*IC:004ad5b6*/**(code **)(*(int *)this + 0x1c))();
  iVar5 = FUN_004f6000(&DAT_005ae974,*(int *)((int)this + 0x5c));
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)((int)this + 0x1c))) {
    if (-1 < *(int *)((int)this + 0x58)) {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x50),0);
      if (uVar2 != 0) {
        iVar1 = *(int *)((int)this + 0x54);
        if (((iVar1 < 0) || (*(int *)(uVar2 + 0x4c) <= iVar1)) ||
           (*(int *)((int)this + 0x58) != *(int *)(uVar2 + (iVar1 + 3) * 0x4c))) {
          uVar2 = 0;
        }
        if (uVar2 != 0) goto LAB_004ad64e;
      }
      puVar3 = FUN_0044c0c0(*(int *)((int)this + 0x58),&iStack_8);
      if (puVar3 != (undefined4 *)0x0) {
        OutputDebugStringA(s_Missile__Tick___reaquired_caster_0055cc34);
        *(undefined4 *)((int)this + 0x50) = puVar3[10];
        *(int *)((int)this + 0x54) = iStack_8;
      }
    }
LAB_004ad64e:
    pvVar4 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5c),0);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)FUN_004efe80(&DAT_005aee6c,*(int *)((int)this + 0x84));
      if (pvVar4 != (void *)0x0) {
        FUN_004f1650(pvVar4,this,*(undefined4 *)(iVar5 + 0x28));
      }
    }
    else {
      FUN_00401160(pvVar4,(uint)this);
    }
    if (*(int *)((int)this + 0x88) == 0) {
      FUN_00483be0(&DAT_005aa12c,this);
      return 1;
    }
    if ((*(byte *)((int)this + 0x70) & 8) != 0) {
      FUN_004adc70((int)this);
    }
  }
  if (((*(byte *)((int)this + 0x70) & 0x20) != 0) &&
     (pvVar4 = (void *)FUN_004a8330(&DAT_005ae958,*(int *)((int)this + 0x1c),0),
     pvVar4 != (void *)0x0)) {
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)pvVar4 + 0x28);
    FUN_00401160(pvVar4,(uint)this);
    if (*(int *)((int)this + 0x88) == 0) {
      FUN_00483be0(&DAT_005aa12c,this);
      return 1;
    }
    if ((*(byte *)((int)this + 0x70) & 8) != 0) {
      FUN_004adc70((int)this);
    }
  }
  uVar2 = *(uint *)((int)this + 0x70);
  if ((uVar2 & 0x100000) != 0) {
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  if (*(int *)((int)this + 0xd8) != 0) {
    if ((uVar2 & 4) == 0) {
      if (-1 < *(int *)((int)this + 0x90)) {
        _DAT_005867b0 = 0;
        _DAT_005867a8 = DAT_00586774;
        DAT_005867a4 = *(undefined4 *)((int)this + 0x90);
        _DAT_005867a0 = 0xfffffc18;
        _DAT_005867b4 = 0;
        FUN_00478c00(&DAT_00585408,*(undefined4 *)((int)this + 0x90));
      }
      if (((*(int *)((int)this + 0x2c) != 0) &&
          (pvVar4 = *(void **)(*(int *)((int)this + 0x2c) + 0x3c), pvVar4 != (void *)0x0)) &&
         (iVar5 = FUN_0049b110(pvVar4,1), iVar5 != 0)) {
        *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 4;
        FUN_0049da80(*(void **)((int)this + 0x2c),1);
        pvVar4 = *(void **)((int)this + 0x2c);
        *(undefined4 *)((int)pvVar4 + 0xc) = 0xffffffff;
        FUN_0049d9a0(pvVar4);
        if (*(void **)((int)this + 0xe8) != (void *)0x0) {
          FUN_0049da80(*(void **)((int)this + 0xe8),1);
        }
        if (*(void **)((int)this + 0xe4) == (void *)0x0) {
          return 1;
        }
        FUN_0049da80(*(void **)((int)this + 0xe4),1);
        return 1;
      }
LAB_004ad51b:
      FUN_00483be0(&DAT_005aa12c,this);
      return 1;
    }
    if ((uVar2 & 8) != 0) {
      FUN_004adc70((int)this);
    }
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  pvVar4 = *(void **)((int)this + 0x2c);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
LAB_004ad46c:
  thunk_FUN_0049d9a0(pvVar4);
  if (*(void **)((int)this + 0xe8) != (void *)0x0) {
    thunk_FUN_0049d9a0(*(void **)((int)this + 0xe8));
  }
  if (*(void **)((int)this + 0xe4) == (void *)0x0) {
    return 1;
  }
  thunk_FUN_0049d9a0(*(void **)((int)this + 0xe4));
  return 1;
}


