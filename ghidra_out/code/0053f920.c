
float10 __cdecl
FUN_0053f920(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  int iVar1;
  float10 *__return_storage_ptr__;
  float10 extraout_ST0;
  uint local_58 [14];
  uint local_20;
  
  iVar1 = FUN_0053fd20(param_1,(double *)&param_5,param_7);
  if (iVar1 == 0) {
    local_20 = local_20 & 0xfffffffe;
    FUN_0053f9e0(local_58,&param_7,(byte)param_1,param_2,&param_3,&param_5);
  }
  __return_storage_ptr__ = (float10 *)FUN_00540160(param_1);
  if ((DAT_00577b9c == 0) && (__return_storage_ptr__ != (float10 *)0x0)) {
    FUN_00540050(__return_storage_ptr__,param_2,param_3,param_4,0,0,param_5,param_6,param_7);
    return extraout_ST0;
  }
  FUN_00540100((int)__return_storage_ptr__);
  FUN_00540380();
  return (float10)(double)CONCAT44(param_6,param_5);
}


