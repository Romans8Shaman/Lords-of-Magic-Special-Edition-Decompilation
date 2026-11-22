
int __thiscall FUN_0049dcf0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0049d980((int)this);
  iVar2 = (int)(uVar1 * param_1 + (param_2 >> 1)) / param_2;
  if ((int)uVar1 <= iVar2) {
    iVar2 = iVar2 - uVar1;
  }
  return iVar2;
}


