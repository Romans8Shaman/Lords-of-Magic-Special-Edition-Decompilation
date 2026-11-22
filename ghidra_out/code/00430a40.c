
void __thiscall FUN_00430a40(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    *(int *)((int)this + 0x10) = param_2;
  }
  else {
    if (param_1 == 1) {
      *(int *)((int)this + 0x14) = param_2;
      return;
    }
    if (param_1 == 2) {
      iVar1 = FUN_00492760(&DAT_005a7b50,param_2);
      *(int *)((int)this + 8) = iVar1;
      return;
    }
  }
  return;
}


