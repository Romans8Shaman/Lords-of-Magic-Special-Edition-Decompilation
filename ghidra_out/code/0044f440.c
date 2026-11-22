
undefined4 __thiscall FUN_0044f440(void *this,int *param_1)

{
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  
  uVar1 = FUN_00482ac0(this,*param_1,3);
  this_00 = (void *)FUN_00482ac0(this,*param_1,2);
  if (uVar1 != 0) {
    uVar2 = FUN_0044f180(param_1[1],param_1[2]);
    return uVar2;
  }
  if (this_00 == (void *)0x0) {
    return 0;
  }
  uVar2 = FUN_0043f4e0(this_00,param_1[1],param_1[2]);
  return uVar2;
}


