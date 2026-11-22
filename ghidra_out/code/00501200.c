
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00501200(void *this,undefined4 param_1,int param_2,int param_3)

{
  void *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 local_8;
  int local_4;
  
  if (0x17f < param_3) {
    FUN_00472740((void *)((int)this + 0x2531c),0x2b);
    _DAT_00573410 = 0xfffffc19;
    return;
  }
  local_4 = -1;
  local_8 = 0xffffffff;
  iVar2 = FUN_004a6e60((void *)((int)this + 0x29e70),param_2,param_3);
  this_00 = (void *)((int)this + 0x25644);
  uVar3 = FUN_00482ac0(this_00,iVar2,7);
  if (uVar3 != 0) {
    local_8 = *(undefined4 *)(uVar3 + 0x48);
    iVar2 = *(int *)(uVar3 + 0x44);
  }
  if (*(int *)((int)this + 0x1b8) == 10) {
    FUN_0052d240(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
    FUN_0052c0c0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_2,
                 param_3,1,0,0);
    *(undefined4 *)((int)this + 0x1b8) = 0;
    return;
  }
  _DAT_00573410 = iVar2;
  switch(*(undefined4 *)((int)this + 0x1b8)) {
  case 2:
  case 4:
    local_4 = FUN_004a6180((void *)((int)this + 0x29e70),param_2,param_3);
    goto LAB_00501388;
  case 3:
LAB_00501388:
    FUN_00502eb0(this,0x200,local_4,iVar2,local_8);
    return;
  case 5:
    FUN_00482ac0(this_00,iVar2,0);
    if (iVar2 == -1) {
      uVar3 = 2;
    }
    else {
LAB_005013b4:
      uVar3 = 1;
    }
    break;
  default:
    goto switchD_005012ea_caseD_6;
  case 7:
  case 0x16:
    if (iVar2 < 0) {
      uVar3 = 3;
    }
    else {
      uVar3 = FUN_00482ac0(this_00,iVar2,0);
      if (uVar3 == 0) {
        uVar3 = 3;
      }
      else if (*(int *)(uVar3 + 0x48) ==
               *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this)) {
        uVar3 = 5;
      }
      else {
        uVar3 = 6;
      }
    }
    break;
  case 0xb:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x1a:
    uVar3 = 0;
    if (-1 < iVar2) {
      uVar3 = FUN_00482ac0(this_00,iVar2,0);
      if (uVar3 == 0) {
        uVar3 = 2;
      }
      else {
        if (*(int *)(uVar3 + 0x48) !=
            *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this))
        goto LAB_005013b4;
        uVar3 = 2;
      }
    }
    break;
  case 0x1b:
    if (iVar2 == -1) {
      uVar3 = 0x2e;
    }
    else {
      uVar3 = 0x2b;
    }
    break;
  case 0x1c:
    uVar4 = FUN_00502e40((int)this);
    if (iVar2 != -1) goto LAB_00501489;
    iVar2 = FUN_0052e830((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),
                         param_2,param_3,0);
joined_r0x00501465:
    if (iVar2 != 0) {
      uVar3 = FUN_00472df0(uVar4,1);
      FUN_00472740((void *)((int)this + 0x2531c),uVar3);
      return;
    }
LAB_00501489:
    uVar3 = FUN_00472df0(uVar4,2);
    FUN_00472740((void *)((int)this + 0x2531c),uVar3);
    return;
  case 0x1d:
    iVar1 = *(int *)((int)this + 0x232a4);
    if ((iVar1 < 0) || (0xf < iVar1)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_005af194 + iVar1 * 0x1d84;
    }
    if (puVar5 != (undefined *)0x0) {
      uVar4 = *(undefined4 *)(puVar5 + 0x15b0);
      if (iVar2 == -1) goto LAB_00501489;
      iVar2 = FUN_0052e8f0((void *)(iVar1 * 0x400 + 0x232a8 + (int)this),param_2,param_3,0);
      goto joined_r0x00501465;
    }
    uVar3 = 0x2c;
  }
  FUN_00472740((void *)((int)this + 0x2531c),uVar3);
switchD_005012ea_caseD_6:
  return;
}


