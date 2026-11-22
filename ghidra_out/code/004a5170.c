
int __thiscall FUN_004a5170(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x5c);
  if (param_1 < 0) {
    param_1 = param_1 % iVar1 + iVar1;
  }
  else if (iVar1 <= param_1) {
    param_1 = param_1 % iVar1;
  }
  iVar2 = *(int *)((int)this + 0x60);
  if (param_2 < 0) {
    return (param_2 % iVar2 + iVar2) * iVar1 + param_1;
  }
  if (iVar2 <= param_2) {
    param_2 = param_2 % iVar2;
  }
  return param_2 * iVar1 + param_1;
}


