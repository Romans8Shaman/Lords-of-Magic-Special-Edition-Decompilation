
undefined4 __thiscall FUN_0052b640(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  
  FUN_0052bc40((int)this);
  this_00 = (int *)FUN_004f6000(&DAT_005ae974,param_1);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  iVar1 = (/*IC:0052b669*/**(code **)(*this_00 + 0x3c))(this_00);
  if (iVar1 != *(int *)this) {
    return 0;
  }
  switch(this_00[1]) {
  case 0:
    FUN_0052b6f0(this,param_1,0);
    return 1;
  case 1:
    FUN_0052d390(this,param_1);
    break;
  case 2:
    FUN_0052d320(this,param_1);
    return 1;
  case 3:
    FUN_0052d290(this,param_1);
    return 1;
  }
  return 1;
}


