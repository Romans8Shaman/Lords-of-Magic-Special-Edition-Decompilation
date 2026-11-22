
void __fastcall FUN_0047cb00(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0047cb0e*/**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0047cb25*/**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc0);
  if (puVar1 != (undefined4 *)0x0) {
    (/*IC:0047cb3f*/**(code **)*puVar1)(puVar1,1);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}


