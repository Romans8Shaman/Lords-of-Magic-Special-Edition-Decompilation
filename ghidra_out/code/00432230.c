
undefined4 __thiscall FUN_00432230(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x18) == 7) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 0x10) = param_1;
  if (iVar1 == param_1) {
    iVar1 = *(int *)((int)this + 0xc);
  }
  *(int *)((int)this + 0x14) = iVar1;
  *(undefined4 *)((int)this + 0x18) = 5;
  return 1;
}


