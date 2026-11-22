
void __fastcall FUN_004b0260(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:004b026d*/**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:004b0280*/**(code **)*puVar1)(puVar1,1);
    param_1[1] = 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:004b0294*/**(code **)*puVar1)(puVar1,1);
    param_1[2] = 0;
  }
  return;
}


