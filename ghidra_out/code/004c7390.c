
undefined4 __thiscall FUN_004c7390(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1bc));
  FUN_00539660((char *)((int)this + 4),4,1,param_1);
  FUN_00539660((char *)((int)this + 8),4,1,param_1);
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_00539660(*(char **)this,*(int *)((int)this + 0xc) * 6,1,param_1);
  }
  FUN_00539660((char *)((int)this + 0x1b0),4,1,param_1);
  iVar2 = *(int *)((int)this + 0x1b0);
  if ((iVar2 != 0) && (iVar1 = 0, 0 < iVar2)) {
    iVar2 = 0;
    do {
      FUN_004c5840((void *)(*(int *)((int)this + 0x1ac) + iVar2),param_1);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x19c;
    } while (iVar1 < *(int *)((int)this + 0x1b0));
  }
  FUN_004c5840((void *)((int)this + 0x10),param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1bc));
  return 1;
}


