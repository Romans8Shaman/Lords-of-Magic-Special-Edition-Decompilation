
int __thiscall FUN_004f5cb0(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = -1;
  if (0 < *(int *)((int)this + 0x24)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)((int)this + 0x1c) + iVar3;
      if (*(int *)(iVar4 + 0x4c) == param_1) {
        *(undefined4 *)(iVar4 + 0x44) = 0xffffffff;
        puVar1 = (uint *)(*(int *)((int)this + 0x1c) + 0x30 + iVar3);
        *puVar1 = *puVar1 | 2;
        *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x48 + iVar3) = 0;
        *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x4c + iVar3) = 0xffffffff;
        iVar2 = iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x58;
    } while (iVar5 < *(int *)((int)this + 0x24));
  }
  return iVar2;
}


