
void __thiscall FUN_00522000(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_005291e0((int)this);
  if (uVar2 == 0) {
    *param_1 = *(int *)((int)this + 4);
    FUN_00527e90(this,0x2f,param_2);
    return;
  }
  iVar5 = *(int *)(uVar2 + 0x44);
  iVar4 = 0;
  if (0 < iVar5) {
    piVar3 = (int *)(uVar2 + 0x14);
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + iVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar4;
  *param_1 = iVar4;
  FUN_00527e90(this,0x2f,param_2);
  iVar5 = FUN_00521e00(this);
  if (iVar5 == 0) {
    *param_2 = *param_1;
    return;
  }
  *param_2 = *(int *)(iVar5 + 0x120) * *param_2;
  return;
}


