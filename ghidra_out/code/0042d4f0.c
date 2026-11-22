
undefined4 __fastcall FUN_0042d4f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0042d501*/**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0042d511*/**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0042d521*/**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0042d531*/**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uVar2 = FUN_0042d720(param_1);
  return uVar2;
}


