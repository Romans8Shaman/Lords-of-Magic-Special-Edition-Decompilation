
uint __fastcall FUN_005291e0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 & (*(int *)(uVar1 + 4) != 3) - 1;
}


