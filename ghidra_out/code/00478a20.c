
void __fastcall FUN_00478a20(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1[0x4ed] != 0) {
    piVar2 = param_1 + 0x3c;
    iVar3 = 5;
    do {
      piVar4 = (int *)*param_1;
      if (piVar4 != (int *)0x0) {
        (/*IC:00478a44*/**(code **)(*piVar4 + 0x48))(piVar4);
        (/*IC:00478a4c*/**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
        *param_1 = 0;
        piVar4 = piVar2;
        for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = -1;
          piVar4 = piVar4 + 1;
        }
      }
      param_1 = param_1 + 1;
      piVar2 = piVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


