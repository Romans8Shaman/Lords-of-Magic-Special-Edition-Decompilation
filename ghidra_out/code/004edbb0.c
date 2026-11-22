
undefined4 __thiscall FUN_004edbb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x40);
  if (iVar1 < iVar4) {
    return 0;
  }
  while ((((iVar2 = FUN_004f6000(&DAT_005ae974,iVar4), iVar2 == 0 || (*(int *)(iVar2 + 4) != 0)) ||
          ((~*(uint *)(iVar2 + 0x30) & 0x100) == 0)) ||
         (((uVar3 = FUN_00407d70(iVar2), uVar3 != 0 || (uVar3 = FUN_00407d60(iVar2), uVar3 != 0)) ||
          ((uVar3 = FUN_00407d80(iVar2), uVar3 != 0 || (*(int *)(iVar2 + 0x1c) != param_1))))))) {
    iVar4 = iVar4 + 1;
    if (iVar1 < iVar4) {
      return 0;
    }
  }
  return 1;
}


