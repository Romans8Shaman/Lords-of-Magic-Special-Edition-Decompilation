
undefined4 __thiscall FUN_00403a90(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = param_1;
  iVar1 = FUN_004205e0((int)param_1);
  if (iVar1 == 0) {
    param_1 = (void *)0x1;
    pvVar2 = DAT_00555148;
  }
  else {
    param_1 = (void *)FUN_00420600((int)param_1);
    pvVar2 = param_1;
  }
  iVar1 = FUN_00401020(this_00,(int)pvVar2);
  pvVar2 = (void *)FUN_00401760(this_00,*(int *)((int)this_00 + 0x1c),iVar1);
  if (pvVar2 != (void *)0x0) {
    iVar1 = FUN_00420620((int)pvVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_00458170(), iVar1 != 0)) {
      return 0;
    }
    iVar1 = FUN_005071c0(pvVar2,*(int *)((int)this_00 + 0x48));
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)pvVar2 + 0x28);
      iVar1 = FUN_004a8960(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)((int)pvVar2 + 0x1c))
      ;
      iVar3 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)this_00 + 0x1c),*(int *)((int)pvVar2 + 0x1c))
      ;
      if ((iVar3 != 8) && (iVar1 <= (int)param_1)) {
        iVar4 = FUN_004205e0((int)this_00);
        if (iVar4 == 0) {
          iVar1 = FUN_004019f0(this_00,(int)pvVar2,iVar3);
          if (iVar1 != 0) {
            FUN_0041efa0(this_00,3);
            return 1;
          }
        }
        else {
          if (iVar1 < 2) {
            FUN_0041efa0(this_00,3);
            return 1;
          }
          if (*(int *)((int)this_00 + 0x44) != iVar3) {
            FUN_004193e0(this_00,iVar3);
            return 1;
          }
          uVar5 = FUN_0047c9e0(&DAT_005aa12c,*(int *)((int)this_00 + 0x48));
          if (uVar5 == 0) {
            FUN_0041efa0(this_00,4);
            return 1;
          }
          iVar1 = FUN_00408a60(this,this_00,(int)pvVar2);
          if ((iVar1 != 0) && (iVar1 = FUN_004094d0(this,this_00,(int)pvVar2), iVar1 == 0)) {
            FUN_0041efa0(this_00,4);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


