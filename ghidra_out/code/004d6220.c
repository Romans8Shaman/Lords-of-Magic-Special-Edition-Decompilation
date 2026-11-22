
undefined4 __thiscall FUN_004d6220(void *this,void *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004d41c0(param_1,s_invalid_data_id_00555b78);
    return 0;
  }
  bVar1 = FUN_004d63f0(param_1,*(uint *)(*(int *)this + param_2 * 8),
                       *(undefined4 *)(*(int *)this + 4 + param_2 * 8),param_3);
  return CONCAT31(extraout_var,bVar1);
}


