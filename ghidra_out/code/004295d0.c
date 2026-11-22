
undefined4 __thiscall FUN_004295d0(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1[5] == 0) {
    iVar1 = FUN_00429150(this,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_00429380(this,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


