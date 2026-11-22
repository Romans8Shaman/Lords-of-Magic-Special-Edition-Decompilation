
undefined4 __thiscall FUN_004a54e0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)((int)this + 0x68);
  FUN_00539660((char *)piVar1,4,1,param_1);
  iVar2 = 0;
  if (0 < *piVar1) {
    do {
      FUN_00539660((char *)(*(int *)((int)this + 100) + 4 + iVar2 * 8),4,1,param_1);
      if ((char)iVar2 == -1) {
        FUN_00487730(&DAT_005aa12c,param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  return 1;
}


