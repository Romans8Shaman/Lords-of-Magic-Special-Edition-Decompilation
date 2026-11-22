
undefined4 __thiscall FUN_004f68b0(void *this,uint param_1,uint param_2,int param_3,void *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0x2c) == 0) || (param_3 == 0)) {
    *(undefined4 *)((int)this + 0x14) = 1000;
    *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) & 0xf1;
    return 0;
  }
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 0x1c);
    puVar2 = FUN_004c6fc0();
    iVar3 = (int)*(short *)(*(int *)(puVar2 + 0x54) + 2 + iVar3 * 8);
    puVar2 = FUN_004c6fc0();
    if (*(int *)(puVar2 + 0x4c) < iVar3) {
      *(undefined4 *)((int)this + 0x14) = 1000;
      return 0;
    }
    iVar3 = (iVar3 < 1) + 1;
  }
  if (iVar3 == 1) {
    param_3._0_1_ = 8;
    if ((*(byte *)((int)this + 0x34) & 4) != 0) {
      *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
    }
  }
  else if (iVar3 == 2) {
    if ((*(byte *)((int)this + 0x34) & 8) != 0) {
      *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
    }
    param_3._0_1_ = 4;
  }
  else {
    param_3._0_1_ = 0;
  }
  uVar1 = DAT_00583734;
  if ((((DAT_005a7ad8 == 2) && ((*(byte *)((int)this + 0x34) & 2) == 0)) &&
      (*(uint *)((int)this + 0x14) == param_1)) && (*(uint *)((int)this + 0x18) == param_2)) {
    DAT_00583734 = &DAT_005a7a5c;
    if (param_4 == (void *)0x0) {
      FUN_0049cd80(*(void **)((int)this + 0x2c),param_1,param_2,*(int *)((int)this + 0x38),1,iVar3);
    }
    else {
      FUN_0049dae0(param_4,*(int *)((int)this + 0x2c));
      FUN_0049e070(*(void **)((int)this + 0x2c),param_4,param_1,param_2,*(int *)((int)this + 0x38),1
                   ,0);
    }
  }
  else {
    DAT_00583734 = (undefined *)0x0;
    if (param_4 == (void *)0x0) {
      FUN_0049cd80(*(void **)((int)this + 0x2c),param_1,param_2,*(int *)((int)this + 0x38),1,iVar3);
    }
    else {
      FUN_0049dae0(param_4,*(int *)((int)this + 0x2c));
      FUN_0049e070(*(void **)((int)this + 0x2c),param_4,param_1,param_2,*(int *)((int)this + 0x38),1
                   ,0);
    }
  }
  DAT_00583734 = (undefined *)uVar1;
  *(uint *)((int)this + 0x14) = param_1;
  *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) & 0xfd | (byte)param_3;
  *(uint *)((int)this + 0x18) = param_2;
  return 1;
}


