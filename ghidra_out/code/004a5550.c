
undefined4 __thiscall FUN_004a5550(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_005397f0((char *)&param_1,4,1,param_1);
  if (param_1 != *(int **)((int)this + 0x68)) {
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)*(int **)((int)this + 0x68)) {
    do {
      FUN_005397f0((char *)(*(int *)((int)this + 100) + 4 + iVar2 * 8),4,1,piVar1);
      if ((char)iVar2 == -1) {
        FUN_00487730(&DAT_005aa12c,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x68));
  }
  return 1;
}


