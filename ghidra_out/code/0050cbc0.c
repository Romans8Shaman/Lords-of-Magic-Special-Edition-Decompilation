
void __fastcall FUN_0050cbc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((DAT_005ccab8 < 0) || (*(short *)(param_1 + 0x4e) <= DAT_005ccab8)) ||
     (*(int *)(param_1 + 0x50) == 0)) {
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    if (puVar1 != (undefined4 *)0x0) {
      (/*IC:0050cc09*/**(code **)*puVar1)(puVar1,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else {
    iVar2 = DAT_005ccab8 * 0xc;
    puVar1 = *(undefined4 **)(iVar2 + 8 + *(int *)(param_1 + 0x50));
    if (puVar1 != (undefined4 *)0x0) {
      (/*IC:0050cbee*/**(code **)*puVar1)(puVar1,1);
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 8 + iVar2) = 0;
      return;
    }
  }
  return;
}


