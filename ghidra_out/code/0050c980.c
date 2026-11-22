
uint __fastcall FUN_0050c980(int *param_1)

{
  int iVar1;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_1[0x15] < 0) {
    return 0;
  }
  iVar1 = FUN_0050c7f0((int)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_1[0xc] & 8U) == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffffef;
    iVar1 = (/*IC:0050c9b9*/**(code **)(*param_1 + 0x40))(param_1,&local_14);
    if ((iVar1 != 0) &&
       ((((0 < local_14 || (0 < iStack_10)) || (0 < iStack_c)) || ((0 < iStack_8 || (0 < iStack_4)))
        ))) {
      param_1[0xc] = param_1[0xc] | 0x10;
    }
    param_1[0xc] = param_1[0xc] | 8;
  }
  return (uint)param_1[0xc] >> 4 & 1;
}


