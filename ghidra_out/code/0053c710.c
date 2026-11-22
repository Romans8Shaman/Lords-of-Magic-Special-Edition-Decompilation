
void __cdecl FUN_0053c710(int param_1,uint *param_2,byte *param_3)

{
  uint uStack_8;
  uint uStack_4;
  
  if (param_1 == 0) {
    FUN_005440e0((uint *)&param_3,param_3);
    *param_2 = (uint)param_3;
    return;
  }
  FUN_005440a0(&uStack_8,param_3);
  *param_2 = uStack_8;
  param_2[1] = uStack_4;
  return;
}


