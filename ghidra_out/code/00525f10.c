
uint __fastcall FUN_00525f10(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return *(uint *)(*(int *)(param_1 + 0x14) + 8) & 1;
}


