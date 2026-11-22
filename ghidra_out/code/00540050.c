
float10 * __cdecl
FUN_00540050(float10 *__return_storage_ptr__,int param_1,int param_2,undefined4 in_stack_c,
            undefined4 in_stack_10,undefined4 in_stack_14,undefined4 in_stack_18,
            undefined4 in_stack_1c,undefined4 in_stack_20)

{
  int iVar1;
  float10 *pfVar2;
  
  iVar1 = FUN_00540130(param_1);
  if (iVar1 == 0) {
    FUN_00540380();
    pfVar2 = (float10 *)FUN_00540100((int)__return_storage_ptr__);
    return pfVar2;
  }
  FUN_00540380();
  pfVar2 = (float10 *)op_C();
  if (pfVar2 == (float10 *)0x0) {
    pfVar2 = (float10 *)FUN_00540100((int)__return_storage_ptr__);
  }
  return pfVar2;
}


