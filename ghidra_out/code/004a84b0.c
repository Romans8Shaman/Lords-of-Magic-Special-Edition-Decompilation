
undefined4 __thiscall FUN_004a84b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 % *(int *)((int)this + 0x6c);
  iVar5 = param_1 / *(int *)((int)this + 0x6c);
  iVar3 = *(int *)((int)this + 0xb0);
  iVar4 = *(int *)((int)this + 0xb4);
  iVar1 = *(int *)((int)this + 0xb8) + -1 + iVar3;
  iVar2 = *(int *)((int)this + 0xbc) + -1 + iVar4;
  if ((*(int *)((int)this + 0x5c) <= iVar1) && (iVar6 < iVar3)) {
    iVar6 = iVar6 + *(int *)((int)this + 0x5c);
  }
  if ((*(int *)((int)this + 0x60) <= iVar2) && (iVar5 < iVar4)) {
    iVar5 = iVar5 + *(int *)((int)this + 0x60);
  }
  if ((((iVar6 < iVar3) || (iVar5 < iVar4)) || (iVar1 < iVar6)) || (iVar2 < iVar5)) {
    return 0;
  }
  return 1;
}


