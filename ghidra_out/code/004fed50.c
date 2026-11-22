
undefined4 __fastcall FUN_004fed50(int param_1)

{
  char local_21c [260];
  uint local_118 [70];
  
  if (*(int *)(param_1 + 0x110) == 0) {
    return 0;
  }
  FUN_0053b850(local_21c,0x104);
  FUN_0053b7b0(*(LPCSTR *)(param_1 + 0x110));
  FUN_0053af20(s_lomse_dat_005734c4,local_118);
  GetDriveTypeA((LPCSTR)0x0);
  FUN_0053b7b0(local_21c);
  return 1;
}


