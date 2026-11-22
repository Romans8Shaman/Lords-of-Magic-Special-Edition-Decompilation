
undefined4 __thiscall FUN_0052bd30(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)((int)this + 0x18);
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar2,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + iVar3 * 0xc + 0x1c) = param_1;
      return 1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar3 < 0x1e);
  return 0;
}


