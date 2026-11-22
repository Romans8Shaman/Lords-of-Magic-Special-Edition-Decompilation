
int __thiscall FUN_004348c0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  
  iVar3 = 0;
  if (param_1 != *(int *)((int)this + 8)) {
    param_2 = 1 - param_2;
  }
  iVar2 = 7;
  this_00 = (void *)((int)this + param_2 * 0x2a + 0x28);
  do {
    iVar1 = FUN_00434680(this_00,this,param_1);
    iVar3 = iVar3 + iVar1;
    this_00 = (void *)((int)this_00 + 6);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}


