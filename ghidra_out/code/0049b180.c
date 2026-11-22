
undefined4 __thiscall FUN_0049b180(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_6c [27];
  
  piVar3 = local_6c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_6c[0] = 0x6c;
  piVar3 = *(int **)((int)this + param_1 * 4 + 0x684);
  if (piVar3 == (int *)0x0) {
    local_6c[3] = param_2;
  }
  else {
    (/*IC:0049b1b4*/**(code **)(*piVar3 + 0x58))(piVar3,local_6c);
    if ((param_2 <= local_6c[3]) && (param_3 <= local_6c[2])) {
      return 1;
    }
    if (local_6c[3] < param_2) {
      local_6c[3] = param_2;
    }
    if (param_3 <= local_6c[2]) {
      param_3 = local_6c[2];
    }
  }
  uVar1 = FUN_004750b0(this,param_1,local_6c[3],param_3,param_4);
  return uVar1;
}


