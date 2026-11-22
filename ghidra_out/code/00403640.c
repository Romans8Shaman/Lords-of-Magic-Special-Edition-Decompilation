
void __thiscall FUN_00403640(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_00407d50((int)this_00);
    if ((iVar1 == 0) && (*(int *)((int)this_00 + 0x48) != param_1[0x12])) {
      iVar1 = FUN_005071c0(this_00,param_1[0x12]);
      if (iVar1 != 0) goto LAB_00403698;
    }
    FUN_004010d0(this,(int)param_1);
    FUN_00401730(param_1);
    return;
  }
LAB_00403698:
  iVar1 = FUN_004a8960(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
  uVar2 = FUN_004a8b50(&DAT_005ae958,param_1[7],*(int *)((int)this_00 + 0x1c));
  if (uVar2 == 8) {
    OutputDebugStringA(s_two_armies_in_same_location___005556f0);
    uVar2 = *(int *)((int)this_00 + 0x44) - 4U & 7;
  }
  if ((*(char *)((int)this + 0x11) == '\0') && (iVar1 == 4)) {
    iVar3 = FUN_005071c0(param_1,*(int *)((int)this_00 + 0x48));
    if (iVar3 != 0) {
      *(undefined1 *)((int)this + 0x11) = 1;
    }
  }
  if (1 < iVar1) {
    FUN_00407fd0(this,param_1,(int)this_00,iVar1,uVar2,1,*(int *)((int)this_00 + 0x1c));
    return;
  }
  if (param_1[0x11] != uVar2) {
    FUN_004193e0(param_1,uVar2);
    return;
  }
  param_1[0x173] = 0;
  param_1[0xc] = param_1[0xc] & 0xdfffffff;
  if (*(char *)((int)this + 0x11) == '\0') {
    iVar1 = FUN_00403390(param_1,(int)this_00);
    if (iVar1 != 0) {
      FUN_0041efa0(param_1,5);
      return;
    }
  }
  FUN_00404f90((int)param_1,(int)this_00);
  return;
}


