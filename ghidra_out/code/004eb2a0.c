
undefined4 __thiscall FUN_004eb2a0(void *this,char *param_1,size_t param_2,undefined4 param_3)

{
  int iVar1;
  char local_200 [512];
  
  iVar1 = (/*IC:004eb2b0*/**(code **)((int)this + 0x54))(local_200,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  _strncpy(param_1,local_200,param_2);
  return 1;
}


