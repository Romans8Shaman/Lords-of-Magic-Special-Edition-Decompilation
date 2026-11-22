
void __thiscall FUN_00402740(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_4;
  
  local_4 = DAT_0055514c;
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if ((((this_00 == (void *)0x0) || (iVar1 = FUN_00407d50((int)this_00), iVar1 != 0)) ||
      (*(int *)((int)this_00 + 0x48) == param_1[0x12])) ||
     ((iVar1 = FUN_005071c0(this_00,param_1[0x12]), iVar1 == 0 ||
      ((iVar1 = FUN_00420620((int)this_00), iVar1 != 0 && (iVar1 = FUN_00458170(), iVar1 != 0))))))
  {
    FUN_004010d0(this,(int)param_1);
  }
  else {
    iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
    uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
    if (uVar2 != 8) {
      if (iVar1 < 2) {
        iVar1 = FUN_004019f0(param_1,(int)this_00,uVar2);
        if (iVar1 == 0) {
          return;
        }
        FUN_0041efa0(param_1,3);
        FUN_00407900((int)param_1);
        return;
      }
      iVar3 = FUN_00407fd0(this,param_1,(int)this_00,iVar1,uVar2,1,*(int *)((int)this_00 + 0x1c));
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_004205e0((int)param_1);
      if (iVar3 != 0) {
        if (param_1[0x11] != uVar2) {
          FUN_004193e0(param_1,uVar2);
          return;
        }
        iVar3 = FUN_00420600((int)param_1);
        local_4 = DAT_0055514c;
        if (DAT_0055514c <= iVar3) {
          local_4 = iVar3;
        }
        if (iVar1 <= iVar3) {
          if (iVar1 < 2) {
            FUN_0041efa0(param_1,3);
            return;
          }
          FUN_0041efa0(param_1,4);
          return;
        }
      }
      iVar1 = FUN_00401760(param_1,*(int *)((int)this + 8),local_4);
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 0x28);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0x28);
      return;
    }
  }
  FUN_00401730(param_1);
  return;
}


