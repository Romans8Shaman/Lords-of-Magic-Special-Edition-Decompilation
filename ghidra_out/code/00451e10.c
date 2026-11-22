
undefined4 FUN_00451e10(int *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*param_1,3);
  if (this == (void *)0x0) {
    return 0;
  }
  FUN_00451d30(this,iVar1,iVar2);
  return 1;
}


