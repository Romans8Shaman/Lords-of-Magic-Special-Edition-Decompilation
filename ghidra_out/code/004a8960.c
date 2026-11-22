
int __thiscall FUN_004a8960(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)((int)this + 0x6c);
  uVar1 = param_1 % iVar3 - param_2 % iVar3;
  uVar4 = (int)uVar1 >> 0x1f;
  iVar5 = (uVar1 ^ uVar4) - uVar4;
  uVar4 = param_1 / iVar3 - param_2 / iVar3;
  uVar1 = (int)uVar4 >> 0x1f;
  iVar2 = (uVar4 ^ uVar1) - uVar1;
  if (*(int *)((int)this + 0x14) != 0) {
    if (iVar3 - iVar5 <= iVar5) {
      iVar5 = iVar3 - iVar5;
    }
    iVar3 = *(int *)((int)this + 0x70) - iVar2;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
  }
  if (iVar2 <= iVar5) {
    iVar2 = iVar5;
  }
  return iVar2;
}


