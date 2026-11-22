
void __thiscall FUN_005179f0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x202c0);
  if (param_1 < 0) {
    param_1 = param_1 % iVar1 + iVar1;
  }
  else if (iVar1 <= param_1) {
    param_1 = param_1 % iVar1;
  }
  iVar1 = *(int *)((int)this + 0x202c4);
  if (param_2 < 0) {
    FUN_00512350(this,param_1,param_2 % iVar1 + iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    param_2 = param_2 % iVar1;
  }
  FUN_00512350(this,param_1,param_2);
  return;
}


