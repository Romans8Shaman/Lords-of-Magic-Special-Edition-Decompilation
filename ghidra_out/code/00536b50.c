
undefined4 __cdecl FUN_00536b50(int param_1)

{
  int *piVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) || (*(int *)(param_1 + 0x24) == 0)) {
    return 0xfffffffe;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
  if (piVar1 != (int *)0x0) {
    FUN_00537f60(piVar1,param_1);
  }
  (/*IC:00536b80*/**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}


