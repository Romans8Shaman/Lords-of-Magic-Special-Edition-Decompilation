
void __cdecl FUN_0045a1c0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int local_20 [8];
  
  local_20[1] = 0;
  local_20[2] = 0xfffffffe;
  local_20[3] = 2;
  local_20[4] = 0xfffffffc;
  local_20[5] = 4;
  local_20[6] = 0xfffffffa;
  local_20[7] = 6;
  iVar1 = (int)((ulonglong)((longlong)param_1 * 0x6db6db6d) >> 0x20) - param_1;
  local_20[0] = ((iVar1 >> 2) - (iVar1 >> 0x1f)) * 2;
  param_1 = local_20[param_1 % 7 + 1];
  FUN_0045a360(&param_1,local_20,(char)param_2);
  *param_3 = *param_3 + param_1;
  *param_4 = *param_4 - local_20[0];
  return;
}


