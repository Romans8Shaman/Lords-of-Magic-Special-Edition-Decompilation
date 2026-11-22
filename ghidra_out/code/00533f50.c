
uint __cdecl FUN_00533f50(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
     ((iVar2 = *(int *)(iVar1 + 4), iVar2 != 0x2a && ((iVar2 != 0x71 && (iVar2 != 0x29a)))))) {
    return 0xfffffffe;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    (/*IC:00533f8a*/**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 8));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
  if (iVar1 != 0) {
    (/*IC:00533f9f*/**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  if (iVar1 != 0) {
    (/*IC:00533fb4*/**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
  if (iVar1 != 0) {
    (/*IC:00533fc9*/**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  (/*IC:00533fd7*/**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (iVar2 != 0x71) - 1 & 0xfffffffd;
}


