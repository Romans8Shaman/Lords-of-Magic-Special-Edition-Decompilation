
int __thiscall FUN_00428770(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  iVar1 = *(int *)((int)this + 0x1c);
  if (*(int *)((int)this + 0x1c) == 0) {
    return 0;
  }
  do {
    iVar2 = iVar1;
    if (*(int *)(iVar2 + 0xc) == param_1) {
      if (iVar3 == 0) {
        *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(iVar2 + 0x14);
        return iVar2;
      }
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      return iVar2;
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    iVar3 = iVar2;
  } while (*(int *)(iVar2 + 0x14) != 0);
  return 0;
}


