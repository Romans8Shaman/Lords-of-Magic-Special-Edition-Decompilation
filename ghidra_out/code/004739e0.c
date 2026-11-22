
void __fastcall FUN_004739e0(int param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0x38) == 1) {
    DVar1 = GetTickCount();
    if (*(uint *)(param_1 + 0xb0) < DVar1 - *(int *)(param_1 + 0xb8)) {
      DVar1 = GetTickCount();
      *(DWORD *)(param_1 + 0xb8) = DVar1;
      *(undefined4 *)(param_1 + 0x38) = 2;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x38) == 2) {
    DVar1 = GetTickCount();
    if (*(uint *)(param_1 + 0xb4) < DVar1 - *(int *)(param_1 + 0xb8)) {
      FUN_00473930(param_1);
    }
  }
  return;
}


