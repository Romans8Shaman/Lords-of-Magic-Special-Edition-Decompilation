
void __thiscall FUN_004046f0(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  piVar1 = param_1;
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0);
  if (((uVar2 == 0) || (iVar3 = FUN_00407d50(uVar2), iVar3 != 0)) ||
     (iVar3 = FUN_00506110(param_1,uVar2), iVar3 == 0)) {
    FUN_00403c30(this,param_1);
    return;
  }
  iVar3 = FUN_004205e0(uVar2);
  if (iVar3 == 0) {
    param_1 = (int *)0x1;
    piVar6 = DAT_00555148;
  }
  else {
    param_1 = (int *)FUN_00420600(uVar2);
    piVar6 = param_1;
  }
  iVar3 = FUN_004a8960(&DAT_005ae958,piVar1[7],*(int *)(uVar2 + 0x1c));
  if (iVar3 < (int)piVar6) {
    if (*(int *)(uVar2 + 0x74) != piVar1[10]) goto LAB_004047e6;
    FUN_00404520(this,piVar1);
  }
  if (*(int *)(uVar2 + 0x74) == piVar1[10]) {
    FUN_00404520(this,piVar1);
    return;
  }
  uVar4 = FUN_004a8b50(&DAT_005ae958,piVar1[7],*(int *)(uVar2 + 0x1c));
  iVar3 = FUN_004a8960(&DAT_005ae958,piVar1[7],*(int *)(uVar2 + 0x1c));
  iVar5 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),piVar1[0x15]);
  if ((iVar5 != 0) || (1 < iVar3)) {
    FUN_00407fd0(this,piVar1,uVar2,iVar3,uVar4,param_1,*(int *)(uVar2 + 0x1c));
    return;
  }
LAB_004047e6:
  FUN_004045a0(this,piVar1);
  return;
}


