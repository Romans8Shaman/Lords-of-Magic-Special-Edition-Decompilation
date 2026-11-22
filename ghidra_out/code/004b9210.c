
undefined4 __thiscall FUN_004b9210(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((int)param_1[1] < 0) || (iVar1 = FUN_004b6b30(param_1[1]), (&DAT_005d1ecc)[iVar1] == 0)) {
    uVar2 = FUN_004b7b50(*param_1,param_1[1]);
    return uVar2;
  }
  return 0;
}


