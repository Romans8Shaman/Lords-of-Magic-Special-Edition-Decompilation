
uint __fastcall FUN_00419460(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x538) < 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 & 0x1000) != 0) {
    return 0;
  }
  if ((~uVar1 & 0x100) == 0) {
    return 0;
  }
  return (uVar1 & 0xff) >> 4 & 1;
}


