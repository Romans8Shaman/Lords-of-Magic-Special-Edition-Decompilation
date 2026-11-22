
void __thiscall FUN_004045a0(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = param_1;
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    param_1 = (void *)0x1;
  }
  else {
    param_1 = (void *)FUN_00420600((int)param_1);
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (uVar2 != 0) {
    iVar1 = FUN_00407d50(uVar2);
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(uVar2 + 0x48) == *(int *)((int)this_00 + 0x48)) {
      return;
    }
    iVar1 = FUN_00506110(this_00,uVar2);
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)(uVar2 + 0x1c));
  iVar3 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)(uVar2 + 0x1c));
  if ((iVar3 != 8) && (iVar1 <= (int)param_1)) {
    iVar4 = FUN_004205e0((int)this_00);
    if (iVar4 == 0) {
      iVar1 = FUN_004019f0(this_00,uVar2,iVar3);
      if (iVar1 == 0) {
        return;
      }
    }
    else {
      if (*(int *)((int)this_00 + 0x44) != iVar3) {
        FUN_004193e0(this_00,iVar3);
        return;
      }
      if (1 < iVar1) {
        uVar5 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)this_00 + 0x48));
        if (uVar5 == 0) {
          FUN_0041efa0(this_00,4);
          return;
        }
        iVar1 = FUN_00408a60(this,this_00,uVar2);
        if (iVar1 == 0) {
          return;
        }
        iVar1 = FUN_004094d0(this,this_00,uVar2);
        if (iVar1 == 0) {
          FUN_0041efa0(this_00,4);
          return;
        }
        return;
      }
    }
    FUN_0041efa0(this_00,3);
  }
  return;
}


