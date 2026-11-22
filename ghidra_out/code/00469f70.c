
void __fastcall FUN_00469f70(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  piVar3 = &DAT_005577e0;
  piVar4 = param_1 + 0x19;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  (/*IC:00469f87*/**(code **)(iVar1 + 0x2c))(param_1);
  FUN_00519b30(&DAT_005876d0,1);
  return;
}


