
undefined4 __thiscall FUN_0046c700(void *this,int param_1,LONG param_2,LONG param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  void *local_4;
  
  local_4 = this;
  if (DAT_005a9e04 != (void *)0x0) {
    if (param_1 == 0x200) {
      if (((*(byte *)((int)this + 0x44) & 0x20) != 0) &&
         ((((param_2 < *(int *)((int)this + 0x3c) || (param_3 < *(int *)((int)this + 0x40))) ||
           (iVar2 = FUN_0046ba90(this), iVar2 + *(int *)((int)this + 0x3c) < param_2)) ||
          (iVar2 = FUN_0046bab0(this), iVar2 + *(int *)((int)this + 0x40) < param_3)))) {
        DAT_00583120 = 2;
        FUN_0046d210(this,(undefined4 *)((int)this + 0x28),*(int *)((int)this + 0x38));
      }
    }
    else if (param_1 == 0x202) {
      DAT_00583128 = GetTickCount();
      DAT_00583108 = param_2;
      DAT_0058310c = param_3;
      DAT_00583120 = 0;
      pvVar1 = FUN_00500dd0(&DAT_00584ae8,param_2,param_3,(int *)&local_4,(int)DAT_005a9e04 + 0x28);
      uVar4 = extraout_EDX;
      if ((pvVar1 == (void *)0x0) ||
         (iVar2 = FUN_0046d210(pvVar1,(undefined4 *)((int)DAT_005a9e04 + 0x28),(int)local_4),
         uVar4 = extraout_EDX_00, iVar2 == 0)) {
        FUN_0046c6e0(DAT_005a9e04,uVar4,param_2,param_3);
        return 1;
      }
    }
    return 1;
  }
  local_4 = (void *)FUN_0046cca0(this,param_2,param_3);
  pvVar1 = DAT_005a7b78;
  if (local_4 == (void *)0xffffffff) {
    DAT_005578ec = local_4;
    return 0;
  }
  switch(param_1) {
  case 0x200:
    if (((*(int *)((int)this + 0x10) != 0) &&
        (-1 < *(int *)((int)local_4 * 0x30 + 0x20 + *(int *)((int)this + 4)))) &&
       (DAT_005578ec != local_4)) {
      DAT_005578ec = local_4;
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(void **)(iVar2 + 4 + iVar3 * 8) = local_4;
      }
      pvVar1 = DAT_005a7b78;
      uVar4 = *(undefined4 *)((int)local_4 * 0x30 + 0x20 + *(int *)((int)this + 4));
      if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar1);
        *(undefined4 *)((int)pvVar1 + 0x90) = 0;
        *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar4;
      }
      FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x10),*(int **)((int)this + 0x14));
      return 1;
    }
    break;
  case 0x201:
    FUN_0046cd20(this,(int)local_4,param_2,param_3);
    return 1;
  case 0x203:
    if ((*(byte *)((int)local_4 * 0x30 + 0x14 + *(int *)((int)this + 4)) & 0x40) != 0) {
      DAT_00583120 = 7;
      *(void **)((int)this + 0x38) = local_4;
      FUN_0046d3c0(this,(int)local_4 * 0x30 + 0x1c + *(int *)((int)this + 4),local_4,local_4);
      return 1;
    }
    break;
  case 0x204:
    if ((*(byte *)((int)local_4 * 0x30 + 0x14 + *(int *)((int)this + 4)) & 0x80) != 0) {
      DAT_00583120 = 8;
      *(void **)((int)this + 0x38) = local_4;
      FUN_0046d3c0(this,(int)local_4 * 0x30 + 0x1c + *(int *)((int)this + 4),local_4,local_4);
      return 1;
    }
  }
  return 0;
}


