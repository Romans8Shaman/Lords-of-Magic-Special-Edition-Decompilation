
int * __cdecl FUN_00537200(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(/*IC:0053720f*/**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x3c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = (/*IC:0053722a*/**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,param_3);
  piVar1[9] = iVar2;
  if (iVar2 == 0) {
    (/*IC:0053723c*/**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    return (int *)0x0;
  }
  piVar1[10] = param_3 + iVar2;
  piVar1[0xd] = param_2;
  *piVar1 = 0;
  FUN_00537160(piVar1,param_1,(int *)0x0);
  return piVar1;
}


