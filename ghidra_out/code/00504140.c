
void __thiscall FUN_00504140(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x24);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar3 <= *(int *)((int)this + 0x18)) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 8) + iVar3 * 4);
      if (iVar2 != 0) {
        if ((*(int *)(iVar2 + 4) == 7) && (*(int *)(iVar2 + 0x44) == iVar1)) {
          *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
          *(byte *)(iVar2 + 0x34) = *(byte *)(iVar2 + 0x34) | 2;
        }
        if ((*(int *)(iVar2 + 4) == 0) && (*(int *)(iVar2 + 0x28) == iVar1)) {
          *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
          *(byte *)(iVar2 + 0x34) = *(byte *)(iVar2 + 0x34) | 2;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x18));
  }
  return;
}


