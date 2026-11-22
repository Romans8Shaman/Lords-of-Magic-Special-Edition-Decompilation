
void FUN_00479050(undefined4 *param_1,int *param_2)

{
  int *a1;
  int iVar1;
  
  a1 = (int *)*param_2;
  if (a1 != (int *)0x0) {
    (/*IC:0047905f*/**(code **)(*a1 + 8))(a1);
    *param_2 = 0;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0xffffffff;
      param_1 = param_1 + 1;
    }
  }
  return;
}


