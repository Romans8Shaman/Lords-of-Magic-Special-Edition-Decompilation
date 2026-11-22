
undefined4 __fastcall thunk_FUN_004b64d0(int param_1)

{
  DAT_005851a0 = 0;
  if (*(int **)(param_1 + 0x4b2c) != (int *)0x0) {
    (/*IC:004b64e9*/**(code **)(**(int **)(param_1 + 0x4b2c) + 0x44))();
    if (*(undefined4 **)(param_1 + 0x4b2c) != (undefined4 *)0x0) {
      (/*IC:004b64fa*/**(code **)**(undefined4 **)(param_1 + 0x4b2c))(1);
    }
    *(undefined4 *)(param_1 + 0x4b2c) = 0;
  }
  FUN_004c4d20((undefined4 *)&DAT_005cd2c4);
  return 1;
}


