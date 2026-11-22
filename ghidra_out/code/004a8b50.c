
int __thiscall FUN_004a8b50(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
    return 8;
  }
  iVar1 = *(int *)((int)this + 0x6c);
  uVar4 = param_2 % iVar1 - param_1 % iVar1;
  uVar3 = param_2 / iVar1 - param_1 / iVar1;
  if (*(int *)((int)this + 0x14) != 0) {
    iVar1 = *(int *)((int)this + 0x5c);
    if ((int)uVar4 < -(iVar1 >> 1)) {
      uVar4 = uVar4 + iVar1;
    }
    else if (iVar1 >> 1 < (int)uVar4) {
      uVar4 = uVar4 - iVar1;
    }
    iVar1 = *(int *)((int)this + 0x60);
    if ((int)uVar3 < -(iVar1 >> 1)) {
      uVar3 = uVar3 + iVar1;
    }
    else if (iVar1 >> 1 < (int)uVar3) {
      uVar3 = uVar3 - iVar1;
    }
  }
  iVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  iVar1 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if (iVar2 <= iVar1 >> 1) {
    return ((-1 < (int)uVar3) - 1 & 0xfffffffc) + 4;
  }
  if (iVar1 <= iVar2 >> 1) {
    return ((-1 < (int)uVar4) - 1 & 4) + 2;
  }
  if ((int)uVar4 < 0) {
    return ((-1 < (int)uVar3) - 1 & 2) + 5;
  }
  return ((-1 < (int)uVar3) - 1 & 0xfffffffe) + 3;
}


