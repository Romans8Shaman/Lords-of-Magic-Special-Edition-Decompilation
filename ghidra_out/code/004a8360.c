
undefined4 * __thiscall FUN_004a8360(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(*(int *)((int)this + 100) + param_1 * 8);
  while( true ) {
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = FUN_00485080(&DAT_005aa12c,*(int *)(iVar1 + 0x28),0x2f);
    if (puVar2 != (undefined4 *)0x0) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  return puVar2;
}


