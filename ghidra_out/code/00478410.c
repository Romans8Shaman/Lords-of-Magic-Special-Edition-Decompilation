
undefined4 __fastcall FUN_00478410(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  timeKillEvent(param_1[0x486]);
  if (param_1[0x4ed] != 0) {
    iVar2 = 5;
    piVar3 = param_1;
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (/*IC:00478440*/**(code **)(*piVar1 + 8))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar3 = param_1 + 5;
    iVar2 = 0x32;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        FUN_00478f60((int *)*piVar3);
        (/*IC:0047846a*/**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar3 = param_1 + 0x37;
    iVar2 = 5;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        FUN_00478f60((int *)*piVar3);
        (/*IC:00478497*/**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar3 = param_1 + 0x3f0;
    iVar2 = 2;
    do {
      if (piVar3[1] != 0) {
        FUN_004b32c0(piVar3);
      }
      piVar3 = piVar3 + 0x4b;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (/*IC:004784d1*/**(code **)(*(int *)param_1[0x4ed] + 8))((int *)param_1[0x4ed]);
    param_1[0x4ed] = 0;
  }
  return 1;
}


