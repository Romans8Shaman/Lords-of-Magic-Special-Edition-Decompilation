
void __fastcall FUN_00506e30(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_005ae98c;
  iVar1 = *(int *)(param_1 + 0x15a8);
  for (iVar5 = DAT_005ae998; iVar5 <= iVar2; iVar5 = iVar5 + 1) {
    this = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
    if ((((this != (void *)0x0) && (*(int *)((int)this + 4) == 0)) &&
        (*(int *)((int)this + 0x48) == iVar1)) && (uVar3 = FUN_00506100((int)this), uVar3 != 0)) {
      *(undefined4 *)((int)this + 0x5cc) = 0xffff;
      FUN_00506fb0(this,0);
      iVar4 = FUN_004c1c50((int)this);
      if ((iVar4 != 0) &&
         (uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0), uVar3 != 0)) {
        *(undefined4 *)(uVar3 + 0x5cc) = *(undefined4 *)((int)this + 0x5cc);
      }
    }
  }
  return;
}


