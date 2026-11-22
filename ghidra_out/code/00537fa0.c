
int __cdecl FUN_00537fa0(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00538000(param_1,0x13,0x13,0,0,param_3,param_2,param_4);
  if (iVar1 == -3) {
    *(char **)(param_4 + 0x18) = s_oversubscribed_dynamic_bit_lengt_0057466c;
    return -3;
  }
  if ((iVar1 == -5) || (*param_2 == 0)) {
    FUN_00538770(*param_3,param_4);
    *(char **)(param_4 + 0x18) = s_incomplete_dynamic_bit_lengths_t_00574648;
    iVar1 = -3;
  }
  return iVar1;
}


