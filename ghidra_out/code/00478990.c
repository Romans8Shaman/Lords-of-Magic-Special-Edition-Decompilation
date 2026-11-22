
undefined4 __fastcall FUN_00478990(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte local_8 [4];
  int *local_4;
  
  if (param_1[0x4ed] == 0) {
    return 0;
  }
  piVar4 = param_1 + 0x3c;
  iVar3 = 5;
  piVar5 = param_1;
  local_4 = param_1;
  do {
    if ((*piVar4 == piVar5[0x4e6]) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
      (/*IC:004789d6*/**(code **)(*piVar1 + 0x24))(piVar1,local_8);
      if ((local_8[0] & 4) != 0) {
        (/*IC:004789e5*/**(code **)(*(int *)*param_1 + 0x48))((int *)*param_1);
        (/*IC:004789ed*/**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
        *param_1 = 0;
        piVar5 = piVar4;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = -1;
          piVar5 = piVar5 + 1;
        }
        piVar5 = local_4;
      }
    }
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 1;
}


