
void __thiscall FUN_004a9ca0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      if (param_1 != 0) {
        *(uint *)(*(int *)((int)this + 100) + 4 + iVar1 * 8) =
             *(uint *)(*(int *)((int)this + 100) + 4 + iVar1 * 8) & 0xff5c0fff;
      }
      FUN_004a9b90(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x68));
  }
  for (iVar1 = FUN_004fbe60((void *)((int)this + 0x1c),0,1); iVar1 != 0;
      iVar1 = FUN_004fbe60((void *)((int)this + 0x1c),iVar1,1)) {
    FUN_0050d770(iVar1);
  }
  return;
}


