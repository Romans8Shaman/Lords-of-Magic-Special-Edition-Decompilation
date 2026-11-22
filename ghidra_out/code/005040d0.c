
void __thiscall FUN_005040d0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x24);
  if (iVar3 <= *(int *)((int)this + 0x18)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 8) + iVar3 * 4);
      if (iVar1 != 0) {
        if ((*(int *)(iVar1 + 4) == 7) && (*(int *)(iVar1 + 0x44) == *(int *)(param_1 + 0x44))) {
          uVar2 = *(undefined4 *)(param_1 + 0x38);
          *(byte *)(iVar1 + 0x34) = *(byte *)(iVar1 + 0x34) | 2;
          *(undefined4 *)(iVar1 + 0x38) = uVar2;
        }
        if ((*(int *)(iVar1 + 4) == 0) && (*(int *)(iVar1 + 0x28) == *(int *)(param_1 + 0x44))) {
          *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
          *(byte *)(iVar1 + 0x34) = *(byte *)(iVar1 + 0x34) | 2;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x18));
  }
  return;
}


