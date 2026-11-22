
void __thiscall FUN_004f6540(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 8) != 0) && (iVar3 = 0, -1 < *(int *)((int)this + 0x18))) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 8) + iVar3 * 4);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + param_1;
        piVar1 = (int *)(*(int *)(*(int *)((int)this + 8) + iVar3 * 4) + 0x10);
        *piVar1 = *piVar1 + param_2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)((int)this + 0x18));
  }
  return;
}


