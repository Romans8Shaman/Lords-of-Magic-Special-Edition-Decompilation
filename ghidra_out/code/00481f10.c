
void __fastcall FUN_00481f10(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x505c) = DVar1;
  *(DWORD *)(param_1 + 0x5058) = DVar1;
  *(undefined4 *)(param_1 + 0x5060) = 0;
  return;
}


