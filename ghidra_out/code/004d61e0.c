
undefined4 __thiscall FUN_004d61e0(void *this,void *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (*(int *)((int)this + 4) <= param_2)) {
    FUN_004d41c0(param_1,s_invalid_data_id_00555b78);
    return 0;
  }
  uVar1 = FUN_004d6260(param_1,*(int *)(*(int *)this + param_2 * 8),
                       *(undefined4 *)(*(int *)this + 4 + param_2 * 8),param_3);
  return uVar1;
}


