
int __thiscall FUN_004f6590(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)((int)this + 8) != 0) {
    iVar3 = *(int *)((int)this + 0x24);
    if (iVar3 <= *(int *)((int)this + 0x18)) {
      piVar2 = (int *)(*(int *)((int)this + 8) + iVar3 * 4);
      do {
        iVar1 = *piVar2;
        if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 7)) && (*(int *)(iVar1 + 0x44) == param_1)) &&
           (*(int *)(iVar1 + 0x48) == param_2)) {
          return iVar1;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 <= *(int *)((int)this + 0x18));
    }
  }
  return 0;
}


