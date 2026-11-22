
void __cdecl FUN_0053cfb0(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((param_2[3] & 0x1000U) != 0)) {
    FUN_0053cdb0(param_2);
    param_2[6] = 0;
    param_2[3] = param_2[3] & 0xffffeeff;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}


