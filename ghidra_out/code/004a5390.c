
undefined4 FUN_004a5390(int *param_1)

{
  int *piVar1;
  int local_8;
  char local_4 [4];
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_005397f0((char *)&local_8,4,1,param_1);
  FUN_005397f0((char *)&param_1,4,1,piVar1);
  FUN_005397f0(local_4,4,1,piVar1);
  FUN_0053a140(piVar1,(int)param_1 * local_8 * 8,1);
  return 1;
}


