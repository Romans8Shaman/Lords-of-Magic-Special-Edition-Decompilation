
int __thiscall FUN_00406b50(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar3 = *(int *)((int)this + 0x34);
  iVar6 = *(int *)((int)this + 0x40);
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  for (; iVar6 <= iVar3; iVar6 = iVar6 + 1) {
    iVar1 = FUN_004f6000(&DAT_005ae974,iVar6);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x48) == param_1)) &&
       ((iVar2 = FUN_00407d50(iVar1), iVar2 == 0 && ((*(byte *)(iVar1 + 0x30) & 0x20) != 0)))) {
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + *(int *)(iVar1 + 0x1c) % DAT_005ae9c4;
      local_8 = local_8 + *(int *)(iVar1 + 0x1c) / DAT_005ae9c4;
    }
  }
  if (iVar5 < 1) {
    return -1;
  }
  iVar3 = FUN_004a51c0(&DAT_005ae958,iVar4 / iVar5,local_8 / iVar5);
  return iVar3;
}


