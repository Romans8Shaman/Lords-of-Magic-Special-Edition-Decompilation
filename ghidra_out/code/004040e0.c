
void __thiscall FUN_004040e0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = param_1;
  iVar2 = FUN_004a9a60(&DAT_005ae958,&param_1,param_1[7]);
  if ((iVar2 != 0) && (iVar2 = FUN_004a9a90(piVar1[0x12],(uint)param_1), iVar2 != 0)) {
    FUN_004010d0(this,(int)piVar1);
    piVar1[0xc] = piVar1[0xc] | 0x400;
    iVar2 = FUN_004f6000(&DAT_005ae974,piVar1[10]);
    if (iVar2 == 0) {
      return;
    }
    FUN_004a6d70(&DAT_005ae958,iVar2,piVar1[7]);
    return;
  }
  if (piVar1[7] != *(int *)((int)this + 8)) {
    uVar3 = FUN_004a8b50(&DAT_005ae958,piVar1[7],*(int *)((int)this + 8));
    iVar2 = FUN_004a8960(&DAT_005ae958,piVar1[7],*(int *)((int)this + 8));
    iVar4 = FUN_004edc30(&DAT_005ae958,*(int *)((int)this + 8),piVar1[0x15]);
    if (iVar4 != 0) {
      FUN_00407fd0(this,piVar1,0,iVar2,uVar3,0,*(int *)((int)this + 8));
      return;
    }
  }
  iVar2 = FUN_004073f0(&DAT_005ae958,piVar1,*(int *)((int)this + 8));
  if (iVar2 == -1) {
    FUN_00403a90(this,piVar1);
    return;
  }
  *(int *)((int)this + 8) = iVar2;
  return;
}


