
int __thiscall FUN_00420420(void *this)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 1;
  if (0 < *(int *)((int)this + 0x4c)) {
    pvVar3 = (void *)((int)this + 0xc4);
    do {
      iVar1 = FUN_00525fe0(pvVar3);
      if (iVar2 < iVar1) {
        iVar2 = FUN_00525fe0(pvVar3);
      }
      iVar4 = iVar4 + 1;
      pvVar3 = (void *)((int)pvVar3 + 0x4c);
    } while (iVar4 < *(int *)((int)this + 0x4c));
  }
  return iVar2;
}


