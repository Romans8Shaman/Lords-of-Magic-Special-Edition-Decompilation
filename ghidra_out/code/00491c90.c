
void __thiscall FUN_00491c90(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)this) {
    do {
      if ((*(int *)(*(int *)((int)this + 4) + iVar2 * 8) == 0xe) &&
         (pvVar1 = *(void **)(*(int *)((int)this + 4) + iVar2 * 8 + 4),
         *(int *)((int)pvVar1 + 0x3c) == param_1)) {
        FUN_0049dbe0(pvVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)this);
  }
  return;
}


