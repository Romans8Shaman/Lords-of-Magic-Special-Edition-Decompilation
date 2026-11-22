
undefined4 __cdecl FUN_00538770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    *(int *)(param_1 + -4) = iVar2;
    iVar2 = param_1;
    param_1 = iVar1;
  }
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + -4);
    (/*IC:0053879d*/**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),iVar2 + -8);
    iVar2 = iVar1;
  }
  return 0;
}


