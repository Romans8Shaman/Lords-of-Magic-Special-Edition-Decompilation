
int __thiscall FUN_005005f0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 & 0xff000000) == 0x11000000) &&
     ((int)(param_1 & 0xffffff) < *(int *)((int)this + 0x25598))) {
    iVar1 = (param_1 & 0xffffff) * 0x80;
    iVar2 = FUN_0048d730(*(int *)((int)this + 0x255a0) + iVar1);
    if (iVar2 != 0) {
      return *(int *)((int)this + 0x255a0) + iVar1;
    }
  }
  return 0;
}


