
void __cdecl FUN_00537160(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    *param_3 = param_1[0xe];
  }
  if ((*param_1 == 4) || (*param_1 == 5)) {
    (/*IC:0053718b*/**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
  }
  if (*param_1 == 6) {
    FUN_00538fa0(param_1[3],param_2);
    FUN_00538770(param_1[2],param_2);
    FUN_00538770(param_1[1],param_2);
  }
  *param_1 = 0;
  param_1[0xc] = param_1[9];
  param_1[0xb] = param_1[9];
  param_1[7] = 0;
  param_1[8] = 0;
  if ((code *)param_1[0xd] != (code *)0x0) {
    iVar1 = (/*IC:005371e7*/*(code *)param_1[0xd])(0,0,0);
    param_1[0xe] = iVar1;
    *(int *)(param_2 + 0x30) = iVar1;
  }
  return;
}


