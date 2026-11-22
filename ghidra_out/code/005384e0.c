
int __cdecl
FUN_005384e0(uint param_1,uint param_2,int *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,int param_8)

{
  int iVar1;
  
  iVar1 = FUN_00538000(param_3,param_1,0x101,0x54eca0,0x54ed20,param_6,param_4,param_8);
  if ((iVar1 != 0) || (*param_4 == 0)) {
    if (iVar1 == -3) {
      *(char **)(param_8 + 0x18) = s_oversubscribed_literal_length_tr_005746b4;
      return -3;
    }
    if (iVar1 != -4) {
      FUN_00538770(*param_6,param_8);
      *(char **)(param_8 + 0x18) = s_incomplete_literal_length_tree_00574694;
      iVar1 = -3;
    }
    return iVar1;
  }
  iVar1 = FUN_00538000(param_3 + param_1,param_2,0,0x54eda0,0x54ee18,param_7,param_5,param_8);
  if ((iVar1 == 0) && ((*param_5 != 0 || (param_1 < 0x102)))) {
    return 0;
  }
  if (iVar1 == -3) {
    *(char **)(param_8 + 0x18) = s_oversubscribed_distance_tree_00574718;
  }
  else {
    if (iVar1 == -5) {
      FUN_00538770(*param_7,param_8);
      *(char **)(param_8 + 0x18) = s_incomplete_distance_tree_005746fc;
    }
    else {
      if (iVar1 == -4) goto LAB_005385a5;
      *(char **)(param_8 + 0x18) = s_empty_distance_tree_with_lengths_005746d8;
    }
    iVar1 = -3;
  }
LAB_005385a5:
  FUN_00538770(*param_6,param_8);
  return iVar1;
}


