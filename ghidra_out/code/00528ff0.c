
void __thiscall FUN_00528ff0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(int *)((int)this + 4) - param_1;
  uVar1 = ((int)uVar1 < 1) - 1 & uVar1;
  uVar2 = FUN_005291e0((int)this);
  if (uVar2 != 0) {
    iVar5 = *(int *)(uVar2 + 0x44);
    iVar6 = iVar5 + -1;
    if (-1 < iVar6) {
      piVar4 = (int *)(uVar2 + 0x14 + iVar6 * 4);
      do {
        if (*piVar4 < 0) {
          *piVar4 = 0;
        }
        iVar3 = *piVar4;
        if (iVar3 < (int)uVar1) {
          uVar1 = uVar1 - iVar3;
          *piVar4 = 0;
        }
        else {
          iVar3 = iVar3 - uVar1;
          uVar1 = 0;
          *piVar4 = iVar3;
        }
        if (((*piVar4 == 0) && (0 < iVar6)) && (*(int *)(uVar2 + 0x44) == iVar5)) {
          *(int *)(uVar2 + 0x44) = *(int *)(uVar2 + 0x44) + -1;
        }
        iVar6 = iVar6 + -1;
        piVar4 = piVar4 + -1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar6);
    }
  }
  *(int *)((int)this + 4) = param_1;
  return;
}


