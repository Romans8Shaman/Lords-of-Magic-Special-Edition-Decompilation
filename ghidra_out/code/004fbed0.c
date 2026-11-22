
undefined4 * __thiscall FUN_004fbed0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    if (param_1 == 0) {
      iVar2 = *(int *)((int)this + 0x24);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28) + 1;
    }
    if (iVar2 <= *(int *)((int)this + 0x18)) {
      do {
        puVar1 = FUN_00485080(&DAT_005aa12c,iVar2,0x2f);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[10] = iVar2;
          return puVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(int *)((int)this + 0x18));
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}


