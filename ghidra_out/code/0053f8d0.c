
float10 __cdecl FUN_0053f8d0(int param_1,int param_2,undefined4 param_3,...)

{
  DWORD *pDVar1;
  float10 extraout_ST0;
  undefined4 in_stack_00000010;
  
  if (DAT_00577b9c == 0) {
    FUN_00540050((float10 *)0x1,param_1,param_2,param_3,0,0,param_2,param_3,in_stack_00000010);
    return extraout_ST0;
  }
  pDVar1 = FUN_0053b4c0();
  *pDVar1 = 0x21;
  FUN_00540380();
  return (float10)(double)CONCAT44(param_3,param_2);
}


