
void __fastcall FUN_004fe1b0(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  if (*(uint *)(param_1 + 0x22ec4) < DVar1 - *(int *)(param_1 + 0x22ec8)) {
    FUN_004fe030(param_1);
  }
  return;
}


