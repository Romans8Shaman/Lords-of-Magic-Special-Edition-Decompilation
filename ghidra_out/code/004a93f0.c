
void __thiscall FUN_004a93f0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (param_3 - param_1) + 1;
  *(int *)((int)this + 0xb8) = iVar1;
  if (iVar1 < 0) {
    *(int *)((int)this + 0xb8) = *(int *)((int)this + 0x5c) + iVar1;
  }
  iVar1 = (param_4 - param_2) + 1;
  *(int *)((int)this + 0xbc) = iVar1;
  if (iVar1 < 0) {
    *(int *)((int)this + 0xbc) = *(int *)((int)this + 0x60) + iVar1;
  }
  *(int *)((int)this + 0xb0) = param_1;
  if (param_1 < 0) {
    *(int *)((int)this + 0xb0) = *(int *)((int)this + 0x5c) + param_1;
  }
  *(int *)((int)this + 0xb4) = param_2;
  if (param_2 < 0) {
    *(int *)((int)this + 0xb4) = *(int *)((int)this + 0x60) + param_2;
  }
  return;
}


