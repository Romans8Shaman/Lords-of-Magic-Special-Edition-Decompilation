
uint __thiscall FUN_00449a20(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    param_1 = *(int *)((int)this + 0x48);
  }
  switch(*(undefined2 *)((int)this + 0x56)) {
  case 0:
    uVar1 = FUN_00449060(param_1);
    return uVar1;
  case 1:
    uVar1 = FUN_00449160(param_1);
    return uVar1;
  case 2:
    uVar1 = FUN_00449250(param_1);
    return uVar1;
  case 3:
    uVar1 = FUN_00449490(param_1);
    return uVar1;
  case 4:
    uVar1 = FUN_004495d0(param_1);
    return uVar1;
  case 5:
    uVar1 = FUN_004496d0(param_1);
    return uVar1;
  case 6:
    uVar1 = FUN_00449790(param_1);
    return uVar1;
  case 7:
    uVar1 = FUN_00449840(param_1);
    return uVar1;
  default:
    return 0xffffffff;
  }
}


